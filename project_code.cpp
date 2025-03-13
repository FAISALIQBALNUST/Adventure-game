#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<conio.h>
using namespace std;

void level1(int& health, int& damage, int& rewards, int& loss, int& progress);
void level1_1(int& health, int& damage, int& rewards, int& loss, int& progress);
void level1_2(int& health, int& damage, int& rewards, int& loss, int& progress);
void level1_3(int& health, int& damage, int& rewards, int& loss, int& progress);
int level2(int& health, int& damage, int& rewards, int& loss, int& progress);
void level2_1(int& health, int& damage, int& rewards, int& loss, int& progress);
void level2_2(int& health, int& damage, int& rewards, int& loss, int& progress);
void level2_3(int& health, int& damage, int& rewards, int& loss, int& progress);
int level3(int& health, int& damage, int& rewards, int& loss, int& progress);
void level3_1(int& health, int& damage, int& rewards, int& loss, int& progress);
void level3_2(int& health, int& damage, int& rewards, int& loss, int& progress);
void level3_3(int& health, int& damage, int& rewards, int& loss, int& progress);
int level4(int& health, int& damage, int& rewards, int& loss, int& progress);
void level4_1(int& health, int& damage, int& rewards, int& loss, int& progress);
void level4_2(int& health, int& damage, int& rewards, int& loss, int& progress);
void level4_3(int& health, int& damage, int& rewards, int& loss, int& progress);
void level4_4(int& health, int& damage, int& rewards, int& loss, int& progress);
void level4_5(int& health, int& damage, int& rewards, int& loss, int& progress);

void level1instruction();
void level2instruction();
void level3instruction();
void level4instruction();

void display_score(int health, int damage, int rewards, int loss, int progress);
void diplay_instructions();
int random();
int input();

int main()
{
	diplay_instructions();

	int health = 20;
	int damage = 0;
	int rewards = 0;
	int loss = 0;
	int progress = 0;
	cout << "\nThese are the the values of parameters aloted to you as default:\n\n";
	display_score(health, damage, rewards, loss, progress);

	level1(health, damage, rewards, loss, progress);
	int controller = level2(health, damage, rewards, loss, progress);
	if (controller == -1)
	{
		return 0;
	}
	int controller2 = level3(health, damage, rewards, loss, progress);
	if (controller2 == -1)
	{
		return 0;
	}
	int controller3 = level4(health, damage, rewards, loss, progress);
	if (controller3 == -1)
	{
		return 0;
	}
	_getch();
}
int random()
{
	srand(time(0));
	int r = rand() % 2 + 1;
	return r;
}
int input()
{

	int user_input;

	cout << "   ---------------------------------------------------------------------\n";
	cout << "     Enter your choice: 1 to select option 1 and 2 to select option 2.\n";
	cout << "   ---------------------------------------------------------------------\n";
	while (!(cin >> user_input) || (user_input != 1 && user_input != 2))
	{

		cin.clear();
		cin.ignore();
		cout << "               ----------------------------------------------------\n";
		cout << "                Invalid input please input a valid number {1 or 2}\n";
		cout << "               ----------------------------------------------------\n";
	}

	return user_input;
}

void display_score(int health, int damage, int rewards, int loss, int progress)
{
	if (loss <= 0)
	{
		loss = 0;
	}
	if (damage <= 0)
	{
	damage= 0;
	}
	if (rewards<= 0)
	{
		rewards = 0;
	}
	if (progress <= 0)
	{
		progress= 0;
	}
	cout << " \n               -----------------------------\n";
	cout << "                   Your rewards are: " << setw(5) << left << rewards << endl;
	cout << "                   Your progress is: " << setw(5) << left << progress << endl;
	cout << "                   Your  health  is: " << setw(5) << left << health << endl;
	cout << "                   Your  damage  is: " << setw(5) << left << damage << endl;
	cout << "                   Your  loss    is: " << setw(5) << left << loss << endl;
	cout << "               -----------------------------\n";
}
void diplay_instructions()
{
	cout << "-----------------------------------------------------------------------\n";
	cout << "  Welcome    to   this      text      based     adventure      game.  \n";
	cout << "  You are lost in a forest and you have to make your way through the   \n";
	cout << "  forest   to     come    out    of     this     forest      safely.   \n ";
	cout << "  At  every  level  you  will  be  informed  about  your  situation.   \n";
	cout << "  You have to carefully devise to come out of that  jungle  in which   \n";
	cout << "  you are stranded. You can  make  any   decision  you want, but its   \n";
	cout << "  outcome could have  an effect on  your  health and  damage, or  it \n";
	cout << "  may reward you with something helpful possibilitiy to successfully  \n";
	cout << "  exit    the    jungle.  \n";
	cout << "-----------------------------------------------------------------------\n";
}
void level1instruction()
{
	cout << "-----------------------------------------------------------------------\n";
	cout << "This is the first level of the game where you are traped in a dark    cave\n";
	cout << "now you have to make your way out of the cave through wise decision making :\n";
	cout << "and lets  start  with  the  radiles.Have  a good  luck  enjoy  the    game\n";
	cout << "-----------------------------------------------------------------------\n";
}
void level2instruction()
{
	cout << "-----------------------------------------------------------------------\n";
	cout << "  CONGRATULATIONS!! you had well played level one and passed through the cave\n";
	cout << "  You had played level 1 and passed through it. This is level 2. In level 2 \n";
	cout << "you are lost in wilderness. Now  you  have to  make  your  way through this \n";
	cout << "wilderness         and         come          out         of    this safely .\n";
	cout << "-----------------------------------------------------------------------\n";

}
void level3instruction()
{
	cout << "------------------------------------------------------------------------------\n";
	cout << "  CONGRATULATIONS!! you had well played level two and passed through wilderness\n";
	cout << "  You had played level 2 and passed  through it. This is   level 3. In level 3 \n";
	cout << "you have to Navigate Through a Dense    Undergrowth. Now you have to make your \n";
	cout << "way   through  this   wilderness        and   come   out   of   this    safely .\n";

	cout << "------------------------------------------------------------------------------\n";

}
void level4instruction()
{
	cout << "------------------------------------------------------------------------------------------------\n";
	cout << "  CONGREDULATION!! you had well played level   three    and   passed  through Dense Undergrowth \n";
	cout << "  You had played level 3 and passed  through it. This is   level 4(The final Level). In level 4 \n";
	cout << " You are at Bank of river adnd by crossing this river you   will come out of the forest. If you \n";
	cout << " fail to cross The River you will not be able to come out of the forest and will lose the Game.\n";
	cout << "------------------------------------------------------------------------------------------------\n";

}

