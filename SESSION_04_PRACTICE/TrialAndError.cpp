#include<iostream>

class CFirstClass
{
    private:
        bool isThisAccessible(bool bFlag)
        {
            if(bFlag == false)
            {
                std::cout<<"Flag is False"<<std::endl;
                return false;
            }
            std::cout<<"Flag is True"<<std::endl;
            return true;
        }
    public:
        CFirstClass()
        {
            std::cout<<"CFirstClass constructor."<<std::endl;
        }

        ~CFirstClass()
        {
            std::cout<<"CFirstClass destructor."<<std::endl;
        }

        void show(int iNum, int iNum2)
        {
            if((iNum >= 0 ) || (iNum2 >= 0))
            {
                std::cout<< iNum << " and "<< iNum2 <<" are positive numberes"<<std::endl;
            }
            else
            {
                std::cout<<"Invalid Numbers."<<std::endl;
            }
        }

        void printFun(void)
        {
            std::cout<<"in CFirstClass::printFun()."<<std::endl;
        }
};

class CSecondClass
{
    private:
        CFirstClass cFClassObj;
        int val1, val2;

    public:
        CSecondClass(int _iNum, int _inum2)
        {
            std::cout<<"CSecondClass constructor."<<std::endl;
            val1 = _iNum;
            val2 = _inum2;
        }

        ~CSecondClass()
        {
            std::cout<<"CSecondClass destructor."<<std::endl;
        }

        void secondShow()
        {
            cFClassObj.show(val1, val2);
            std::cout<<"This is secondShow() function."<<std::endl;
        }
};

int main()
{
    int iNum1 = 0;
    int iNum2 = 0;

    std::cout<<"Enter two numbers: ";
    std::cin>>iNum1;
    std::cin>>iNum2;

    CSecondClass* pSecObj = new CSecondClass(iNum1, iNum2);

    pSecObj->secondShow();

    delete pSecObj;
    pSecObj = NULL;
    return(0);
}
