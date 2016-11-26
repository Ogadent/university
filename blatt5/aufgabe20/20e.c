int aufsteigend_sortiert(int w[], int s)
{
	int li = 0, re = s + 1, m;
	while (li < re - 1) {
		m = (li + re) / 2;
		if (s <= w[m]) re = m;
		else li = m;
	}
	return re;
}
