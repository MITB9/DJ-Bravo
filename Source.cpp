#include <iostream>
using namespace std;

class health
{
private:
	bool smoking;	
	bool exercise;
	int diet;
	bool proper_sleep;
public:
	void smoke (bool answer)
	{
		smoking = answer;
		if (smoking == 1)
		{
			cout << "You SHould Stop Smoking. Lung Cancer May Happen." << endl;
		}
		else
			cout << "Its Good for your health that you dont smoke" << endl;
	}

	void takex (bool answer)
	{
		exercise = answer;
		if (exercise == 1)
		{
			cout << "You will Have good health " << endl;
		}
		else
			cout << "You should perhaps start taking exercise. It will keep you good" << endl;
	}

	void ydiet (int answer)
	{
		diet = answer;
		if(diet > 5000)
		{
			cout << "You should reduce calorie count" << endl;
		}
		else
		cout << "You have a balanced diet" << endl;
	}

	void sleep (bool answer)
	{
		proper_sleep = answer;
		if (proper_sleep == 1)
		{
			cout << "Its good that you get proper sleep" << endl;
		}
		else
			cout << "You should get proper sleep in order to keep fit" << endl;
	}
};

int main()
{
	health your;
	int answer1;
	bool answer2, answer3, answer4;

	cout << "Enter 1 for yes and 0 for no" << endl;
	cout << "Do You smoke?" << endl;
	cin >> answer2;
	your.smoke(answer2);

	cout << "Do you take proper exercise? " << endl;
	cin >> answer3;
	your.takex(answer3);

	cout << "How many calories do u take daily" << endl;
	cin >> answer1;
	your.ydiet(answer1);

	cout << "Do u take 7 or more than 7 hours sleep?" << endl;
	cin >> answer4;
	your.sleep(answer4);


	return 0;
}