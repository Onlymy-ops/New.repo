#include <iostream>
#include <string>
#include "Computer_game.h"
using namespace std;

int main() {

	Computer_game chopper1;
	chopper1.setName("Counter-Strike");
	chopper1.setNumber_of_player(123435);
	chopper1.setPrice(12);
	chopper1.setCongestion_of_game_servers(98.2);
	chopper1.setThe_average_of_IMDB_review(8.7);
	chopper1.setGraduation_year(2000);


	Computer_game chopper2;
	chopper2.setName("Dota 2");
	chopper2.setNumber_of_player(1334345);
	chopper2.setPrice(9);
	chopper2.setCongestion_of_game_servers(83.4);
	chopper2.setThe_average_of_IMDB_review(8.1);
	chopper2.setGraduation_year(2013);



	Computer_game chopper3;
	chopper3.setName("Counter-Strike: Global Offensive");
	chopper3.setNumber_of_player(984624);
	chopper3.setPrice(25);
	chopper3.setCongestion_of_game_servers(94.9);
	chopper3.setThe_average_of_IMDB_review(9.7);
	chopper3.setGraduation_year(2012);

	return 0;
}