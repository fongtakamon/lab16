#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *w,int *x,int *y,int *z){
	int fong[4]={*w,*x,*y,*z};
	int jai[4] = {0,0,0,0};
	for(int i=0;i<4;i++){
		jai[i] = rand()%4;
		for(int j = 0;j<i;j++){
			if(jai[i] == jai[j]){
				i--;
				break;
			}
		}
	}
	*w = fong[jai[0]] ;
	*x = fong[jai[1]] ;
	*y = fong[jai[2]] ;
	*z = fong[jai[3]] ;
}