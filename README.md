# TScopeExit
A simple scope based, clean up template

```
static int DoWork() 
{
   TScopeExit OnExit( [&]() {
       // this will be called after we return.
    } );
	
    int i = 0;
    return ++i;
}
```
