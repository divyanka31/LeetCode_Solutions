int maxArea(int* height, int heightSize) {
    int maxWater = 0;  //ans
    int lf = 0;
    int rf = heightSize-1;
    while(lf<rf){
        int width = rf-lf;
        int ht = fmin(height[lf], height[rf]);
        int currWater = width*ht;  //area
        maxWater = fmax(maxWater, currWater);
        height[lf] < height[rf] ? lf++ : rf--;
    }
    return maxWater;
}