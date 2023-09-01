int dataTypes(string type) {
    int s;
        if(type=="Integer")
        { s=sizeof(int);}
        if(type=="Character")
        {s=sizeof(char);}
        if(type=="Float")
        { s=sizeof(float);}
        if(type=="Double")
        { s=sizeof(double);}
        if(type=="Long")
        {s=sizeof(long);}
    return s;
}
