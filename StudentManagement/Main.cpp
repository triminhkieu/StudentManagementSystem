#include "PrimaryStudent.h"
#include "HighStudent.h"
#include <vector>
#include "Option.h"

int main() {

	vector<PrimaryStudent> primaryStudents;
	primaryStudents.push_back(PrimaryStudent("Minh Tri", 10, true, 9.9, 9.9));
	primaryStudents.push_back(PrimaryStudent("Duc Trong", 9, true, 7.0, 6.9));
	primaryStudents.push_back(PrimaryStudent("Van Khoa", 12, true, 8.1, 9.1));
	primaryStudents.push_back(PrimaryStudent("Van Hy", 11, true, 5.7, 6.9));
	primaryStudents.push_back(PrimaryStudent("Ngoc Anh", 8, false, 9.2, 7.9));
	primaryStudents.push_back(PrimaryStudent("Thi Hien", 9, false, 7.8, 6.7));

	vector<HighStudent> highStudents;
	highStudents.push_back(HighStudent("Gia Long", 10, true, 9.9, 9.9));
	highStudents.push_back(HighStudent("Hoai Duc", 9, true, 7.0, 6.9));
	highStudents.push_back(HighStudent("The Phiet", 12, true, 8.1, 9.1));
	highStudents.push_back(HighStudent("Xuan Hien", 11, true, 5.7, 6.9));
	highStudents.push_back(HighStudent("Ngoc Thao", 8, false, 9.2, 7.9));
	highStudents.push_back(HighStudent("Ngo Hien", 9, false, 7.8, 6.7));

	vector<string> options =
	{
		"Show information",
		"Add new information",
		"Update information",
		"Delete information",
		"Exit"
	};

	vector<string> subShowOptions =
	{
		"Show information of Primary Student",
		"Show information of High Student",
		"Exit"
	};

	vector<string> subAddOptions =
	{
		"Add information of Primary Student",
		"Add information of High Student",
		"Exit"
	};

	vector<string> subUpdateOptions =
	{
		"Update information of Primary Student",
		"Update information of High Student",
		"Exit"
	};

	vector<string> subDeleteOptions =
	{
		"Delete information of Primary Student",
		"Delete information of High Student",
		"Exit"
	};


	int intChoice = 0;
	int intSubChoice = 0;
	do
	{
		cout << "\n----------MENU----------" << endl;
		intChoice = Option::getChoice(options);

		switch (intChoice)
		{
			case 1:
			{
				int i = 0;
				do
				{
					cout << "\n----------Show----------" << endl;
					intSubChoice = Option::getChoice(subShowOptions);
					switch (intSubChoice)
					{
					case 1:
						cout << "\nShow Primary Student List" << endl;
						
						for (PrimaryStudent student: primaryStudents)
						{
							cout << ++i << " - ";
							student.displayAllInformation();
							cout << "Color of Uniform: ";
							student.displayColorOfUniform();

							cout << endl;
						}
						i = 0;
						break;
					case 2:
						cout << "\nShow High Student List" << endl;
						for (HighStudent student : highStudents)
						{
							cout << ++i << " - ";
							student.displayAllInformation();
							cout << "Color of Uniform: ";
							student.displayColorOfUniform();
							cout << endl;
						}
						i = 0;
						break;
					}
				} while (intSubChoice > 0 && intSubChoice < 3);
				break;
			}
			case 2:
			{
				do
				{
					cout << "\n----------Add----------" << endl;
					intSubChoice = Option::getChoice(subAddOptions);
					switch (intSubChoice)
					{
					case 1:
					{
						cout << "\nAdd Primary Student" << endl;
						string name;
						int age;
						bool sex;
						double basicMath;
						double basicEnglish;
						cout << "Enter name of student: ";
						cin >> name;
						cout << "Enter age of student: ";
						cin >> age;
						cout << "Enter sex of student: ";
						cin >> sex;
						cout << "Enter point of Basic Math of student: ";
						cin >> basicMath;
						cout << "Enter point of Basic English of student: ";
						cin >> basicEnglish;
						primaryStudents.push_back(PrimaryStudent(name, age, sex, basicMath, basicEnglish));
						cout << "Successfully!" << endl;
						break;
					}
					case 2:
					{
						cout << "\nAdd High Student" << endl;
						string name;
						int age;
						bool sex;
						double advancedMath;
						double advancedEnglish;
						cout << "Enter name of student: ";
						cin >> name;
						cout << "Enter age of student: ";
						cin >> age;
						cout << "Enter sex of student: ";
						cin >> sex;
						cout << "Enter point of advanced math of student: ";
						cin >> advancedMath;
						cout << "Enter point of advanced english of student: ";
						cin >> advancedEnglish;
						highStudents.push_back(HighStudent(name, age, sex, advancedMath, advancedEnglish));
						cout << "Successfully!";
						break;
					}
					}
				} while (intSubChoice > 0 && intSubChoice < 3);
				break;
			}
			case 3:
			{
				int i = 0;
				do
				{
					cout << "\n----------Update----------" << endl;
					intSubChoice = Option::getChoice(subUpdateOptions);
					switch (intSubChoice)
					{
					case 1:
					{
						cout << "\nUpdate Primary Student" << endl;
						cout << "Enter numerical order which you want to update: ";
						cin >> i;

						cout << "\nUpdate Primary Student at " << i << endl;
						string name;
						int age;
						bool sex;
						double basicMath;
						double basicEnglish;
						cout << "Enter name of student: ";
						cin >> name;
						cout << "Enter age of student: ";
						cin >> age;
						cout << "Enter sex of student: ";
						cin >> sex;
						cout << "Enter point of Basic Math of student: ";
						cin >> basicMath;
						cout << "Enter point of Basic English of student: ";
						cin >> basicEnglish;

						PrimaryStudent ps(name, age, sex, basicMath, basicEnglish);

						primaryStudents[i - 1] = ps;

						cout << "Successfully!" << endl;

						i = 0;
						break;
					}
					case 2:
					{
						cout << "\nUpdate High Student" << endl;
						cout << "Enter numerical order which you want to update: ";
						cin >> i;

						cout << "\nUpdate High Student at " << i << endl;
						string name;
						int age;
						bool sex;
						double advancedMath;
						double advancedEnglish;
						cout << "Enter name of student: ";
						cin >> name;
						cout << "Enter age of student: ";
						cin >> age;
						cout << "Enter sex of student: ";
						cin >> sex;
						cout << "Enter point of Advanced Math of student: ";
						cin >> advancedMath;
						cout << "Enter point of Advanced English of student: ";
						cin >> advancedEnglish;

						HighStudent ps(name, age, sex, advancedMath, advancedEnglish);

						highStudents[i - 1] = ps;

						cout << "Successfully!" << endl;

						i = 0;
						break;
					}
					}
				
				} while (intSubChoice > 0 && intSubChoice < 3);
				break;
			}
			case 4:
			{
				int i = 0;
				do
				{
					cout << "\n----------Delete----------" << endl;
					intSubChoice = Option::getChoice(subDeleteOptions);
					switch (intSubChoice)
					{
					case 1:
						cout << "\nDelete Primary Student" << endl;
						cout << "Enter numerical order which you want to delete: ";
						cin >> i;
						primaryStudents.erase(primaryStudents.begin() + (i - 1));
						cout << "Successfully!" << endl;
						i = 0;
						break;
					case 2:
						cout << "\nDelete High Student" << endl;
						cout << "Enter numerical order which you want to delete: ";
						cin >> i;
						highStudents.erase(highStudents.begin() + (i - 1));
						cout << "Successfully!" << endl;
						i = 0;
						break;
					}
				} while (intSubChoice > 0 && intSubChoice < 3);
				break;
			}
			case 5:
			{
				cout << "GoodBye!" << endl;
				break;
			}
		}

	} while (intChoice > 0 && intChoice < 5);


	return 0;
}