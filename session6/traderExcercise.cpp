#include <iostream>

struct order{
	order(int id,float price,int qty,string action){
	this->id = id;
	this->price = price;
	this->qty = qty;


	int i=0;
	while(action[i] != '\0' && i<31){
		this->action[i] = action[i];
		i++;
	}
	this->action[i] = '\0';

	}

	int id;
	float price;
	int qty;
	char action[32];

};

struct trader{
	trader(int id,string name){
	this->id = id;
	int i=0;
	while(name[i] != '\0' && i<31){
		this->name[i] = name[i];
	       i++;	
	}
	this->name[i] = '\0';
	}

	int id;
	char name[32];

};

int main(){
	trader t1(1,"t1");
	trader t2(2,"t2");
	trader t3(3,"t3");
	trader t4(4,"t4");
	trader t5(5,"t5");

	while(1){
	for(int i=0;i<5;i++){

	order o1(1,1.0,1,"buy");
	order o2(2,2.0,2,"sell");
	order o3(3,3.0,3,"sell");
			

	}

	std::this_thread::sleep_for(std::chrono::seconds(1));

	}

};
