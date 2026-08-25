#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYPLATFORMUSERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9DE0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyPlatformUserInfo_TypeDefinitionIndex = 27497;

	class NXPToyPlatformUserInfo : public Il2CppObject
	{
	public:
		::System::Int64 memberSN; // 0x10
		::System::String* userId; // 0x18
		::System::String* email; // 0x20
		::System::String* hiddenEmail; // 0x28
		::System::Int32 securityState; // 0x30
		::System::Int32 age; // 0x34

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPLATFORMUSERINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

