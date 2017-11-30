int reverse(int x) {
    if(x==-2147483648)
        return 0;
	int flag;
	if (x<0)
		flag = -1;
	else
		flag = 1;
	int xx = x*flag;
	int ret = 0;
	while (xx != 0) {
		if (ret>214748364)
			return 0;
		if (ret == 214748364 && xx>=80)
			return 0;
		ret = ret * 10 + xx % 10;
		xx /= 10;
	}
	return ret*flag;
}