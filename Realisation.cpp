#include "Functions.h"

const double PI = 3.14159265358979323846;

// 1 задание
int Fact(int a) {
	if (a == 0) {
		return 1;
	}
	else {
		int i = a;
		int res = 1;
		for (; a/i != a; i--) {
			res = res * i;
		}
		return res;
	}
}

double Probability(int M, int N, int r, int k) {
	/*double zC1 = (double)Fact(k)* Fact(M - k);
	double C1 = (double)Fact(M) / zC1;
	double zC2 = (double)Fact(r - k) * Fact(N - M - r + k);
	double C2 = (double)Fact(N - M) / zC2;
	double zC3 = (double)Fact(Fact(r) * Fact(N - r));
	double C3 = (double)Fact(N) / zC3;*/

	double chislit = (double)Fact(M) * (double)Fact(N - M) * (double)Fact(r) * Fact(N - r);
	double znam = (double)Fact(k) * Fact(M - k) * (double)Fact(r - k) * Fact(N - M - r + k) * (double)Fact(N);

	double p = chislit / znam;
	return p;
}

std::vector<std::vector<int>> RandomVariable(int M, int N, int r, int numberE) {
	srand(time(0));
	int LeftBoarder = std::max(0, r + M - N);//левая граница для значений случайной величины
	int RightBoarder = std::min(M, r);//правая граница для значений случайной величины
	int dif = RightBoarder - LeftBoarder +1;
	std::vector<int> y; // все значения случайной величины
	std::vector<int> y_for_E;//выборка
	std::vector<int> n; //сколько раз yi встречается

	for (int i = 0; i < dif; i++) {
		y.push_back(i);
		n.push_back(0);
	}
	
	for (int i = 0; i < numberE; i++) {//провожу эксперимент numberE раз
		int MforE = M;
		int NforE = N;
		int success = 0;//переменная для подсчета количества выигрышных билетов в эксперименте
		for (int j = 0; j < r; j++) {//r раз генерирую случайную величину в диапазоне [0,1]
			double t = double(rand()) / RAND_MAX;
			double p = (double)MforE / NforE; //вероятность купить выигрышный билет
			if (t <= p) {//значение сгенерированного числа меньше вероятности, билет оказался выигрышным
				MforE--;//уменьшаем количество выигрышных билетов 
				success++;
			}
			NforE--;
		}
		if (success >= LeftBoarder && success <= RightBoarder) {
				y_for_E.push_back(success);
				n[success - LeftBoarder]++;
		}
		else {
			i--;
		}
	}

	std::sort(y_for_E.begin(), y_for_E.end());

	//int count = 1;
	//int zero_elem = y_for_E[0];
	//y.push_back(zero_elem);
	//if (numberE == 1) {
	//	y.push_back(y_for_E[0]);
	//	n.push_back(1);
	//}
	//else {
	//	for (int i = 0; i < numberE - 1; i++) {
	//		/*if (i == 1) {
	//			if (y_for_E[1] != y_for_E[0]) {
	//				y.push_back(y_for_E[0]);
	//				n.push_back(1);
	//			}
	//		}*/
	//		if (y_for_E[i] == y_for_E[i + 1]) {
	//			count++;
	//			if ((i + 1) == numberE) {
	//				y.push_back(y_for_E[i]);
	//				n.push_back(count);
	//				break;
	//			}
	//		}
	//		else {
	//			y.push_back(y_for_E[i]);
	//			n.push_back(count);
	//			count = 1;
	//		}
	//	}
	//	if (y_for_E[numberE - 2] != y_for_E[numberE - 1]) {
	//		y.push_back(y_for_E[numberE - 1]);
	//		n.push_back(1);
	//	}
	//}

	std::vector<std::vector<int>> result;
	result.push_back(y);//сама случайная величина
	result.push_back(n);
	result.push_back(y_for_E);
	return result;
}

// 2 задание
//double E_Value(int M, int N, int r) {
//	double number = (M + 1) * (r + 1) / (N + 2);
//	double k = -1;
//	if (number == floor(number)) {//если целое
//		double k1 = number;
//		double k2 = number - 1;
//		k = (k1 + k2) / 2;
//	}
//	else {
//		k = floor(number);
//	}
//	return k;
//}

double MatOz(std::vector<int> y, std::vector<double> p) {
	double Ave = 0.0;
	for (int i = 0; i < size(y); i++) {
		Ave += y[i]*p[i];
	}
	return Ave;
}

double SampleAverage(std::vector<int> y, std::vector<int> n) {
	double Ave = 0.0;
	for (int i = 0; i < y.size(); i++) {
		Ave += y[i];
	}
	int sum = 0;
	for (int i = 0; i < n.size(); i++) {
		sum += n[i];
	}
	Ave = Ave / sum;
	return Ave;
}

