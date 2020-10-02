	int a, b;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; l[b] != '\0'; b++)
		{
			if (s[a] == l[b])
				s[a] = n[b];
				break;
		}
	}
	return (s);
}
