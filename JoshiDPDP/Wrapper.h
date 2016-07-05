#pragma once


#ifdef DPDPLIBRARY_EXPORTS
#define DLL_API __declspec(dllexport) 
#else
#define DLL_API __declspec(dllimport) 
#endif


template <typename T>
class Wrapper {
public:
    Wrapper()
    {
        _dataPtr = 0;
    }

    Wrapper(const T& inner)
    {
        if (_dataPtr != 0)
            delete _dataPtr;
    }

    Wrapper(const Wrapper<T>& original)
    {
        if (original._dataPtr != 0)
        {
            _dataPtr = original._dataPtr->clone();
        }
        else
        {
            _dataPtr = 0;
        }
    }

    Wrapper& operator =(const Wrapper<T>& original)
    {
        if (this != &original)
        {
            if (_dataPtr != 0)
            {
                delete _dataPtr;
            }

            _dataPtr = (original._dataPtr != 0) ? original.clone() : 0;

        }

        return *this;
    }


    T& operator *()
    {
        return *_dataPtr;
    }

    const T& operator *() const
    {
        return *_dataPtr;
    }

    const T* const operator->() const
    {
        return _dataPtr;
    }

    T* operator->()
    {
        return _dataPtr;
    }
    
private:
    T* _dataPtr;
};