double Dispersion(std::vector<int> y, std::vector<double> p) {
	double D = 0.0;
	std::vector<int> y_square(y.size());
	for (int i = 0; i < size(y); i++) {
		y_square[i] = pow(y[i], 2);
	}
	double M1 = MatOz(y_square, p);
	double M2 = pow(MatOz(y, p), 2);
	D = M1-M2;
	return D;
}

double SampleDispersion(std::vector<int> y, std::vector<int> n) {
	double Ave = SampleAverage(y, n);
	double S = 0.0;
	for (int i = 0; i < size(y); i++) {
		S += pow(y[i] - Ave, 2);
	}
	double sum = 0.0;
	for (int i = 0; i < n.size(); i++) {
		sum += n[i];
	}
	return S / sum;
}

int Mediana(std::vector<int> y) {
	int Me = 0;
	int size = y.size();
	if (size % 2 == 0) {
		Me = (y[size/ 2] + y[(size/ 2) - 1]) / 2;
	}
	else {
		Me = y[size / 2];
	}
	return Me;
}

int R(std::vector<int> y) {
	size_t sz = y.size();
	int yn = y[sz - 1];
	int y0 = y[0];
	int r = yn - y0;
	return (r);
}

std::vector<double> FuncRaspr(int M, int N, int r, std::vector<int> v) {
	std::vector<double> res(v.size());
	res[0] = Probability(M, N, r, v[0]);
	for (int i = 1; i < v.size(); i++) {
		res[i] = res[i - 1] + Probability(M, N, r, v[i]); //добавь в выводе начальную точку 0??
	}
	return res;
}

std::vector<double> SampleF(std::vector<int> n) {
	std::vector<double> res(n.size());
	int sum = 0;
	for (int i = 0; i < n.size(); i++) {
		sum += n[i];
	}
	res[0] = (double)n[0]/sum;
	for (int i = 1; i < res.size(); i++) {
		res[i] = res[i - 1] + (double)n[i]/sum;
	}
	return res;
}

double Discrepancy(std::vector<double> FTheory, std::vector<double> FSample) {
	double max_dif = 0.0;
	for (int i = 0; i < FTheory.size(); i++) {
		double dif = abs(FTheory[i] - FSample[i]);
		if (dif > max_dif) {
			max_dif = dif;
		}
	}
	return max_dif;
}

//3 задание

std::vector<double> Q(std::vector<double> z, std::vector<int> y, int M, int N, int r) {
	std::vector<double> q(z.size());
	for (int i = 0; i < q.size(); i++) {
		q[i] = 0;
	}
	for (int i = 0; i < size(z)-1; i++) {
		for (int j = 0; j < size(y); j++) {
			if (y[j] >= z[i] && y[j] < z[i+1]) {
				q[i] += Probability(M, N, r, y[j]);
			}
			else continue;
		}
	}
	for (int j = 0; j < size(y); j++) {
		if (y[j] >= z[size(z) - 1]) {
			q[q.size()-1] += Probability(M, N, r, y[j]);
		}
	}
	return q;
}

double Gamma(double a) {
	if (a == 1) {
		return 1;
	}
	if (a == 1 / 2) {
		return pow(PI, 1 / 2);
	}
	else return (a - 1) * Gamma(a - 1);
}

double f(double x, int r) {
	if (x <= 0) {
		return 0;
	}
	else {
		double res = pow(2, -r / 2) * 1 / Gamma(r / 2) * pow(x, r / 2 - 1) * exp(-x / 2.);
		return res;
	}
}

double DistributionFunction(std::vector<double> q, std::vector<double> z, std::vector<int> x) {
	std::vector<int> n(q.size()); //посчитаем число наблюдений, попавших в тот или иной интервал
	for (int i = 0; i < n.size(); i++) {
		n[i] = 0;
	}
	for (int i = 0; i < z.size()-1; i++) {
		for (int j = 0; j < x.size(); j++) {
			if (x[j] < z[i+1] && x[j] >= z[i]) {
				n[i]++;
			}
			else continue;
		}
	}
	for (int j = 0; j < x.size(); j++) {
		if (x[j] >= z[z.size() - 1]) {
			n[n.size()-1]++;
		}
	}
	int k = n.size();
	double R0 = 0.0;
	for (int i = 0; i < k; i++) {
		R0 += (pow(n[i] - size(x) * q[i], 2)) / (size(x) * q[i]);
	}
	double integ = 0.0;
	int sz=10000;
	for (int i = 1; i < sz; i++) {
		integ += (f(R0 * (i - 1) / sz, q.size() - 1) + f(R0 * i / sz, q.size() - 1)) * R0 / 2 * sz;
	}
	return (integ);
}