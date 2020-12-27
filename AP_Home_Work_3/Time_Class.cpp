#include <iostream>
using namespace std;

class Time{
	
	int seconds;
	int minutes;
	int hours;
	
	 void minutesPlus();
	 
	 void hoursPlus();
	 
	 int secondsValidation(int S);
		 
	 int minutesValidation(int M);
	 
	 int hoursValidation(int H);
	
public:
	
	    Time();
		
		Time(int H , int M , int S);
		
		int getSeconds();
		
    	int getMinutes();
		
		int getHours();
		
		void displayTime();

};

void Time::minutesPlus(){
		 	minutes+=1;
		 }
		 
void Time::hoursPlus(){
		 	hours+=1;
		 } 
		
int Time::secondsValidation(int S){
		 	if(S>=0 && S<60) return S;
		 	else{
		 		S=S%60;
		 		minutesPlus();
		 		return S;
			 }
		 }
		 
int Time::minutesValidation(int M){
		 	if(M>=0 && M<60) return M;
		 	else{
		 		M=M%60;
		 	    hoursPlus();
		 		return M;
			 }
		 }
		 
int Time::hoursValidation(int H){
		 	if(H>=0 && H<24) return H;
		 	else{
		 		H=H%24;
		 		return H;
			 }
		 }
		 
 Time::Time(){
			seconds=0;
			minutes=0;
			hours=0;
		}
		
 Time::Time(int H , int M , int S){
			seconds=secondsValidation(S);
			minutes=minutesValidation(M);
			hours=hoursValidation(H);
			
		}
		
int Time::getSeconds(){
			return seconds;
		}
		
int Time::getMinutes(){
			return minutes;
		}
		
int Time::getHours(){
			return hours;
		}
		
void Time::displayTime(){
			cout<< "Time is --->  "<<getHours()<<" : "<<getMinutes()<<" : "<<getSeconds()<<endl;
		}	

int main(int argc, char** argv) {
	Time time1;
	time1.displayTime();
	Time time2(25,70,70);
	time2.displayTime();
		return 0;
}