void level1(int& health, int& damage, int& rewards, int& loss, int& progress)
{
	level1instruction();
	level1_1(health, damage, rewards, loss, progress);
	level1_2(health, damage, rewards, loss, progress);
	level1_3(health, damage, rewards, loss, progress);
}
void level1_1(int& health, int& damage, int& rewards, int& loss, int& progress)
{
	int give_option = random();
	switch (give_option)
	{
	case 1:
	{cout << "\n\n\n               ------------------------------------------\n";
	cout << "                   Option 1: Explore a Dark Tunnel\n";
	cout << "               ------------------------------------------\n\n";


	cout << "               ------------------------------------------\n";
	cout << "                   Option 2: Light a Torch\n";
	cout << "               ------------------------------------------\n\n";



	int user_input = input();
	int option1 = random();
	switch (user_input)
	{

	case 1:


		switch (option1)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        The tunnel leads to a dead - end, and you waste valuable time in the darkness.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress + 1;
			damage = damage;
			loss = loss + 1;
			rewards = rewards;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        You discover a hidden exit, leading you closer to the cave's entrance.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress + 3;
			damage = damage;
			loss = loss;
			rewards = rewards + 3;
			break;
		}
		break;
	case 2:
		int option2 = random();
		switch (option2)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        The torch reveals a safe path, and you find a stash of supplies.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health + 1;
			progress = progress + 3;
			damage = damage;
			loss = loss;
			rewards = rewards + 1;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        The light attracts hostile creatures, and you have to fend them off.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health - 1;
			progress = progress;
			damage = damage + 1;
			loss = loss + 1;
			rewards = rewards;
			break;
		}
		break;
	}
	break;

	}
	case 2:
	{cout << "\n\n\n               ------------------------------------------\n";
	cout << "                     option 1:Climb a Ledge\n";
	cout << "               ------------------------------------------\n\n";

	cout << "               ------------------------------------------\n";
	cout << "                     option 2:Listen for Sounds\n";
	cout << "               ------------------------------------------\n\n";



	int user_input = input();
	int option3 = random();
	switch (user_input)
	{

	case 1:

		switch (option3)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        You successfully climb to a higher level with a clearer view of the surroundings.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress + 2;
			damage = damage;
			loss = loss;
			rewards = rewards + 1;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        The ledge crumbles, and you take some damage falling back down.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health - 1;
			progress = progress;
			damage = damage + 2;
			loss = loss + 1;
			rewards = rewards;
			break;
		}
		break;

	case 2:
		int option4 = random();
		switch (option4)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        You hear the faint sound of running water, leading you to a fresh water source.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health + 1;
			progress = progress + 2;
			damage = damage;
			loss = loss;
			rewards = rewards + 1;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Unsettling noises startle you, attracting attention from lurking dangers.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health - 1;
			progress = progress;
			damage = damage + 1;
			loss = loss;
			rewards = rewards;
			break;
		}
		break;
	}
	break; }
	}
	display_score(health, damage, rewards, loss, progress);
}
void level1_2(int& health, int& damage, int& rewards, int& loss, int& progress)
{
	int give_option = random();
	switch (give_option)
	{
	case 1:
	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                     option 1:Use a Map.\n";
			  cout << "               ------------------------------------------\n";

			  cout << "               ------------------------------------------\n";
			  cout << "                     option 2:Search for Edible Plants.\n";
			  cout << "               ------------------------------------------\n";
			  int user_input = input();
			  int option1 = random();
			  switch (user_input)
			  {

			  case 1:

				  switch (option1)
				  {
				  case 1:

					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The map reveals a secret passage that takes you closer to an exit.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health + 1;
					  progress = progress + 3;
					  damage = damage;
					  loss = loss;
					  rewards = rewards + 1;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       The map misleads you, sending you deeper into the cave's complex.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress;
					  damage = damage + 1;
					  loss = loss + 3;
					  rewards = rewards;
					  break;
				  }
				  break;




			  case 2:
				  int option2 = random();
				  switch (option2)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        You find edible mushrooms, restoring your health.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health + 3;
					  progress = progress;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        You accidentally consume a toxic plant, causing temporary illness.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 3;
					  progress = progress;
					  damage = damage + 1;
					  loss = loss;
					  rewards = rewards;
					  break;
				  }
				  break;

			  }
			  break;
	}

	case 2:

	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                     option 1:Build a Makeshift Bridge.\n";
			  cout << "               ------------------------------------------\n";

			  cout << "               ------------------------------------------\n";
			  cout << "                     option 1:Meditate for Guidance\n";
			  cout << "               ------------------------------------------\n";
			  int user_input = input();
			  int option3 = random();
			  switch (user_input)
			  {

			  case 1:

				  switch (option3)
				  {
				  case 1:

					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The bridge holds, allowing you to cross a treacherous gap.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The bridge collapses, and you lose some essential items in the fall.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 1;
					  progress = progress;
					  damage = damage + 1;
					  loss = loss + 2;
					  rewards = rewards;
					  break;
				  }
			  case 2:

				  int option4 = random();
				  switch (option4)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        You gain clarity and sense the correct path, avoiding potential traps.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards + 1;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Dark visions disturb your meditation, disorienting you for a short period.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress;
					  damage = damage;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;
			  }

			  break;
	}

	}
	display_score(health, damage, rewards, loss, progress);
}
void level1_3(int& health, int& damage, int& rewards, int& loss, int& progress)
{
	int give_option = random();
	switch (give_option)
	{
	case 1:
	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                     option 1:Follow a Faint Breeze\n";
			  cout << "               ------------------------------------------\n";


			  cout << "               ------------------------------------------\n";
			  cout << "                     option 2:Use a Grappling Hook\n";
			  cout << "               ------------------------------------------\n";
			  int user_input = input();
			  int option1 = random();
			  switch (user_input)
			  {

			  case 1:

				  switch (option1)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The breeze leads you to a hidden exit where fresh air flows.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health + 2;
					  progress = progress + 3;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The breeze is a draft from an underground chasm, and you risk falling.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 1;
					  progress = progress;
					  damage = damage + 2;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;




			  case 2:
				  int option2 = random();
				  switch (option2)
				  {
				  case 1:



					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The hook catches onto a stable surface, allowing you to ascend to a higher level.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The hook fails, and you lose valuable time struggling to retrieve it.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress;
					  damage = damage;
					  loss = loss + 2;
					  rewards = rewards;
					  break;
				  }
				  break;

			  }
			  break;
	}

	case 2:

	{

			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                     option 1:Disturb a Colony of Bats\n";
			  cout << "               ------------------------------------------\n";

			  cout << "               ------------------------------------------\n";
			  cout << "                     option 2:Create a Loud Distraction\n";
			  cout << "               ------------------------------------------\n";
			  int user_input = input();
			  int option3 = random();
			  switch (user_input)
			  {

			  case 1:

				  switch (option3)
				  {
				  case 1:

					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The bats reveal a passage used as a roosting spot, leading to an exit.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 3;
					  damage = damage;
					  loss = loss;
					  rewards = rewards + 1;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Disturbing the bats agitates them, causing confusion and disorientation.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress;
					  damage = damage;
					  loss = loss + 2;
					  rewards = rewards;
					  break;
				  }
			  case 2:

				  int option4 = random();
				  switch (option4)
				  {
				  case 1:



					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The distraction lures away potential threats, creating a safer path.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The noise attracts a larger, more dangerous creature to your location.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 1;
					  progress = progress;
					  damage = damage + 1;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;
			  }

			  break;
	}

	}
	display_score(health, damage, rewards, loss, progress);

}

