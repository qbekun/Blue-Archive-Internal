#pragma once
#include "../../unitysdk.h"

#define NPA_COMMUNITY_NXTOYCOMMUNITYUSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD97D0)

namespace NPA::Community
{
	inline static constexpr unsigned int NXToyCommunityUser_TypeDefinitionIndex = 27475;

	class NXToyCommunityUser : public Il2CppObject
	{
	public:
		::System::Int64 userId; // 0x10
		::System::Int64 npsn; // 0x18
		::System::String* nickname; // 0x20
		::System::String* profileImageUrl; // 0x28
		::System::Int64 communityId; // 0x30
		::System::Boolean isAdmin; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_COMMUNITY_NXTOYCOMMUNITYUSER_.CTOR_OFFSET))(nullptr);
		}

	};
}

