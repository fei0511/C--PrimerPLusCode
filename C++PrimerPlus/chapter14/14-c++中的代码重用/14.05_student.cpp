#include "studenti.h"
//功能：14.5 私有继承（通过类名访问基类）
//时间：2020年12月3日20:32:27
// 
//using std::ostream;
//using std::endl;
//using std::istream;
//using std::string;
//
//double Student::Average() const
//{
//	if (ArrayDb::size() > 0)
//	{
//		return ArrayDb::sum() / ArrayDb::size();
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//const string & Student::Name() const
//{
//	return (const string &) *this;   //相当于student.name
//}
//
//double & Student::operator[](int i)
//{
//	return ArrayDb::operator[](i);
//}
////私有方法
//ostream & Student::arr_out(ostream & os) const
//{
//	int i;
//	int lim = ArrayDb::size();
//	if (lim > 0)
//	{
//		for (i = 0; i < lim; i++)
//		{
//			os << ArrayDb::operator[](i) << " ";   // std::valarray<double>::operator[](i)
//			if (i % 5 == 4)
//			{
//				os << endl;
//			}
//		}
//		if (i % 5 != 0)
//		{
//			os << endl;
//		}
//	}
//	else
//	{
//		os << " empty array ";
//	}
//	return os;
//}
//
//std::istream & operator>>(std::istream & is, Student & stu)
//{
//	is >> (string &)stu;
//	return is;
//}
//
//std::istream & getline(std::istream & is, Student & stu)
//{
//	getline(is, (string &)stu);
//	return is;
//}
//
//std::ostream & operator<<(std::ostream & os, const Student & stu)
//{
//	os << "Scores for " << (const string &) stu << ":\n";
//	stu.arr_out(os);
//	return os;
//}























