#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPTOYBANNERPROMOTION_NXTOYPROMOTIONBANNERBUTTONTYPE_VALUEOF_OFFSET UNITYSDK_OFFSET(0x9CCBE90)
#define NPA_PROMOTION_NXPTOYBANNERPROMOTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCBF80)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyBannerPromotion_TypeDefinitionIndex = 27370;

	class NXPToyBannerPromotion : public Il2CppObject
	{
	public:
		::System::Int32 bannerId; // 0x10
		::System::String* bannerName; // 0x18
		::System::String* segmentName; // 0x20
		::System::Int32 segmentId; // 0x28
		::System::Int32 width; // 0x2C
		::System::Int32 height; // 0x30
		::System::Single opacity; // 0x34
		::System::Int32 touchEvent; // 0x38
		::System::Int32 rotation; // 0x3C
		::System::Int32 frequency; // 0x40
		::System::Int32 maximum; // 0x44
		::System::Int32 left; // 0x48
		::System::Int32 top; // 0x4C
		::System::Int32 right; // 0x50
		::System::Int32 bottom; // 0x54
		Il2CppObject* imgList; // 0x58
		Il2CppObject* buttonList; // 0x60
		Il2CppObject* optionList; // 0x68

		Il2CppObject* NXToyPromotionBannerButtonType_valueOf(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYBANNERPROMOTION_NXTOYPROMOTIONBANNERBUTTONTYPE_VALUEOF_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYBANNERPROMOTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

