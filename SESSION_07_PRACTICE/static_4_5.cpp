class Test
{
    private:
        static int num;
        static int f(int, int);
    public:
        static int x;
};

int Test::num;

int Test::x;      /// memory will be allocated

void xyz()
{
    Test::x;    //ok
    //Test::num;  //Error
}

class Date
{
    private:
        int dd, mm, yy;

    public:
        Date(int _dd, int _mm, int _yy)
        {
            dd = _dd;
            mm = _mm;
            yy = _yy;
        }
};

Date d(1, 1, 2222);

// .section .data
//     d:
//     .int    1
//     .int    1
//     .int    2222

// .setion  .bss
//     .com    d, 12, 4


//Global Initilizer Block.