int level2(int& health, int& damage, int& rewards, int& loss, int& progress)
{
	if (health > 0 && progress>2)
	{
		level2instruction();
	}
	else
	{
		cout << "\n     -------------------------------------------------------------------------------------\n";
		cout << "            SORRY! You can't play level 2 because your level 1 is't clear yet.\n";
		cout << "          Better luck for next time.Please try again to clear  this level:!.\n";
		cout << "     -------------------------------------------------------------------------------------\n";
		return -1;
	}
	level2_1(health, damage, rewards, loss, progress);
	level2_2(health, damage, rewards, loss, progress);
	level2_3(health, damage, rewards, loss, progress);
	return 0;
}
void level2_1(int& health, int& damage, int& rewards, int& loss, int& progress)
{


	int give_option = random();
	switch (give_option)
	{
	case 1:
	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                   Option 1: Climb a Tree\n";
			  cout << "               ------------------------------------------\n\n";


			  cout << "               ------------------------------------------\n";
			  cout << "                   Option 2: Follow a Stream\n";
			  cout << "               ------------------------------------------\n\n";



			  int user_input = input();
			  int option1 = random();
			  switch (user_input)
			  {

			  case 1:


				  switch (option1)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Spot a distant landmark that helps you find your way.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards + 1;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Disturb a beehive, getting stung and losing valuable time.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress;
					  damage = damage + 1;
					  loss = loss + 3;
					  rewards = rewards;
					  break;
				  }
				  break;

			  case 2:
				  int option2 = random();
				  switch (option2)
				  {

				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Discover a campsite with helpful supplies left by other travelers.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health + 1;
					  progress = progress + 1;
					  damage = damage - 2;
					  loss = loss - 2;
					  rewards = rewards + 1;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Slip and fall, losing some equipment in the water.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 1;
					  progress = progress;
					  damage = damage;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;
			  }
			  break;

	}
	case 2:
	{cout << "\n\n\n               ------------------------------------------\n";
	cout << "                     option 1: Build a Shelter\n";
	cout << "               ------------------------------------------\n\n";

	cout << "               ------------------------------------------\n";
	cout << "                     option 2: Make a Fire\n";
	cout << "               ------------------------------------------\n\n";



	int user_input = input();
	int option3 = random();
	switch (user_input)
	{

	case 1:

		switch (option3)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Successfully create a shelter, providing safety from the elements.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress;
			damage = damage;
			loss = loss;
			rewards = rewards + 1;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Attract the attention of wild animals while constructing the shelter.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health - 1;
			progress = progress + 1;
			loss = loss;
			rewards = rewards;
			break;
		}
		break;

	case 2:
		int option4 = random();
		switch (option4)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Keep warm and scare off predators in the area.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress + 1;
			damage = damage;
			loss = loss - 1;
			rewards = rewards + 1;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Accidentally start a small forest fire, attracting unwanted attention.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress - 1;
			damage = damage;
			loss = loss;
			rewards = rewards;
			break;
		}
		break;
	}
	break; }
	}
	display_score(health, damage, rewards, loss, progress);
}
void level2_2(int& health, int& damage, int& rewards, int& loss, int& progress)
{




	int give_option = random();
	switch (give_option)
	{
	case 1:
	{cout << "\n\n\n               ------------------------------------------\n";
	cout << "                   Option 1: Eat Berries\n";
	cout << "               ------------------------------------------\n\n";


	cout << "               ------------------------------------------\n";
	cout << "                   Option 2: Follow Animal Tracks\n";
	cout << "               ------------------------------------------\n\n";



	int user_input = input();
	int option1 = random();
	switch (user_input)
	{

	case 1:


		switch (option1)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Find edible berries and regain some strength.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health + 2;
			progress = progress + 1;
			damage = damage;
			loss = loss - 2;
			rewards = rewards;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Consume poisonous berries, causing sickness and weakness.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health - 2;
			progress = progress;
			damage = damage + 1;
			loss = loss;
			rewards = rewards;
			break;
		}
		break;
	case 2:
		int option2 = random();
		switch (option2)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Stumble upon a nearby trail leading to civilization.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress + 3;
			damage = damage;
			loss = loss;
			rewards = rewards;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Encounter a dangerous predator following the same tracks.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress;
			damage = damage;
			loss = loss + 1;
			rewards = rewards;
			break;
		}
		break;
	}
	break;

	}
	case 2:
	{cout << "\n\n\n               ------------------------------------------\n";
	cout << "                     option 1: Use the Stars for Navigation\n";
	cout << "               ------------------------------------------\n\n";

	cout << "               ------------------------------------------\n";
	cout << "                     option 2: Yell for Help\n";
	cout << "               ------------------------------------------\n\n";



	int user_input = input();
	int option3 = random();
	switch (user_input)
	{

	case 1:

		switch (option3)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Determine the right direction and make progress.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress + 3;
			damage = damage;
			loss = loss;
			rewards = rewards + 1;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Misinterpret the stars, leading to further disorientation.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress - 3;
			damage = damage;
			loss = loss;
			rewards = rewards;
			break;
		}
		break;

	case 2:
		int option4 = random();
		switch (option4)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Attract the attention of a passing hiker who guides you back.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress + 2;
			damage = damage;
			loss = loss;
			rewards = rewards;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Alert nearby predators to your location.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health - 1;
			progress = progress - 2;
			damage = damage;
			loss = loss;
			rewards = rewards;
			break;
		}
		break;
	}
	break; }
	}
	display_score(health, damage, rewards, loss, progress);
}
void level2_3(int& health, int& damage, int& rewards, int& loss, int& progress)
{
	int give_option = random();
	switch (give_option)
	{
	case 1:
	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                   Option 1: Cross a River\n";
			  cout << "               ------------------------------------------\n\n";


			  cout << "               ------------------------------------------\n";
			  cout << "                   Option 2: Create a Signal\n";
			  cout << "               ------------------------------------------\n\n";



			  int user_input = input();
			  int option1 = random();
			  switch (user_input)
			  {

			  case 1:


				  switch (option1)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Successfully cross, finding a quicker route to safety.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 1;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Get swept away by the strong current, losing valuable items.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 3;
					  damage = damage + 1;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;
			  case 2:
				  int option2 = random();
				  switch (option2)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Rescuers spot your signal and come to your aid.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health + 2;
					  progress = progress;
					  damage = damage - 3;
					  loss = loss - 4;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Attract the attention of hostile individuals in the area.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 1;
					  progress = progress - 2;
					  damage = damage + 1;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;
			  }
			  break;

	}
	case 2:
	{cout << "\n\n\n               ------------------------------------------\n";
	cout << "                     option 1: Use a Compass\n";
	cout << "               ------------------------------------------\n\n";

	cout << "               ------------------------------------------\n";
	cout << "                     option 2: Trust a Stranger\n";
	cout << "               ------------------------------------------\n\n";



	int user_input = input();
	int option3 = random();
	switch (user_input)
	{

	case 1:

		switch (option3)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Navigate in the right direction and make progress.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress + 2;
			damage = damage;
			loss = loss;
			rewards = rewards + 1;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        The compass malfunctions, leading you in the wrong direction.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress - 2;
			damage = damage;
			loss = loss + 1;
			rewards = rewards;
			break;
		}
		break;

	case 2:
		int option4 = random();
		switch (option4)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Encounter a helpful local who guides you to safety.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress + 2;
			damage = damage - 1;
			loss = loss;
			rewards = rewards;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        Fall victim to a deceitful individual, losing valuables and getting further lost.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health - 1;
			progress = progress - 3;
			damage = damage;
			loss = loss + 2;
			rewards = rewards;
			break;
		}
		break;
	}
	break; }
	}
	display_score(health, damage, rewards, loss, progress);
}

