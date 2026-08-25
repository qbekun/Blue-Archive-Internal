#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPKAKAOUSERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3B50)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPKakaoUserInfo_TypeDefinitionIndex = 27256;

	class NXPKakaoUserInfo : public Il2CppObject
	{
	public:
		::System::Int64 npsn; // 0x10
		::System::String* guid; // 0x18
		::System::String* nickname; // 0x20
		::System::String* playerId; // 0x28
		::System::String* thumbnailImageUrl; // 0x30
		::System::String* accessToken; // 0x38
		::System::String* memberKey; // 0x40
		::System::String* profileImageUrl; // 0x48
		::System::Boolean isAllowedMessage; // 0x50
		::System::Int32 remainingInviteCount; // 0x54
		::System::Int32 remainingGroupMessageCount; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPKAKAOUSERINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

