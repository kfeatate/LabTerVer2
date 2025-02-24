#include "MyForm.h"

[STAThreadAttribute]
int main(cli::array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	RandomVariableModeling::MyForm form;
	Application::Run(% form);
}