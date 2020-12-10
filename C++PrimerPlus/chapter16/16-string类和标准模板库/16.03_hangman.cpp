#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

//功能：16.3 使用字符串
//时间：2020年12月7日19:15:29
//using std::string;
//const int NUM = 26;
//const string wordlist[NUM] = { "apiary", "beetle", "cereal", "danger", "ensign", "florid", "garge", "health", "insult",
//							  "jackal", "keeper", "loaner", "mange", "nonce", "onset", "plaid", "quilt", "remote", "stolid",
//							  "train", "useful", "valid", "whence", "xenon", "yearn", "zippy" };


//int main()
//{
//	using namespace std;
//
//	std::srand(std::time(0));
//	char play;
//	cout << "Will you play a word game? <y/n>";
//	cin >> play;
//	play = tolower(play);    //将字符转换为小写
//	while (play == 'y')
//	{
//		string target = wordlist[std::rand() % NUM]; //随机选择一个单词
//		int length = target.length();
//		string attempt(length, '-');
//		string badchars;
//		int guesses = 6;
//		cout << "Guess my secret word. It has " << length << " letters, and you guess\n" << "one letter at a time. You get " << guesses << " wrong guesses.\n";
//		cout << "Your word: " << attempt << endl;
//
//		while (guesses > 0 && attempt != target)
//		{
//			char letter;
//			cout << "Guess a letter: ";
//			cin >> letter;
//			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
//			{
//				cout << "You already guessed that. Try again.\n";
//				continue;
//			}
//			int loc = target.find(letter);
//			if (loc == string::npos)
//			{
//				cout << "Oh, bad guess!\n";
//				--guesses;
//				badchars += letter;
//			}
//			else
//			{
//				cout << "Good guess!\n";
//				attempt[loc] = letter;
//				loc = target.find(letter);
//				while (loc != string::npos)
//				{
//					attempt[loc] = letter;
//					loc = target.find(letter, loc + 1);
//				}
//			}
//			cout << "Your word: " << attempt << endl;
//			if (attempt != target)
//			{
//				if (badchars.length() > 0)
//				{
//					cout << "Bad choices: " << badchars << endl;
//				}
//				cout << guesses << " bas guesses left\n";
//			}
//		}
//		if (guesses > 0)
//		{
//			cout << "That's  right!\n";
//		}
//		else
//		{
//			cout << "Sorry, the word is " << target << ".\n";
//			
//		}
//
//		cout << "Will you play another?<y/n>";
//		cin >> play;
//		play = tolower(play);
//		
//	}
//
//	cout << "Bye\n";
//
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Will you play a word game? <y/n>y
Guess my secret word. It has 5 letters, and you guess
one letter at a time. You get 6 wrong guesses.
Your word: -----
Guess a letter: e
Good guess!
Your word: ----e
6 bas guesses left
Guess a letter: a
Oh, bad guess!
Your word: ----e
Bad choices: a
5 bas guesses left
Guess a letter: t
Oh, bad guess!
Your word: ----e
Bad choices: at
4 bas guesses left
Guess a letter: r
Oh, bad guess!
Your word: ----e
Bad choices: atr
3 bas guesses left
Guess a letter: c
Good guess!
Your word: ---ce
Bad choices: atr
3 bas guesses left
Guess a letter: c
You already guessed that. Try again.
Guess a letter: c
You already guessed that. Try again.
Guess a letter: a=p
You already guessed that. Try again.
Guess a letter: Oh, bad guess!
Your word: ---ce
Bad choices: atr=
2 bas guesses left
Guess a letter: Oh, bad guess!
Your word: ---ce
Bad choices: atr=p
1 bas guesses left
Guess a letter: i
Oh, bad guess!
Your word: ---ce
Bad choices: atr=pi
0 bas guesses left
Sorry, the word is nonce.
Will you play another?<y/n>n
Bye
请按任意键继续. . .

-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/