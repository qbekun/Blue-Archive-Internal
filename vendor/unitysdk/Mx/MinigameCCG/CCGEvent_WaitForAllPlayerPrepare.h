#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_CCGEVENT_WAITFORALLPLAYERPREPARE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD860)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_WaitForAllPlayerPrepare_TypeDefinitionIndex = 20557;

	class CCGEvent_WaitForAllPlayerPrepare : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WAITFORALLPLAYERPREPARE_.CTOR_OFFSET))(nullptr);
		}

	};
}

