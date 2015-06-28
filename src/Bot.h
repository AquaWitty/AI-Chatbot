/**
 * ========================
 * 
 * Filename: Bot.h
 * 
 * Author: Ceytix <ceytix@mailoo.org>
 * 
 * Description: Bot class header
 * 
 * Created: 27/06/15
 * =========================
 **/
 
using namespace std;

class Bot
{
	public:
		Bot();
		~Bot();
		void talk();
		string answerTo(string);
		void newAnswer(string);

	private:
		map <string, map <string, int> > memory;
		string answer;
		bool firstTime;
};
