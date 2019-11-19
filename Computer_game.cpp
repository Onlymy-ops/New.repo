        #pragma once
#ifndef LAB4_HEADER_H
#define LAB4_HEADER_H
using namespace std;
class Computer_game {
private:
	int number_of_player;
	float the_average_of_IMDB_review;
	float congestion_of_game_servers;
	int price;
	string name;
public:
	int graduation_year;
	void set(const char* _name);
	void setNumber_of_player(const int _number_of_player);
	void setThe_average_of_IMDB_review(const float _the_average_of_IMDB_review);
	void setCongestion_of_game_servers(const float _congestion_of_game_servers);
	void setPrice(const int _price);
	void setFirma(const char* _firma);
	void setGraduation_year(const int _graduation_year_);
	Computer_game();
	Computer_game(int b_price, string b_name, float b_the_average_of_IMDB_review, float b_congestion_of_game_servers_, int b_graduation_year_);


	~Computer_game() {
		cout << "\nEnd of the programme" << endl;
	};
};

#endif