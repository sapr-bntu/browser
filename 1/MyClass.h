#ifndef MyClass_h_
#define MyClass_h_

class MyClass {
public:
    int min(int n1, int n2)
    {
        return n1 < n2 ? n1 : n2;
    }

    int max(int n1, int n2)
    {
        return n1 > n2 ? n1 : n2;
    }
};
#endif //MyClass_h_

