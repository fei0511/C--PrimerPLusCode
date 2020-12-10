#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>

//功能：16.9 标准模板库(模板类vector)
//时间：2020年12月8日19:13:09

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
//		for_each(books.begin(), books.end(), ShowReview);  //最后一个参数传入函数名，也即函数对象
//
//		sort(books.begin(), books.end());     //此处间接调用了operator<函数，来完成排序
//		cout << "Sorted by tilte:\nRating\t\Book\n";
//		for_each(books.begin(), books.end(), ShowReview);
//
//		sort(books.begin(), books.end(), worseThan); //此处调用了worseThan函数，来完成排序
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
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
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
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/