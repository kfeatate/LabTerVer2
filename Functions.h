#pragma once
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <cstdlib>
 
int Fact(int a); //считает факториал 
double Probability(int M, int N, int r, int k); //считает вероятность
std::vector<std::vector<int>> RandomVariable(int M, int N, int r, int numberE); //моделирует случайную величину

//double E_Value(int M, int N, int r);//наиболее вероятное значение
double MatOz(std::vector<int> y, std::vector<double> p); //мат. ожидание
double SampleAverage(std::vector<int> y, std::vector<int> n); //среднее по выборке
double Dispersion(std::vector<int> y, std::vector<double> p); //дисперсия
double SampleDispersion(std::vector<int> y, std::vector<int> n); //выборочная дисперсия
int Mediana(std::vector<int> y); //медиана
int R(std::vector<int> y); //размах выборки
std::vector<double> FuncRaspr(int M, int N, int r, std::vector<int> v); //функция распределения
std::vector<double> SampleF(std::vector<int> n);//выборочная функция распределения
double Discrepancy(std::vector<double> FTheory, std::vector<double> FSample); //мера расхождения теоретической и выборочной функций распределения
std::vector<double> Q(std::vector<double> z, std::vector<int> y, int M, int N, int r); //теоретические вероятности
double Gamma(double a);
double f(double x, int r);//плотность распределения
double DistributionFunction(std::vector<double> q, std::vector<double> z, std::vector<int> x);