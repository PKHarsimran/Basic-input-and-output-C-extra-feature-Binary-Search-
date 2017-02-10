#include <iostream>
#include <string>

using namespace std;




int main() {

int ans[5];
int wrong[5] = { 0,0,0,0,0 };
int Score[5] = { 0,0,0,0,0 };
string Ques[5];

int userChoice;
int ansUser;
	lebel0:
cout << " What you want to try first?" << endl;
cout << "1. Trivia?" << endl;
cout << "2.Binary Searh ( Guess you number in some tries)" << endl;
cin >> userChoice;
if (userChoice == 2)
{
	goto label2;
}
else {
	goto label1;
}
label1:

Ques[0] = "What is 2 + 2 = ?\n\n";
ans[0] = 4 ;
Ques[1] = "Number of planets ?\n\n";
ans[1] = 8 ;
Ques[2] = "what is 5 ?\n\n";
ans[2] = 5;
Ques[3] = "3 + 3 = ?\n\n";
ans[3] = 6 ;
Ques[4] = "10 x 2 = ?\n\n";
ans[4] = 20 ;


for (int x = 0; x < 5; x++) {
	cout << Ques[x];
	cin >> ansUser;

	if (ans[x] == ansUser)
	{
		Score[x]++;
		
	}
	else{
		wrong[x]++;
		x--;
	}
}
for (int y = 0; y < 5; y++) {
cout << endl;
cout << "           \t correct \t Incorrect" << endl;
cout << "Question " << y+1<< " \t    " << Score[y]<<"\t\t  "<<wrong[y] << endl;

}

goto lebel0 ;
label2:
int userMaxNumber;
int userChoosenNum;
int guess = 0;
int min = 0;
int tries = 0;
cout << " Please input maximum number ---v" << endl;
cin >> userMaxNumber;
cout << " Please input what number you want computer to guess ?" << endl;
cin >> userChoosenNum;
cout << " Find number >" << userChoosenNum << endl;
tries++;

first:
guess = (min + userMaxNumber) / 2;
cout << "I guessed " << guess << endl;
	if (guess < userChoosenNum) {
		min = guess + 1;
	}
	else if (guess > userChoosenNum) {
		userMaxNumber = guess - 1;

	}

	if (guess != userChoosenNum) {

		tries++;
		goto first;
	}

	
		cout << "I Found your number " << userChoosenNum << " in " << tries << " tires" << endl;
		cout << " If Linear search tried to search your number it will take " << userChoosenNum << " tries" << endl;
		cout << endl<<endl;
		goto lebel0;

}