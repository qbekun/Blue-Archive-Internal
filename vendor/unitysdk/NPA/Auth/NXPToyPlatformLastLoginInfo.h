#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYPLATFORMLASTLOGININFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9DD0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyPlatformLastLoginInfo_TypeDefinitionIndex = 27496;

	class NXPToyPlatformLastLoginInfo : public Il2CppObject
	{
	public:
		::System::Boolean isValid; // 0x10
		::System::String* guid; // 0x18
		::System::String* platformType; // 0x20
		::System::String* platformUserId; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPLATFORMLASTLOGININFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

