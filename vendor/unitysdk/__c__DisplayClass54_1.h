#pragma once
#include "unitysdk.h"

namespace FlatData { class ParcelType; }
namespace MX::Data { class ShopRefreshExcelData; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data { class ShopExcelData; }

#define <>C__DISPLAYCLASS54_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x275ADC0)
#define <>C__DISPLAYCLASS54_1__GETSHOPTOOLTIPINFO_B__3_OFFSET UNITYSDK_OFFSET(0x275ADD0)
#define <>C__DISPLAYCLASS54_1__GETSHOPTOOLTIPINFO_B__5_OFFSET UNITYSDK_OFFSET(0x275AE30)
#define <>C__DISPLAYCLASS54_1__GETSHOPTOOLTIPINFO_B__1_OFFSET UNITYSDK_OFFSET(0x275AEC0)
#define <>C__DISPLAYCLASS54_1__GETSHOPTOOLTIPINFO_B__2_OFFSET UNITYSDK_OFFSET(0x275AF40)

	inline static constexpr unsigned int <>c__DisplayClass54_1_TypeDefinitionIndex = 7270;

	class <>c__DisplayClass54_1 : public Il2CppObject
	{
	public:
		Il2CppObject* localizeEtcIdList; // 0x10
		::FlatData::ParcelType* parcelType; // 0x18
		::System::Int64 uniqueId; // 0x20
		::System::Int32 updateGroupId; // 0x28
		Il2CppObject* __9__5; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS54_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetShopTooltipInfo_b__3(::MX::Data::ShopRefreshExcelData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ShopRefreshExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS54_1__GETSHOPTOOLTIPINFO_B__3_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetShopTooltipInfo_b__5(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS54_1__GETSHOPTOOLTIPINFO_B__5_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetShopTooltipInfo_b__1(::MX::Data::ShopExcelData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ShopExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS54_1__GETSHOPTOOLTIPINFO_B__1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetShopTooltipInfo_b__2(::MX::Data::ShopExcelData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ShopExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS54_1__GETSHOPTOOLTIPINFO_B__2_OFFSET))(arg, nullptr);
		}

	};

