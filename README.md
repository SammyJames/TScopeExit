# TScopeExit
A simple scope based, clean up template

```
  TScopeExit OnExit( [&]() {
	  lua_settop( **this, 0 );
	} );
```
