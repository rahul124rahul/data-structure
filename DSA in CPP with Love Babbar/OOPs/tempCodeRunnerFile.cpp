
		char c = s[0];
		for(int i=1;i<s.length();i++){
			if(s[i]==c)ans++;
			else {
				ans+=2;
				c=s[i];
			}
		}
		cout<<ans<<endl;