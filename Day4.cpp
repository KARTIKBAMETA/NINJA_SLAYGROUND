vector<int> printNos(int x) {
  if (x == 1) {
    return {1};
    }
else{
    std::vector<int> arr=printNos(x-1);
    arr.push_back(x);
    return arr;
}
    // Write Your Code Here
}