#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYPLATFORMFRIENDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9DC0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyPlatformFriendInfo_TypeDefinitionIndex = 27495;

	class NXPToyPlatformFriendInfo : public Il2CppObject
	{
	public:
		::System::String* platformUserId; // 0x10
		::System::String* platformType; // 0x18
		::System::String* displayName; // 0x20
		::System::Boolean isOnline; // 0x28
		::System::String* guid; // 0x30
		::System::String* playingTitleId; // 0x38
		::System::Boolean isPlayingGame; // 0x40
		::System::Boolean isPlayingThisGame; // 0x41
		::System::String* profileImageUrl; // 0x48
		::System::String* presence; // 0x50
		::System::String* realName; // 0x58
		::System::String* comment; // 0x60
		::System::DateTime* relationshipSince; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPLATFORMFRIENDINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

