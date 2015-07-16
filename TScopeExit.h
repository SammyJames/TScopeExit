#pragma once

struct TScopeExit
{
	template< typename Lambda >
	TScopeExit( Lambda&& Func )
		: ToCall( Func )
	{

	}

	~TScopeExit()
	{
		ToCall();
	}

private:
	std::function< void() > ToCall;
};
