#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;

class Intvec
{
public:
    explicit Intvec(size_t num = 0):m_size(num),m_data(new int[num])
    {
        log("Intvec Construct ..");
    }

    ~Intvec()
    {
        log("Destroy Intvec");
    }
     Intvec(const Intvec& other)
        : m_size(other.m_size), m_data(new int[m_size])
    {
        log("copy constructor");
        for (size_t i = 0; i < m_size; ++i)
            m_data[i] = other.m_data[i];
    }

    Intvec& operator=( Intvec& other)
    {
        // other.m_data;
        log("copy assignment operator");
        Intvec tmp(other);
        std::swap(m_size, tmp.m_size);
        std::swap(m_data, tmp.m_data);
        return *this;
    }
    Intvec& operator=(Intvec&& other)
{
    log("move assignment operator");
    std::swap(m_size, other.m_size);
    std::swap(m_data, other.m_data);
    return *this;
}
    
    void print()
    {
        log("Now ");
    }
private:
    inline void log(const char* msg){
        cout << msg  << " size = " << m_size<< endl;
    }
    size_t m_size;
    int* m_data;
};

int pivotIndex(vector<int>& nums)
{
    int sum = 0;

    for(int i  = 0; i< nums.size(); i++ )
    {
        sum += nums[i];
    }   

    int leftSum = 0;
    
     for(int i  = 0; i< nums.size(); i++ )
    {
        sum -= nums[i];
        if( sum == leftSum) 
        {
            return i;
        }
        leftSum += nums[i];
    }   
    return -1;

}

int searchInsert(vector<int> &nums, int target)
{
    int MaxPosition = nums.size() -1;
    int MinPosition = 0;
    if(target > nums[nums.size()-1])
    {
        return nums.size();
    }
    if(nums.size() == 1)
    {
        if(target > nums[0]) {
            return nums.size();
        }else {
            return 0;
        }
    }
    int nowPosition = nums.size()/2;
    while (true)
    {
         if(nums[nowPosition] > target)
         {
            MaxPosition = nowPosition;
            nowPosition = (MaxPosition-MinPosition)/2 + MinPosition;
         }
         else if(nums[nowPosition] < target)
         {
            MinPosition = nowPosition;
            nowPosition = (MaxPosition-MinPosition)/2 + MinPosition;
         }
         else
         {
            return nowPosition;
         } 
         if(MaxPosition - MinPosition == 1){
            if(target > nums[MinPosition])
            {
                return MinPosition + 1;
            }else{
                return MinPosition;    
            }
         }  
        /* code */
    }
    
}

int main()
{
      

    unsigned int u = 10, u2=42;
    cout << u2 -u << endl; //32
    cout << u - u2 << endl; // 4,294,967,296 -32
    signed int i =10;
    cout << i -u << endl;
    cout << 024 << endl;
    cout << 0xFF << endl;
    return 0;
}