int level3(int& health, int& damage, int& rewards, int& loss, int& progress)
{

	if (health > 0 && progress>5)
	{
		level3instruction();
	}
	else
	{
		cout << "\n     -------------------------------------------------------------------------------------\n";
		cout << "            SORRY! You can't play level 3 because your level 2 is't clear yet.\n";
		cout << "          Better luck for next time.Please try again to clear  this level:!.\n";
		cout << "     -------------------------------------------------------------------------------------\n";
		return -1;
	}
	level3_1(health, damage, rewards, loss, progress);
	level3_2(health, damage, rewards, loss, progress);
	level3_3(health, damage, rewards, loss, progress);
	return 0;
}
void level3_1(int& health, int& damage, int& rewards, int& loss, int& progress)
{

	int give_option = random();
	switch (give_option)
	{
	case 1:
	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                   Option 1: Forge Ahead\n";
			  cout << "               ------------------------------------------\n\n";


			  cout << "               ------------------------------------------\n";
			  cout << "                   Option 2: Climb a Tree for a Better View\n";
			  cout << "               ------------------------------------------\n\n";



			  int user_input = input();
			  int option1 = random();
			  switch (user_input)
			  {

			  case 1:


				  switch (option1)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        You find a hidden path, making your way through the undergrowth faster.n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 1;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Thorny vines entangle you, causing minor injuries and slowing your progress.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 3;
					  progress = progress - 1;
					  damage = damage + 2;
					  loss = loss;
					  rewards = rewards;
					  break;
				  }
				  break;

			  case 2:
				  int option2 = random();
				  switch (option2)
				  {

				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       You spot a clear trail in the distance, helping you navigate more effectively.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        A swarm of angry insects nests in the tree, causing painful stings and attracting unwanted attention.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 1;
					  progress = progress;
					  damage = damage + 1;
					  loss = loss;
					  rewards = rewards;
					  break;
				  }
				  break;
			  }
			  break;

	}
	case 2:
	{cout << "\n\n\n               ------------------------------------------\n";
	cout << "                     option 1: Listen for Sounds of Wildlife\n";
	cout << "               ------------------------------------------\n\n";

	cout << "               ------------------------------------------\n";
	cout << "                     option 2: Follow Animal Tracks\n";
	cout << "               ------------------------------------------\n\n";



	int user_input = input();
	int option3 = random();
	switch (user_input)
	{

	case 1:

		switch (option3)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        You hear the rustling of leaves, leading you to a small stream with fresh water.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress + 2;
			damage = damage;
			loss = loss;
			rewards = rewards + 1;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        A wild animal is disturbed by your presence, and you must hastily retreat to avoid danger.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress - 1;
			loss = loss + 1;
			rewards = rewards;
			break;
		}
		break;

	case 2:
		int option4 = random();
		switch (option4)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        The tracks lead to a safe clearing with edible berries and a makeshift shelter.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress + 2;
			damage = damage;
			loss = loss - 1;
			rewards = rewards;
			break;
		case 2:
			cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
			cout << "     The tracks lead you into a thicket where you encounter a territorial animal, forcing you to find an alternate route.n";
			cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress - 1;
			damage = damage;
			loss = loss + 1;
			rewards = rewards;
			break;
		}
		break;
	}
	break; }
	}
	display_score(health, damage, rewards, loss, progress);

}
void level3_2(int& health, int& damage, int& rewards, int& loss, int& progress)
{

	int give_option = random();
	switch (give_option)
	{
	case 1:
	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                   Option 1: Use a Machete to Clear a Path\n";
			  cout << "               ------------------------------------------\n\n";


			  cout << "               ------------------------------------------\n";
			  cout << "                   Option 2: Smell the Air for Signs of Danger\n";
			  cout << "               ------------------------------------------\n\n";



			  int user_input = input();
			  int option1 = random();
			  switch (user_input)
			  {

			  case 1:


				  switch (option1)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        You successfully clear a path, making progress through the undergrowth more manageable.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards + 1;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The noise attracts hostile creatures, and you must flee to avoid confrontation\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 1;
					  damage = damage;
					  loss = loss + 2;
					  rewards = rewards;
					  break;
				  }
				  break;

			  case 2:
				  int option2 = random();
				  switch (option2)
				  {

				  case 1:
					  cout << "     -------------------------------------------------------------------------------------------------\n";
					  cout << "        You detect the scent of rain, helping you anticipate and find cover before a sudden downpour.\n";
					  cout << "     -------------------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 1;
					  damage = damage - 1;
					  loss = loss - 1;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  cout << "        A foul odor reveals the presence of a toxic plant, and you accidentally brush against it, suffering mild poisoning.\n";
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  health = health - 2;
					  progress = progress;
					  damage = damage;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;
			  }
			  break;

	}
	case 2:
	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                     option 1: Build a Makeshift Raft to Cross a Stream\n";
			  cout << "               ------------------------------------------\n\n";

			  cout << "               ------------------------------------------\n";
			  cout << "                     option 2: Follow the Sunlight\n";
			  cout << "               ------------------------------------------\n\n";



			  int user_input = input();
			  int option3 = random();
			  switch (user_input)
			  {

			  case 1:

				  switch (option3)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       The raft holds up, allowing you to cross the stream without getting wet. \n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards + 1;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       The raft falls apart, and you're forced to swim across, losing some supplies in the process.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 1;
					  progress = progress;
					  loss = loss;
					  rewards = rewards - 1;
					  break;
				  }
				  break;

			  case 2:
				  int option4 = random();
				  switch (option4)
				  {
				  case 1:
					  cout << "     ----------------------------------------------------------------------------------------\n";
					  cout << "     The sunlight guides you to an opening in the undergrowth, providing a clear path forward.\n";
					  cout << "     ----------------------------------------------------------------------------------------\n";
					  health = health + 1;
					  progress = progress + 1;
					  damage = damage;
					  loss = loss - 1;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -----------------------------------------------------------------------------------------\n";
					  cout << "     Following the sunlight leads you deeper into the dense thicket, complicating your journey.\n";
					  cout << "     -----------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 1;
					  damage = damage;
					  loss = loss;
					  rewards = rewards - 1;
					  break;
				  }
				  break;
			  }
			  break; }
	}
	display_score(health, damage, rewards, loss, progress);
}
void level3_3(int& health, int& damage, int& rewards, int& loss, int& progress)
{



	int give_option = random();
	switch (give_option)
	{


	case 1:
	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                   Option 1: Create a Distraction to Evade Predators\n";
			  cout << "               ------------------------------------------\n\n";


			  cout << "               ------------------------------------------\n";
			  cout << "                   Option 2: Consult a Map or Compass\n";
			  cout << "               ------------------------------------------\n\n";



			  int user_input = input();
			  int option1 = random();
			  switch (user_input)
			  {

			  case 1:


				  switch (option1)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The distraction successfully diverts predators, allowing you to slip away unnoticed.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health + 1;
					  progress = progress + 1;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  cout << "        The distraction backfires, attracting more predators to your location, and you must hastily find another route.\n";
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 1;
					  damage = damage + 1;
					  loss = loss + 2;
					  rewards = rewards;
					  break;
				  }
				  break;

			  case 2:
				  int option2 = random();
				  switch (option2)
				  {

				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The map reveals a hidden shortcut, reducing the time needed to traverse the undergrowth.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health + 1;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss - 2;
					  rewards = rewards + 1;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        The map is outdated, leading you astray and wasting valuable time.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 1;
					  progress = progress - 1;
					  damage = damage;
					  loss = loss + 2;
					  rewards = rewards;
					  break;
				  }
				  break;
			  }
			  break;

	}
	case 2:
	{cout << "\n\n\n               ------------------------------------------\n";
	cout << "                     option 1: Collect and Use Bioluminescent Plants for Light\n";
	cout << "               ------------------------------------------\n\n";

	cout << "               ------------------------------------------\n";
	cout << "                     option 2: Follow the Sound of Running Water\n";
	cout << "               ------------------------------------------\n\n";



	int user_input = input();
	int option3 = random();
	switch (user_input)
	{

	case 1:

		switch (option3)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        The plants emit a soft glow, illuminating the surroundings and helping you avoid obstacles.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress + 2;
			damage = damage;
			loss = loss;
			rewards = rewards + 1;
			break;
		case 2:
			cout << "     ------------------------------------------------------------------------------------------------------\n";
			cout << "        The glow attracts nocturnal predators, and you must quickly extinguish the light to avoid detection.\n";
			cout << "     ------------------------------------------------------------------------------------------------------\n";
			health = health - 1;
			progress = progress - 1;
			loss = loss + 1;
			rewards = rewards;
			break;
		}
		break;


	case 2:
		int option4 = random();
		switch (option4)
		{
		case 1:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        The sound leads you to a swampy area, forcing you to backtrack and find an alternative route.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health;
			progress = progress + 1;
			damage = damage;
			loss = loss + 1;
			rewards = rewards;
			break;
		case 2:
			cout << "     -------------------------------------------------------------------------------------\n";
			cout << "        You discover a freshwater spring, providing hydration and a landmark for navigation.\n";
			cout << "     -------------------------------------------------------------------------------------\n";
			health = health + 1;
			progress = progress + 2;
			damage = damage;
			loss = loss - 1;
			rewards = rewards;
			break;
		}
		break;
	}
	break; }
	}
	display_score(health, damage, rewards, loss, progress);
}

