
bool allTrue(const string a[], int n)
{
    if (n <= 0)
    {
        return true;
    }
    
    if (n == 1)
    {
        return somePredicate(a[0]);
    }
    else
    {
        return somePredicate(a[0]) && allTrue(a + 1,n - 1);
    }
}



int countTrue(const string a[], int n)
{
    int i = 0;
    int x = 0;
    if (n > 0 && !somePredicate(a[n - 1]))
    {
        i++;
    }
    n--;
    if (n > 0)
    {
        x = countTrue(a, n);
    }
    return i + x;
}




int firstTrue(const string a[], int n)
{
    if (n <= 0)
    {
        return -1;
    }
    
    if (!somePredicate(a[0]))
    {
        return -1 + firstTrue(a+1,n-1);
    }
    return 1 + firstTrue(a+1,n-1);
}


int firstTrue(const string a[], int n)
{
    if (n <= 0)
    {
        return -1;
    }
    
    if (somePredicate(a[0]))
    {
        return 0;
    }
    
    int index = 1 + firstTrue(a + 1 , n - 1);
    if (index <= 0)
    {
        return -1;
    }
    return index;
}


int positionOfMax(const string a[], int n)
{
    if(n <=0)
    {
        return -1;
    }
    
    for (int i = 0; i <n; i++)
    {
        if(a[0] < a[i])
        {
            return 0;
        }
    }
    int reuslt = 1 + positionOfMax(a+1,n-1)
    if (result <= 0)
    {
        return -1;
    }
    return result;
}

// Return the subscript of the first string in the array that is >= all
// strings in the array (i.e., return the smallest subscript m such
// that a[m] >= a[k] for all k from 0 to n-1).  If the function is told
// that no strings are to be considered to be in the array, return -1.
int positionOfMax(const string a[], int n)
{
    if (n <= 0)
    {
        return -1;
    }
    if (n == 1)
    {
        return 0;
    }
    int max = positionOfMax(a, n - 1);
    if (a[n-1] >= a[max])
    {
        return n - 1;
    }
    else
    {
        return max;
    }
}

// If all n2 elements of a2 appear in the n1 element array a1, in
// the same order (though not necessarily consecutively), then
// return true; otherwise (i.e., if the array a1 does not include
// a2 as a not-necessarily-contiguous subsequence), return false.
// (Of course, if a2 is empty (i.e., n2 is 0), return true.)
// For example, if a1 is the 7 element array
//    "john" "sonia" "elena" "ketanji" "sonia" "elena" "samuel"
// then the function should return true if a2 is
//    "sonia" "ketanji" "samuel"
// or
//    "sonia" "elena" "elena"
// and it should return false if a2 is
//    "sonia" "samuel" "ketanji"
// or
//    "john" "ketanji" "ketanji"

bool contains(const string a1[], int n1, const string a2[], int n2)
{
    if (n2 <= 0)
    {
        return true;
    }
    if (n1 <= 0)
    {
        return false;
    }
    if (a1[n1 - 1] == a2[n2 - 1])
    {
        n2--;
    }
    n1--;
    return contains(a1, n1, a2, n2);
}


bool contains(const string a1[], int n1, const string a2[], int n2)
{
    if (n2 <= 0)
    {
        return true;
    }
    if (n1 <= 0)
    {
        return false;
    }
    if (a1[0] == a2[0])
    {
        return contains(a1+1,n1-1,a2+1,n2-1)
    }
    return contains(a1+1, n1-1, a2, n2);
}

