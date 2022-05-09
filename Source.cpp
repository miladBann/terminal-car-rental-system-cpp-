#include <iostream>
#include <string>
#include <vector>


void greet() {

	std::cout << "Welcome to the Car rental system\n" << std::endl;
	std::cout << "choose the car you want to rent:" << std::endl;
	std::cout << "1- BMW,     2- Toyota,   3-Mazda\n4- Ford,    5- KIA,      6- Subaru\n" << std::endl;

}


class Customer {

	public:
		std::string client_name;
		int client_age {0};
		int id {0};
		std::string chosen_car {"none"};

	public:

		Customer() {
			std::cout << "deafault constructor for customer called..." << std::endl;
		}

		Customer(std::string name, int age, int id_num, std::string car) {
			client_name = name;
			client_age = age;
			id = id_num;
			chosen_car = car;
		}

		void view_info() {
			std::cout << "client name: " << client_name << std::endl;
			std::cout << "client age: " << client_age << std::endl;
			std::cout << "client ID: " << id << std::endl;
			std::cout << "Rented car: " << chosen_car << std::endl;
		}
};


std::vector <Customer> customers;
int profet{ 0 };

bool create_profile() {

	std::cout << "Welcome to the car renal system\n" << std::endl;

	std::string name;
	std::string car {"none"};
	int id;
	int birthyear;

	std::cout << "enter your name: ";
	std::cin >> name;

	std::cout << "enter your id number: ";
	std::cin >> id;

	std::cout << "enter your birth year: ";
	std::cin >> birthyear;

	int age = 2022 - birthyear;

	bool accepted = false;

	if (age >= 18) {
		Customer c(name, age, id, car);
		customers.push_back(c);
		accepted = true;
	}
	else
	{
		std::cout << "\nSorry, you are not old enough to rent a car" << std::endl;
	}

	return accepted;
};


