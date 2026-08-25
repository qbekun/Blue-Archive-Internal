#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYPLATFORMBLOCKUSERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9DB0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyPlatformBlockUserInfo_TypeDefinitionIndex = 27494;

	class NXPToyPlatformBlockUserInfo : public Il2CppObject
	{
	public:
		::System::String* platformUserId; // 0x10
		::System::String* platformType; // 0x18
		::System::String* guid; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPLATFORMBLOCKUSERINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

