#include <iostream>
using File = int;
struct Writer{
Writer(int id){
mId = id;
std::cout <<"I AM MAKING A NEW FILE" << id << std::endl;
const char *file = "path";
mFile = nullptr; /// IT IS POINTING TO A REAL FILE
}

// copy constructor
Writer(const Writer& other){
std::cout <<"I AM COPYING\n";
}
~Writer(){
std::cout <<"destroyed\n";
}
int mId;
File *mFile; // create a new file and u pointer to that file
};


// [ main,obj-> [makeWriter] ]
Writer makeWriter(int id){
Writer obj{id};
return obj;
}

int main(){
Writer mainObj = makeWriter(1);
}

