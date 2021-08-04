#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;

/*	An election is contested by five candidates.The candidates are numbered 1 to 5 and the voting is done by marking the candidate number on the ballot paper.Write a program toread the ballots and count the votes cast for each candidate using an array variable count. In case a number is read outside the range of 1 to 5, the ballot should be considered as a ‘spoilt ballot’ and the program should also count the number of spoilt ballots.
*/

class Ballot
{
	int voter_count, spoilt_ballot = 0, votes_per_candidate[5] = { 0 };
	vector<int> votes_arr;
	void init_votes_arr();
	void count_votes();
public:
	Ballot();
	void display_results();
};

Ballot::Ballot()
{
	cout << "Enter the number of voters : ";
	cin >> voter_count;
	init_votes_arr();
	count_votes();
}

void Ballot::init_votes_arr()
{
	int temp;
	for (int i = 0; i < voter_count; i++)
	{
		cout << "Enter the vote given by voter " << i + 1 << " : ";
		cin >> temp;
		votes_arr.push_back(temp);
	}
};

void Ballot::count_votes()
{
	for (int i : votes_arr)
	{
		switch (i) {
		case 1:
			votes_per_candidate[0]++;
			break;
		case 2:
			votes_per_candidate[1]++;
			break;
		case 3:
			votes_per_candidate[2]++;
			break;
		case 4:
			votes_per_candidate[3]++;
			break;
		case 5:
			votes_per_candidate[4]++;
			break;
		default:
			spoilt_ballot++;
		}
	}
}

void Ballot::display_results()
{
	system("cls");
	cout << "Votes Cast for :" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "\n\tCandidate " << i + 1 << " is = " << votes_per_candidate[i] << endl;
	}
	cout << "\nSpoilt Ballots = " << spoilt_ballot << endl;
}


int main()
{
	Ballot results;
	results.display_results();
	system("pause");
	return 0;
}
