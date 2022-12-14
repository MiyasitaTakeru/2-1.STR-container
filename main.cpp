#include<stdio.h>
#include<list>
#include <iostream>
using namespace std;

int main() {
	list<const char*>stations = {
		"Tokyo","Kanda","Yurakucho","Shinbashi","Hamamatucho","Tamachi",
		"Shinagawa","Osaki","Gotanda","Meguro","Ebisu","Shibuya","Harajuku",
		"Yoyogi","Shinjuku","Shin-Okubo","Takadanobaba","Mejiro","Ikebukuro",
		"Otuka","Sugamo","komagome","Tabata","Nippori",
		"Uguisudani","Ueno","okachimachi","Kanda\n"
	};

	printf("---- 1970 ----\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++) {
		printf("%s\n", *itr);
	}
	//西日暮里を追加
	for (list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
		if (*itr == "Nippori") {
			itr = stations.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	printf("---- 2019 ----\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++) {
		printf("%s\n", *itr);
	}
	//高輪ゲートウェイを追加
	for (list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = stations.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}

	printf("---- 2022 ----\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++) {
		printf("%s\n", *itr);
	}

	return 0;

}