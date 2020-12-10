#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>

//���ܣ�16.9 ��׼ģ���(ģ����vector)
//ʱ�䣺2020��12��8��19:13:09

//struct Review
//{
//	int rating;
//	std::string title;
//};
//
//bool operator<(const Review& rl, const Review & r2);
//bool worseThan(const Review& r1, const Review& r2);
//bool FillReview(Review& rr);
//void ShowReview(const Review& rr);
//
//int main()
//{
//	using namespace std;
//
//	vector<Review> books;
//	Review temp;
//	while (FillReview(temp))
//	{
//		books.push_back(temp);
//	}
//
//	if (books.size() > 0)
//	{
//		cout << "Thank you. You entered the following " << books.size() << " ratings:\n" << "Rating\tBook\n";
//		for_each(books.begin(), books.end(), ShowReview);  //���һ���������뺯������Ҳ����������
//
//		sort(books.begin(), books.end());     //�˴���ӵ�����operator<���������������
//		cout << "Sorted by tilte:\nRating\t\Book\n";
//		for_each(books.begin(), books.end(), ShowReview);
//
//		sort(books.begin(), books.end(), worseThan); //�˴�������worseThan���������������
//		cout << "Sorted by rating:\nRating\t\Book\n";
//		for_each(books.begin(), books.end(), ShowReview);
//
//		random_shuffle(books.begin(), books.end());
//		cout << "After shuffling:\nRating\tBook\n";
//		for_each(books.begin(), books.end(), ShowReview);
//	}
//	else
//	{
//		cout << "No entries. ";
//	}
//	cout << "Bye.\n";
//
//	system("pause");
//	return 0;
//}
//
//bool operator<(const Review& rl, const Review& r2)
//{
//	if (rl.title < r2.title)
//	{
//		return true;
//	}
//	else if (rl.title == r2.title && rl.rating < r2.rating)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//bool worseThan(const Review& r1, const Review& r2)
//{
//	if (r1.rating < r2.rating)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//bool FillReview(Review& rr)
//{
//	std::cout << "Enter book title (quit to quit): ";
//	std::getline(std::cin, rr.title);
//	if (rr.title == "quit")
//	{
//		return false;
//	}
//	std::cout << "Enter book rating: ";
//	std::cin >> rr.rating;
//	if (!std::cin)
//	{
//		return false;
//	}
//	while (std::cin.get() != '\n')
//	{
//		continue;
//	}
//	return true;
//}
//
//void ShowReview(const Review& rr)
//{
//	std::cout << rr.rating << "\t" << rr.title << std::endl;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter book title (quit to quit): The Cat Who Can Teach You Weight Loss
Enter book rating: 8
Enter book title (quit to quit): The Dogs of Dharma
Enter book rating: 6
Enter book title (quit to quit): The Wimps of Wonk
Enter book rating: 3
Enter book title (quit to quit): Farewell and Delete
Enter book rating: 7
Enter book title (quit to quit): quit
Thank you. You entered the following 4 ratings:
Rating  Book
8       The Cat Who Can Teach You Weight Loss
6       The Dogs of Dharma
3       The Wimps of Wonk
7       Farewell and Delete
Sorted by tilte:
Rating  Book
7       Farewell and Delete
8       The Cat Who Can Teach You Weight Loss
6       The Dogs of Dharma
3       The Wimps of Wonk
Sorted by rating:
Rating  Book
3       The Wimps of Wonk
6       The Dogs of Dharma
7       Farewell and Delete
8       The Cat Who Can Teach You Weight Loss
After shuffling:
Rating  Book
3       The Wimps of Wonk
6       The Dogs of Dharma
8       The Cat Who Can Teach You Weight Loss
7       Farewell and Delete
Bye.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/