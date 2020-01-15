//project file
#include<iostream>
#include<fstream>
#include<string>
//int main() {
//	std::ofstream outputFile;
//	outputFile.open("example file.txt");
//	outputFile << "I can write to a file! \n";
//	outputFile.close();
//	return 0;
//}
int main() {
	/*std::ifstream input_file;
	input_file.open("example file.txt");
	if (input_file) {
		std::string myText = "";
		while (input_file >> myText) {
			std::cout << myText << std::endl;
		}
	}else {
		std::cout << "That file does not exist" << std::endl;
	}
	input_file.close();*/

	std::ifstream input_file;
	std::string filename = "commaSeparatedValues.txt";
	input_file.open(filename);
	if (!input_file) {
		std::cout << "Uh-oh,file not found. \
Ensure file is in project directory" << std::endl;
	}
	else {
		std::string fileData = "";
		while (getline(input_file, fileData, ',')) {
			std::cout << fileData << std::endl;
		}
		return 0;
	}
}
		

