

template<typename T>
class vector
{
    private:
    T*arr;
    int cs;
    int ms;

    public:
        vector(int maxsize=1)
        {
            cs=0;
            ms=maxsize;
            arr=new T[ms];
        }

        void push_back(const T d)
        {
            if(cs==ms)
            {
                T *oldarr = arr;
                ms=2*ms;
                arr=new T[ms];

                for (int i=0;i<cs;i++)
                {
                    arr[i]=oldarr[i];
                }

                delete [] oldarr;
            }
            arr[cs]= d;
            cs++;
        }

        void pop_back()
        {
            if(cs>=0){
                cs--;
            }
        }

        T front()const
        {
            return arr[0];
        }
        
        T back()const
        {
            return arr[cs-1];
        }

        T at(int i) const
        {
            return arr[i];
        }

        int size() const
        {
            return cs;
        }

        int capacity()const
        {
            return ms;
        }

        T operator[](const int i)const
        {
            return arr[i];
        }



};