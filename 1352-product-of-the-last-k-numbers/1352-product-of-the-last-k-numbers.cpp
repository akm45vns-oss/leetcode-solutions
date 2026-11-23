class ProductOfNumbers {
public:
    vector<int>a;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        a.push_back(num);
    }
    
    int getProduct(int k) {
        int n=a.size()-1; 
        int p=1;
        for(int i=n;i>n-k;i--){
            p*=a[i];
        }     
        return p;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */