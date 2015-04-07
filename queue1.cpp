#include "queue.h"


//queue(STAY)
queue::bool enqueue(int j){
	for(int i = 0; i < j; i++){
		rear++;
	}
}

queue::bool dequeue(int& j){
	for(int i = 0; i < j; i++){
		rear--;
	}
}

queue::bool empty(){
	if(front = rear){
		return true;
	}else{
		return false;
	}
}



