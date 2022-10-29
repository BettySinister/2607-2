#include <iostream>

int main()
{
	// TODO дозаполнить массив данными со страницы
	// https://www.jetbrains.com/ru-ru/idea/

	std::string versions[13][3] = {
		{"", "IntelliJ IDEA Ultimate", "IntelliJ IDEA Community Edition"},
		{"Java, Kotlin, Groovy, Scala", "*", "*"},
		{"Maven, Gradle, sbt", "*", "*"},
		{"Git, GitHub, SVN, Mercurial, Perforce", "*", "*"},
		{"Debugger", "*", "*"},
		{"Docker", "*", "*"},
		{"Profiling tools", "*", " "},
		{"Spring, Jakarta EE, Java EE, Micronaut", "*", " "},
		{"HTTP client", "*", " "},
		{"JavaScript, TypeScript, HTML, CSS", "*", " "},
		{"Database tools, SQL", "*", " "},
		{"Remote development (beta)", "*", " "},
		{"Joint development", "*", " "},
	};
	// TODO создать массив для значений ширин колонок при выводе данных в консоль
	// вычислить наибольшие длины строк для каждой колонки и заполнить результатами массив ширин
	int maxwidth[] = { 0, 0, 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 13; j++) {
			maxwidth[i] < versions[j][i].size() ? maxwidth[i] = versions[j][i].size() : maxwidth[i] += 0;
		}
	}
	for (int i = 0; i < 13; i++){
		for (int j = 0; j < 3; j++){
			std::cout << versions[i][j];
			for (int k = 0; k <= maxwidth[j] - versions[i][j].size() + 1; k++) {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}


}