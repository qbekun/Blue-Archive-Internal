#pragma once
#include "../../unitysdk.h"

#define NPA_COMMUNITY_NXTOYCOMMUNITYBANNER_NXTOYCOMMUNITYBANNERLINKTYPE_VALUEORNULLOF_OFFSET UNITYSDK_OFFSET(0x9CD8AE0)
#define NPA_COMMUNITY_NXTOYCOMMUNITYBANNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD8F10)

namespace NPA::Community
{
	inline static constexpr unsigned int NXToyCommunityBanner_TypeDefinitionIndex = 27467;

	class NXToyCommunityBanner : public Il2CppObject
	{
	public:
		::System::Int64 bannerId; // 0x10
		::System::String* title; // 0x18
		::System::String* horizontalImageUrl; // 0x20
		::System::String* verticalImageUrl; // 0x28
		::System::String* linkType; // 0x30
		::System::String* linkValue; // 0x38
		::System::String* exposureType; // 0x40
		::System::String* startDate; // 0x48
		::System::String* endDate; // 0x50

		Il2CppObject* NXToyCommunityBannerLinkType_valueOrNullOf(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_COMMUNITY_NXTOYCOMMUNITYBANNER_NXTOYCOMMUNITYBANNERLINKTYPE_VALUEORNULLOF_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_COMMUNITY_NXTOYCOMMUNITYBANNER_.CTOR_OFFSET))(nullptr);
		}

	};
}

