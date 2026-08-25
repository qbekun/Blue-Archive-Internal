#pragma once
#include "unitysdk.h"

class LoginState;

	inline static constexpr unsigned int LoginState_TypeDefinitionIndex = 3152;

	class LoginState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		LoginState* Ready; // 0x0
		LoginState* Progress; // 0x0
		LoginState* Finished; // 0x0
		LoginState* Failed; // 0x0

	};

