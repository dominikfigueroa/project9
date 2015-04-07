#include "stack.h"

//stack(STAY)
Stack::Stack(int maxSize){
	
}

Stack::bool full() const{
	if(actual == max){
		return true;
	}else{
		return false;
	}
}

Stack::bool empty() const{
	if(actual == top){
		top = -1;
		return true;
	}else{
		return false;
	}
}
