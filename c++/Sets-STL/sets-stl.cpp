int n;
    set<int>s;
    for(int i=0;i<n;i++)
        {
        int a;
        cin>>a;
        s.insert(a);
        }
    cin>>n;
    for(int i=0;i<n;i++)
        {
        int q,t;
        cin>>t>>q;
        switch(t)
            {
            case 1:
            {
                s.insert(q);
                break;
            }
            case 2:
            {
                s.erase(q);
                break;
            }
            case 3:
            {
                set<int>::iterator itr=s.find(q);
                if(itr==s.end())
                   cout<<"No"<<endl;
                else
                   cout<<"Yes"<<endl;
                break;
            }
            }
        }
