// two number summation function here..
int add(int x, int y) {

    return (x + y);
}

//array max value return this function...
int find_max_element(int arr[10]) {
    int i, max_index = arr[0];

    for(i = 0; i < 10; i++){
        if(arr[i] > max_index){
            max_index = arr[i];
        }
    }
    return max_index;
}