int main() {
	
	bool end = false;

	std::cout << "enter your id number: ";
	int user_id;
	std::cin >> user_id;

	while (end == false) {

		bool acc_found = false;

		for (auto profile : customers) {
			if (profile.id == user_id) {
				std::cout << "account found" << std::endl;
				acc_found = true;
				break;
			}
			else {
				acc_found = false;
			}
		}

		if (acc_found == true) {
			greet();

			int response;
			std::cin >> response;

			if (response == 1) {
				std::system("cls");
				std::cout << "you chose BMW.\nthis car will cost you 120$/hour, do you agree? y or n?  ";

				char approve;
				std::cin >> approve;

				if (approve == 'n') {
					std::system("cls");
					continue;
				}
				else if (approve == 'y') {

					int hours;
					std::cout << "for how many hours do you want to rent it?  ";
					std::cin >> hours;
					
					for (auto profile : customers) {
						if (profile.id == user_id) {
							profile.chosen_car = "BMW";
							
							int total = hours * 120;

							std::cout << "that will be " << total << "$ in total." << std::endl;
							profet += total;

							std::cout << "\n\nwant another thing, y or n? ";
							char response2;
							std::cin >> response2;

							if (response2 == 'y') {
								std::system("cls");
							}
							else {
								std::system("cls");
								std::cout << "thanks for choosing us :)" << std::endl;
								break;
							}
						}
					}
				}
			}
			else if (response == 0) {
				std::system("cls");
				std::cout << "total profet till now is: " << profet << "$" << std::endl;

				std::cout << "\n\nwant another thing, y or n? ";
				char response2;
				std::cin >> response2;

				if (response2 == 'y') {
					std::system("cls");
				}
				else {
					std::system("cls");
					std::cout << "thanks for choosing us :)" << std::endl;
					break;
				}
			} else if (response == 2) {
				std::system("cls");
				std::cout << "you chose Toyota.\nthis car will cost you 100$/hour, do you agree? y or n?  ";

				char approve;
				std::cin >> approve;

				if (approve == 'n') {
					std::system("cls");
					continue;
				}
				else if (approve == 'y') {

					int hours;
					std::cout << "for how many hours do you want to rent it?  ";
					std::cin >> hours;

					for (auto profile : customers) {
						if (profile.id == user_id) {
							profile.chosen_car = "BMW";

							int total = hours * 100;

							std::cout << "that will be " << total << "$ in total." << std::endl;
							profet += total;

							std::cout << "\n\nwant another thing, y or n? ";
							char response2;
							std::cin >> response2;

							if (response2 == 'y') {
								std::system("cls");
							}
							else {
								std::system("cls");
								std::cout << "thanks for choosing us :)" << std::endl;
								break;
							}
						}
					}
				}
			}
			else if (response == 3) {
				std::system("cls");
				std::cout << "you chose Mazda.\nthis car will cost you 80$/hour, do you agree? y or n?  ";

				char approve;
				std::cin >> approve;

				if (approve == 'n') {
					std::system("cls");
					continue;
				}
				else if (approve == 'y') {

					int hours;
					std::cout << "for how many hours do you want to rent it?  ";
					std::cin >> hours;

					for (auto profile : customers) {
						if (profile.id == user_id) {
							profile.chosen_car = "BMW";

							int total = hours * 80;

							std::cout << "that will be " << total << "$ in total." << std::endl;
							profet += total;

							std::cout << "\n\nwant another thing, y or n? ";
							char response2;
							std::cin >> response2;

							if (response2 == 'y') {
								std::system("cls");
							}
							else {
								std::system("cls");
								std::cout << "thanks for choosing us :)" << std::endl;
								break;
							}
						}
					}
				}
			} 
			else if (response == 3) {
				std::system("cls");
				std::cout << "you chose Mazda.\nthis car will cost you 80$/hour, do you agree? y or n?  ";

				char approve;
				std::cin >> approve;

				if (approve == 'n') {
					std::system("cls");
					continue;
				}
				else if (approve == 'y') {

					int hours;
					std::cout << "for how many hours do you want to rent it?  ";
					std::cin >> hours;

					for (auto profile : customers) {
						if (profile.id == user_id) {
							profile.chosen_car = "BMW";

							int total = hours * 80;

							std::cout << "that will be " << total << "$ in total." << std::endl;
							profet += total;

							std::cout << "\n\nwant another thing, y or n? ";
							char response2;
							std::cin >> response2;

							if (response2 == 'y') {
								std::system("cls");
							}
							else {
								std::system("cls");
								std::cout << "thanks for choosing us :)" << std::endl;
								break;
							}
						}
					}
				}
			} 
			else if (response == 4) {
			std::system("cls");
			std::cout << "you chose Ford.\nthis car will cost you 60$/hour, do you agree? y or n?  ";

			char approve;
			std::cin >> approve;

			if (approve == 'n') {
				std::system("cls");
				continue;
			}
			else if (approve == 'y') {

				int hours;
				std::cout << "for how many hours do you want to rent it?  ";
				std::cin >> hours;

				for (auto profile : customers) {
					if (profile.id == user_id) {
						profile.chosen_car = "BMW";

						int total = hours * 60;

						std::cout << "that will be " << total << "$ in total." << std::endl;
						profet += total;

						std::cout << "\n\nwant another thing, y or n? ";
						char response2;
						std::cin >> response2;

						if (response2 == 'y') {
							std::system("cls");
						}
						else {
							std::system("cls");
							std::cout << "thanks for choosing us :)" << std::endl;
							break;
						}
					}
				}
			}

			}
			else if (response == 5) {
			std::system("cls");
			std::cout << "you chose KIA.\nthis car will cost you 40$/hour, do you agree? y or n?  ";

			char approve;
			std::cin >> approve;

			if (approve == 'n') {
				std::system("cls");
				continue;
			}
			else if (approve == 'y') {

				int hours;
				std::cout << "for how many hours do you want to rent it?  ";
				std::cin >> hours;

				for (auto profile : customers) {
					if (profile.id == user_id) {
						profile.chosen_car = "BMW";

						int total = hours * 40;

						std::cout << "that will be " << total << "$ in total." << std::endl;
						profet += total;

						std::cout << "\n\nwant another thing, y or n? ";
						char response2;
						std::cin >> response2;

						if (response2 == 'y') {
							std::system("cls");
						}
						else {
							std::system("cls");
							std::cout << "thanks for choosing us :)" << std::endl;
							break;
						}
					}
				}
			}

			}
			else if (response == 6) {
			std::system("cls");
			std::cout << "you chose Subaru.\nthis car will cost you 20$/hour, do you agree? y or n?  ";

			char approve;
			std::cin >> approve;

			if (approve == 'n') {
				std::system("cls");
				continue;
			}
			else if (approve == 'y') {

				int hours;
				std::cout << "for how many hours do you want to rent it?  ";
				std::cin >> hours;

				for (auto profile : customers) {
					if (profile.id == user_id) {
						profile.chosen_car = "BMW";

						int total = hours * 20;

						std::cout << "that will be " << total << "$ in total." << std::endl;
						profet += total;

						std::cout << "\n\nwant another thing, y or n? ";
						char response2;
						std::cin >> response2;

						if (response2 == 'y') {
							std::system("cls");
						}
						else {
							std::system("cls");
							std::cout << "thanks for choosing us :)" << std::endl;
							break;
						}
					}
				}
			}

			}
		}
		else {
			std::system("cls");
			std::cout << "account not found, please create a new profile in the system.\n" << std::endl;
			create_profile();
			std::system("cls");
			continue;
		}

	}
	
	return 0;
}