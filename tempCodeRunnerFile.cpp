
using namespace std;

string cardNames[] = {"","A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int cardScores[] = {0,1,2,3,4,5,6,7,8,9,10,10,10,10};

int drawCard(){
    int x = rand()%13+1;
    return x;
}

int calScore(int x, int y, int z){
    if (x>=10) x=0;
    if (y>=10) y=0;
    if (z>=10) z=0;
    return (x+y+z)%10 ;
}

int findYugiAction(int s){	
	if(s == 9) return 2;