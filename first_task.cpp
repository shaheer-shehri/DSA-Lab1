# include <iostream>
# include <vector>
using namespace std;

vector<int> indices_returner (int *arr, int arr_size,int key){
    vector<int> ans = {};
    for (int i= 0; i < arr_size; i++){
        if (arr [i] == key){
            ans.push_back(i);
        }
    }
    return ans;
}

int main(){
    int arr1 [] = {1,2,3,4,2,2,5,7,8,7,6,2};
    int arr2 [] = {};
    int arr3 [] = {1,3,4,5};

    // i will find the indices of key 2 in all three arrays and print the indices as output
    // this case will give us multiple indices in answer
    vector<int> ans1 = indices_returner(arr1,12,2);
    // this case is for empty array passed
    vector<int> ans2 = indices_returner(arr2,0,2);
    // this case is for key not found
    vector<int> ans3 = indices_returner(arr3,4,2);

    cout << "Case no 1"<< endl;
    for (int num : ans1 ){
        cout << num << " ";
    }
    cout << endl << "Case no 2" << endl;
    for (int num : ans2){
        cout << num << " ";
    }
    cout << "This is empty array" << endl;
    cout << endl << "Case no 3" << endl;
    for (int num: ans3){
        cout << num << " ";
    }
    cout << endl;
    cout << "The key was missing in the array" << endl;
}
