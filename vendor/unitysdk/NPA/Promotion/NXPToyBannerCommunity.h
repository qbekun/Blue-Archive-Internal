#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPTOYBANNERCOMMUNITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCBE80)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyBannerCommunity_TypeDefinitionIndex = 27368;

	class NXPToyBannerCommunity : public Il2CppObject
	{
	public:
		::System::Int64 threadId; // 0x10
		::System::Int64 communityId; // 0x18
		Il2CppObject* country; // 0x20
		::System::String* alias; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYBANNERCOMMUNITY_.CTOR_OFFSET))(nullptr);
		}

	};
}

