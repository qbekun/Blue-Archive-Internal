#pragma once
#include "../../unitysdk.h"

namespace NPA::Promotion { class NXPToyBannerCommunity; }

#define NPA_PROMOTION_NXPTOYBANNER_NXTOYBANNERBUTTONTYPE_VALUEOF_OFFSET UNITYSDK_OFFSET(0x9CCBD80)
#define NPA_PROMOTION_NXPTOYBANNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCBE70)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyBanner_TypeDefinitionIndex = 27367;

	class NXPToyBanner : public Il2CppObject
	{
	public:
		::System::Int32 sn; // 0x10
		::System::Int32 landType; // 0x14
		::System::Int32 imgLandType; // 0x18
		::System::String* buttonText; // 0x20
		::System::String* bannerName; // 0x28
		::System::String* landInfo; // 0x30
		::System::String* landURL; // 0x38
		::System::String* imgLandURL; // 0x40
		::System::String* imgLandInfo; // 0x48
		::System::String* imgURL; // 0x50
		::NPA::Promotion::NXPToyBannerCommunity* community; // 0x58
		::NPA::Promotion::NXPToyBannerCommunity* imgCommunity; // 0x60
		::System::Boolean useDoNotShow7Days; // 0x68

		Il2CppObject* NXToyBannerButtonType_valueOf(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYBANNER_NXTOYBANNERBUTTONTYPE_VALUEOF_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYBANNER_.CTOR_OFFSET))(nullptr);
		}

	};
}

