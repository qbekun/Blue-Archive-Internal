#pragma once
#include "../unitysdk.h"

#define NPA_NXPCONSOLEAUTHINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBC690)

namespace NPA
{
	inline static constexpr unsigned int NXPConsoleAuthInfoResult_TypeDefinitionIndex = 25508;

	class NXPConsoleAuthInfoResult : public Il2CppObject
	{
	public:
		::System::String* envId; // 0x20
		::System::String* authCode; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEAUTHINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

