//#include<iostream>
//using namespace std;
//class point {
//private:
//
//	//encapsulation
//	int X, Y;
//public:
//
//	//setters
//	void setX(int a) {
//		X = a;
//
//	}
//	void setY(int b) {
//		Y = b;
//
//	}
//	//getters
//	int getX() {
//		return X;
//
//	}
//	int getY() {
//		return Y;
//	}
//	//default constructor
//	point() {
//		X = 0;
//		Y = 0;
//	}
//	//parametrized constructor
//	 point(int a, int b) {
//		 X = a;
//		 Y = b;
//
//	}
//	 //calculating distance
//	 void distance() {
//		 int l, m, dist;
//		 cout << "enter another point" << endl;
//		 cin >> l >> m;
//		 dist = ((X - l) * (X - l) + (Y - m) * (Y - m));
//		 double answer = sqrt(dist);
//		 cout << "your answer is" <<" "<< answer << endl;
//
//	 }
//
//
//};
//int main() {
//	//considering 2,3 as a default points
//	point p(2, 3);
//	p.distance();
//
//
//
//
//	return 0;
//}