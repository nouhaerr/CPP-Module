#include <iostream>
class Nn
{
private:
	int n;
public:
	Nn(): n(1337){
	std::cout << "def\n";}
	~Nn(){};
    int getN() const{
        return this->n;
    };
};

std::ostream & operator<<( std::ostream & os, const Nn & array ) {
	os << array.getN();
	return os;
}

template <typename T>
class Array {
private:
    T* data;
    size_t size;

public:
    // Constructor
    Array(size_t size) : size(size) {
        data = new T[size]();
    }

    // Destructor
    ~Array() {
        delete[] data;
    }

    // Const-qualified operator[] for read-only access
    const T& operator[](size_t pos) const {
        return data[pos];
    }

    // Non-const operator[] for read-write access
   T& operator[](size_t pos) {
        return data[pos];
    }
};

template <typename T>
std::ostream & operator<<( std::ostream & os, const Array<T> & array ) {
	os << "[";
	size_t size = array.size();
	for( size_t pos= 0; pos < size; ++pos ) {
		os << array[pos];
		if (pos < size-1) os << ", ";
	}
	return os << "]";
}

int main() {
    // Array arr(5); // Create an array of size 5

    // // Using the const-qualified operator[]
    // std::cout << "Const-qualified operator[]:" << std::endl;
    // for (size_t i = 0; i < 5; ++i) {
    //     std::cout << arr[i] << " "; // Read-only access
    // }
    // std::cout << std::endl;

    // // Using the non-const operator[]
    // std::cout << "Non-const operator[]:" << std::endl;
    // for (size_t i = 0; i < 5; ++i) {
    //     arr[i] *= 2; // Modify the elements
    //     std::cout << arr[i] << " ";
    // }
    // std::cout << std::endl;

    Array<Nn> T(3);
    Array<Nn> p(3);

    for(int i = 0; i< 3; i++){
        std::cout << T[i] << " ";
    }
        std::cout << "\n";
    for(int i = 0; i< 3; i++){
        std::cout << p[i] << " ";
    }

    Array<int> R(3);
    Array<int>  W(3);
        std::cout << "\n";

    for(int i = 0; i< 3; i++){
        std::cout << R[i] << " ";
    }
        std::cout << "\n";
    for(int i = 0; i< 3; i++){
        std::cout << W[i] << " ";
    }
    return 0;
}