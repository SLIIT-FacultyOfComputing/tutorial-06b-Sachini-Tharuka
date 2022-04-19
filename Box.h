class Box {
    private:
       int length;
       int width;
       int height;
    public:
       void setLength(int L);
       void setWidth(int W);
       void setHeight(int H);
       int getLength();
       int getWidth();
       int getHeight();
       int calcVolume(int l, int w, int h);
};
