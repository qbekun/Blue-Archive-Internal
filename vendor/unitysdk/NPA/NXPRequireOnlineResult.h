#pragma once
#include "../unitysdk.h"

#define NPA_NXPREQUIREONLINERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6830)

namespace NPA
{
	inline static constexpr unsigned int NXPRequireOnlineResult_TypeDefinitionIndex = 25774;

	class NXPRequireOnlineResult : public Il2CppObject
	{
	public:
		::System::Boolean IsSignin; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUIREONLINERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

