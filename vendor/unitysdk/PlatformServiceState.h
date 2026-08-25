#pragma once
#include "unitysdk.h"

class PlatformServiceState;

	inline static constexpr unsigned int PlatformServiceState_TypeDefinitionIndex = 3859;

	class PlatformServiceState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		PlatformServiceState* Default; // 0x0
		PlatformServiceState* WaitInitResponded; // 0x0
		PlatformServiceState* Ready; // 0x0
		PlatformServiceState* InitFailed; // 0x0

	};

