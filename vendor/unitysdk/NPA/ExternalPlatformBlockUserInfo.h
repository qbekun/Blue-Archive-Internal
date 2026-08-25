#pragma once
#include "../unitysdk.h"

#define NPA_EXTERNALPLATFORMBLOCKUSERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6780)

namespace NPA
{
	inline static constexpr unsigned int ExternalPlatformBlockUserInfo_TypeDefinitionIndex = 25770;

	class ExternalPlatformBlockUserInfo : public Il2CppObject
	{
	public:
		::System::String* UserId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EXTERNALPLATFORMBLOCKUSERINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

