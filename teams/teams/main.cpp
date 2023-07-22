#include <iostream>
using namespace std;

#include "SoccerTeam.h"
#include "TeamPerson.h"

int main() {
	SoccerTeam teamCalifornia;
	TeamPerson headCoach;
	TeamPerson asstCoach;

	headCoach.SetFullName("Mark Miwerds");
	headCoach.SetAgeYears(42);
	teamCalifornia.SetHeadCoach(headCoach);

	asstCoach.SetFullName("Stan Lee");
	asstCoach.SetAgeYears(30);
	teamCalifornia.SetAssistantCoach(asstCoach);

	teamCalifornia.Print();

	return 0;
}