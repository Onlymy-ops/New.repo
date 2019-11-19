#pragma once
#ifndef LAB4_HEADER_H
#define LAB4_HEADER_H
using namespace std;
class Computer_game {
private:
	float number_of_player;
	string name;
	float the_average_of_IMDB_review;
protected:
	float congestion_of_game_servers;
	int price;
public:
	int graduation_year;
	string valve;
	void setNumber_of_player(const char* _number_of_player);
	void setPrice(const int _price);
	void setCongestion_of_game_servers(const float _congestion_of_game_servers);
	void setThe_average_of_IMDB_review(const float _the_average_of_IMDB_review);
	void setGraduation_year(const int _graduation_year);
	void setName()

	~Computer_game() {
		cout << "\nEnd of the programme" << endl;
	};
};

#endif //LAB4_HEADER_H