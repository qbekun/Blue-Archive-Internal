#pragma once
#include "../../unitysdk.h"

namespace NPA::Community { class NXToyCommunityHome; }
namespace NPA::Community { class NXPToyCommunityLastAdminThread; }

#define NPA_COMMUNITY_NXPTOYGETCOMMUNITYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9860)

namespace NPA::Community
{
	inline static constexpr unsigned int NXPToyGetCommunityResult_TypeDefinitionIndex = 27478;

	class NXPToyGetCommunityResult : public Il2CppObject
	{
	public:
		::System::Int64 communityId; // 0x38
		::System::String* userTitle; // 0x40
		::System::String* release; // 0x48
		::System::String* languageCode; // 0x50
		Il2CppObject* countryCodes; // 0x58
		::System::String* alias; // 0x60
		::NPA::Community::NXToyCommunityHome* communityHome; // 0x68
		::NPA::Community::NXPToyCommunityLastAdminThread* lastAdminThread; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_COMMUNITY_NXPTOYGETCOMMUNITYRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