int level4(int& health, int& damage, int& rewards, int& loss, int& progress)
{

	if (health >0 && progress>7)
	{
		level4instruction();
	}
	else
	{
		cout << "\n     -------------------------------------------------------------------------------------\n";
		cout << "            SORRY! You can't play level 4(The final level) because your level 3 is't clear yet.\n";
		cout << "          Better   luck    for  next  time. Please  try  again  to  clear   this  level     :!.\n";
		cout << "     -------------------------------------------------------------------------------------\n";
		return -1;
	}
	level4_1(health, damage, rewards, loss, progress);
	level4_2(health, damage, rewards, loss, progress);
	level4_3(health, damage, rewards, loss, progress);
	level4_4(health, damage, rewards, loss, progress);
	level4_5(health, damage, rewards, loss, progress);
	return 0;
}
void level4_1(int& health, int& damage, int& rewards, int& loss, int& progress)
{
	int give_option = random();
	switch (give_option)
	{
	case 1:
	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                   Option 1: Swim across the river \n";
			  cout << "               ------------------------------------------\n\n";

			  cout << "               ------------------------------------------\n";
			  cout << "                   Option 2: Use a fallen tree as a bridge \n";
			  cout << "               ------------------------------------------\n\n";

			  int user_input = input();
			  int option1 = random();
			  switch (user_input)
			  {

			  case 1:
				  switch (option1)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       You successfully reach the other side quickly, saving time. \n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 1;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "         Strong current leads to exhaustion, losing some health due to the effort.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 2;
					  progress = progress - 1;
					  damage = damage + 2;
					  loss = loss;
					  rewards = rewards;
					  break;
				  }
				  break;

			  case 2:
				  int option2 = random();
				  switch (option2)
				  {

				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       You safely cross without getting wet, preserving health.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Unstable tree trunk breaks midway, causing a minor injury and delaying progress.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 1;
					  progress = progress - 1;
					  damage = damage + 1;
					  loss = loss;
					  rewards = rewards;
					  break;
				  }
				  break;
			  }
			  break;

	}
	case 2:
	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                     option 1: Build a makeshift raft from nearby materials\n";
			  cout << "               ------------------------------------------\n\n";

			  cout << "               ------------------------------------------\n";
			  cout << "                     option 2: Attempt to find a shallow point to wade through\n";
			  cout << "               ------------------------------------------\n\n";

			  int user_input = input();
			  int option3 = random();
			  switch (user_input)
			  {

			  case 1:

				  switch (option3)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       You successfully navigated the river, preserving health and energy.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards + 1;
					  break;
				  case 2:
					  cout << "     ------------------------------------------------------------------------------------------------------------------\n";
					  cout << "        Poor construction leads to the raft falling apart midstream, resulting in a temporary loss of items carried.\n";
					  cout << "     ------------------------------------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 3;
					  loss = loss + 1;
					  rewards = rewards - 2;
					  break;
				  }
				  break;

			  case 2:
				  int option4 = random();
				  switch (option4)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        You discovered a shallow area and cross without difficulty.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 1;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  cout << "         Step into a hidden sinkhole, getting stuck and losing some health while struggling to free yourself.\n";
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  health = health - 1;
					  progress = progress - 1;
					  damage = damage;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;
			  }
			  break;
	}
	}
	display_score(health, damage, rewards, loss, progress);





}
void level4_2(int& health, int& damage, int& rewards, int& loss, int& progress)
{
	int give_option = random();
	switch (give_option)
	{
	case 1:
	{

			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                   Option 1: Attempt to ford the river using brute strength\n";
			  cout << "               ------------------------------------------\n\n";

			  cout << "               ------------------------------------------\n";
			  cout << "                   Option 2:  Use a companion’s expertise to navigate the river\n";
			  cout << "               ------------------------------------------\n\n";

			  int user_input = input();
			  int option1 = random();
			  switch (user_input)
			  {

			  case 1:
				  switch (option1)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "         Successfully cross using sheer force, feeling accomplished.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards + 1;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Expend a lot of energy and risk injury, leading to a decrease in health and progress.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 3;
					  progress = progress - 1;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  }
				  break;

			  case 2:
				  int option2 = random();
				  switch (option2)
				  {

				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       Trust companion’s guidance, making a swift and safe passage\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Misinterpret companion’s advice, leading to a longer and riskier crossing. \n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 2;
					  damage = damage;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;
			  }
			  break;

	}
	case 2:
	{
			  cout << "\n\n\n               ---------------------------------------------------\n";
			  cout << "                     option 1:  Dive in and let the river take you\n";
			  cout << "               ---------------------------------------------------\n\n";

			  cout << "               -----------------------------------------------------------\n";
			  cout << "                     option 2: Create a human chain with fellow travelers\n";
			  cout << "               -----------------------------------------------------------\n\n";

			  int user_input = input();
			  int option3 = random();
			  switch (user_input)
			  {

			  case 1:

				  switch (option3)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       Discover a hidden underwater passage leading to a treasure trove.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 1;
					  damage = damage;
					  loss = loss;
					  rewards = rewards + 4;
					  break;
				  case 2:
					  cout << "     --------------------------------------------------------------------------------------------\n";
					  cout << "        Drift downstream, losing track of your location and potentially missing the intended path.\n";
					  cout << "     --------------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 2;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;

			  case 2:
				  int option4 = random();
				  switch (option4)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Everyone successfully crosses together, forging stronger bonds.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  cout << "    One person loses their grip, causing a chain reaction and resulting in a minor injury. \n";
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  health = health - 1;
					  progress = progress - 1;
					  damage = damage + 1;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;
			  }
			  break;
	}
	}
	display_score(health, damage, rewards, loss, progress);

}
void level4_3(int& health, int& damage, int& rewards, int& loss, int& progress)
{
	int give_option = random();
	switch (give_option)
	{
	case 1:

	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                   Option 1: Rope - assisted crossing\n";
			  cout << "               ------------------------------------------\n\n";

			  cout << "               ------------------------------------------\n";
			  cout << "                   Option 2: Search for a nearby bridge upstream\n";
			  cout << "               ------------------------------------------\n\n";

			  int user_input = input();
			  int option1 = random();
			  switch (user_input)
			  {

			  case 1:
				  switch (option1)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "         Skillfully use a rope to maintain balance, ensuring a safe passage.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Rope snaps, causing a fall into the river and losing some carried items.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 2;
					  progress = progress - 2;
					  damage = damage + 2;
					  loss = loss + 2;
					  rewards = rewards - 3;
					  break;
				  }
				  break;

			  case 2:
				  int option2 = random();
				  switch (option2)
				  {

				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       Find a sturdy bridge, making the crossing effortless and safe.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;

					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     ----------------------------------------------------------------------------------------\n";
					  cout << "        Encounter a broken or unsafe bridge, wasting time in the search and delaying progress.\n";
					  cout << "     ----------------------------------------------------------------------------------------\n";
					  health = health - 1;
					  progress = progress - 2;
					  damage = damage;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;
			  }
			  break;

	}
	case 2:
	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                     option 1: Wait for the water level to decrease\n";
			  cout << "               ------------------------------------------\n\n";

			  cout << "               ------------------------------------------\n";
			  cout << "                     option 2: Ask a local guide for the safest route\n";
			  cout << "               ------------------------------------------\n\n";

			  int user_input = input();
			  int option3 = random();
			  switch (user_input)
			  {

			  case 1:

				  switch (option3)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       Patience pays off; the river's intensity decreases, making it easier to cross.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage - 2;
					  loss = loss - 2;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     ------------------------------------------------------------------------------------------------------\n";
					  cout << "        Time wasted waiting leads to increased fatigue and the risk of encountering other obstacles later.\n";
					  cout << "     -----------------------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 2;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;

			  case 2:
				  int option4 = random();
				  switch (option4)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       Receive guidance that leads to a safe and less challenging crossing. \n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss - 2;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  cout << "     Miscommunication or incorrect guidance leads to taking a riskier path, causing minor injury and loss of resources.\n";
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 2;
					  damage = damage;
					  loss = loss + 1;
					  rewards = rewards - 2;
					  break;
				  }
				  break;
			  }
			  break;
	}
	}
	display_score(health, damage, rewards, loss, progress);
}
void level4_4(int& health, int& damage, int& rewards, int& loss, int& progress)
{
	int give_option = random();
	switch (give_option)
	{
	case 1:

	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                   Option 1: Follow the animal tracks as a sign of a safer path\n";
			  cout << "               ------------------------------------------\n\n";

			  cout << "               ------------------------------------------\n";
			  cout << "                   Option 2: Find a guidebook on river crossings in the area\n";
			  cout << "               ------------------------------------------\n\n";

			  int user_input = input();
			  int option1 = random();
			  switch (user_input)
			  {

			  case 1:
				  switch (option1)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Track leads to a shallower area, making the crossing relatively easy.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss - 1;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Animal tracks lead to a misleading path, resulting in wasted time and energy.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health - 2;
					  progress = progress - 1;
					  damage = damage;
					  loss = loss;
					  rewards = rewards - 1;
					  break;
				  }
				  break;

			  case 2:
				  int option2 = random();
				  switch (option2)
				  {

				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       Gather valuable knowledge, allowing for a safe and strategic crossing.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards + 1;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Misinterpret or follow outdated advice, leading to a more challenging crossing.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  }
				  break;
			  }
			  break;

	}
	case 2:

	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                     option 1: Attempt to create a makeshift bridge using branches\n";
			  cout << "               ------------------------------------------\n\n";

			  cout << "               ------------------------------------------\n";
			  cout << "                     option 2: Follow a mysterious light seen across the river\n";
			  cout << "               ------------------------------------------\n\n";

			  int user_input = input();
			  int option3 = random();
			  switch (user_input)
			  {

			  case 1:

				  switch (option3)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       Craft a sturdy bridge, enabling a safe and efficient crossing.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards + 1;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Bridge collapses while crossing, causing a fall and minor injury.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 2;
					  loss = loss + 1;
					  rewards = rewards;
					  break;
				  }
				  break;

			  case 2:
				  int option4 = random();
				  switch (option4)
				  {
				  case 1:
					  cout << "     -----------------------------------------------------------------------------------------------------\n";
					  cout << "         The light leads to a dangerous path, causing confusion and leading away from the intended route.\n";
					  cout << "     -----------------------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  cout << "     Discover a safe crossing spot illuminated by the light.\n";
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards + 1;
					  break;
				  }
				  break;
			  }
			  break;
	}
	}
	display_score(health, damage, rewards, loss, progress);

}
void level4_5(int& health, int& damage, int& rewards, int& loss, int& progress)
{
	int give_option = random();
	switch (give_option)
	{
	case 1:


	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                   Option 1:  Use a map to identify the narrowest part of the river\n";
			  cout << "               ------------------------------------------\n\n";

			  cout << "               ------------------------------------------\n";
			  cout << "                   Option 2:  Attempt to ride the rapids using a makeshift raft\n";
			  cout << "               ------------------------------------------\n\n";

			  int user_input = input();
			  int option1 = random();
			  switch (user_input)
			  {

			  case 1:
				  switch (option1)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Identify the narrow point, making the crossing quicker and less challenging.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 1;
					  damage = damage;
					  loss = loss - 1;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     ----------------------------------------------------------------------------------------------------\n";
					  cout << "        Misinterpret the map, leading to an unsuccessful search for the crossing point and wasting time.\n";
					  cout << "     ----------------------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 1;
					  damage = damage;
					  loss = loss + 2;
					  rewards = rewards;
					  break;
				  }
				  break;

			  case 2:
				  int option2 = random();
				  switch (option2)
				  {

				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       Navigate the rapids skillfully, enjoying an exhilarating ride.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "         Lose control of the raft, resulting in a rough tumble and loss of carried items.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 1;
					  damage = damage;
					  loss = loss + 1;
					  rewards = rewards - 2;
					  break;
				  }
				  break;
			  }
			  break;

	}
	case 2:
	{
			  cout << "\n\n\n               ------------------------------------------\n";
			  cout << "                     option 1:  Search for a local ferry service\n";
			  cout << "               ------------------------------------------\n\n";

			  cout << "               ------------------------------------------\n";
			  cout << "                     option 2: Confront and battle the river’s challenges head - on\n";
			  cout << "               ------------------------------------------\n\n";

			  int user_input = input();
			  int option3 = random();
			  switch (user_input)
			  {

			  case 1:

				  switch (option3)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "       Find a trustworthy ferry, ensuring a safe and comfortable passage.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss;
					  rewards = rewards + 1;
					  break;
				  case 2:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "         Encounter an unreliable or non - existent ferry service, wasting time and resources.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 1;
					  loss = loss + 1;
					  rewards = rewards - 1;
					  break;
				  }
				  break;

			  case 2:
				  int option4 = random();
				  switch (option4)
				  {
				  case 1:
					  cout << "     -------------------------------------------------------------------------------------\n";
					  cout << "        Successfully overcome obstacles, gaining confidence and a sense of accomplishment.\n";
					  cout << "     -------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress + 2;
					  damage = damage;
					  loss = loss - 1;
					  rewards = rewards;
					  break;
				  case 2:
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  cout << "     Exhaust yourself in the struggle, losing health and morale while barely making progress.\n";
					  cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
					  health = health;
					  progress = progress - 1;
					  damage = damage;
					  loss = loss + 1;
					  rewards = rewards - 1;
					  break;
				  }
				  break;
			  }
			  break;
	}
	}
	display_score(health, damage, rewards, loss, progress);
	if (health > 0 &&  rewards>=3 && progress>=10)
	{
		cout << "\n\n\n     -----------------------------------------------------------------------------------------------------------------------\n";
		cout << "                HURRAY!!!! Congratulations, You Won the Game!!!! You displayed great analytical skills while choosing between your options. \n";
		cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
	}
	else   
	{
		cout << "\n\n\n     -----------------------------------------------------------------------------------------------------------------------\n";
		cout << "          OOPS :( You could not clear the game with enough rewards and progress. Better Luck next time :)       \n";
		cout << "     -----------------------------------------------------------------------------------------------------------------------\n";
	}
}
