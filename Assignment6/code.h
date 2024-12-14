/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 6
*/

#ifndef main_code
#define main_code

#include <iostream>
#include <vector>

template <typename T>
class template_class {
private:
    T _obj;
    int _num;
    std::vector<float> _vec;

public:
    //! Constructor
    template_class(T obj,int num,std::vector<float>& vec)
        :_obj(obj),_num(num),_vec(vec) {}

    //! Methods
    bool foo() {
        return _obj.bar(_num, _vec);
    };
};

template <>
class template_class<int> {
private:
    int _obj;
    int _num;
    std::vector<float> _vec;

public:
    //! Constructor
    template_class(int obj,int num,std::vector<float>& vec)
        :_obj(obj),_num(num),_vec(vec) {}

    //! Methods
    bool foo() {
        return true;
    };
};

template <>
class template_class<double> {
private:
    double _obj;
    int _num;
    std::vector<float> _vec;

public:
    //! Constructor
    template_class(double obj,int num,std::vector<float>& vec)
        :_obj(obj),_num(num),_vec(vec) {}

    //! Methods
    bool foo() {
        return false;
    };
};

class Class1 {
public:
    bool bar(int num,std::vector<float>& v) {
        if (num>0) {
            return true;
        } else {
            return false;
        }
    }
    int c_1_1() {
        return 1;
    }

    double c_1_2() {
        return 1.0;
    }

    void c_1_3() {
        std::cout<<"Method c_1_3 was performed.\n";
    }
};

class Class2 {
public:
    bool bar(int num,std::vector<float>& v) {
        if (v.size()>0) {
            return true;
        } else {
            return false;
        }
    }
    int c_2_1() {
        return 1;
    }

    double c_2_2() {
        return 1.0;
    }

    void c_2_3() {
        std::cout<<"Method c_2_3 was performed.\n";
    }
};

class Class3 {
public:
    bool bar(int num,std::vector<float>& v) {
        if (-1*num==static_cast<int>(v.size())) {
            return true; // if we dont use static_cast, we get size_t type
        } else {
            return false;
        }
    }
    int c_3_1() {
        return 1;
    }

    double c_3_2() {
        return 1.0;
    }

    void c_3_3() {
        std::cout<<"Method c_3_3 was performed.\n";
    }

};
#endif