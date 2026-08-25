#pragma once
#include "unitysdk.h"

class TooltipTargetParcelTracker;
namespace FlatData { class ShopCategoryType; }
class UIShop;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define SHOPUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C0690)
#define SHOPUIOPENER_GET_SHOPCATEGORY_OFFSET UNITYSDK_OFFSET(0x26C0830)
#define SHOPUIOPENER__OPENUI_B__8_0_OFFSET UNITYSDK_OFFSET(0x26C0840)
#define SHOPUIOPENER_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x26C0870)
#define SHOPUIOPENER_SET_SHOPCATEGORY_OFFSET UNITYSDK_OFFSET(0x26C0880)
#define SHOPUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C0890)

	inline static constexpr unsigned int ShopUIOpener_TypeDefinitionIndex = 6943;

	class ShopUIOpener : public Il2CppObject
	{
	public:
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0x18
		::FlatData::ShopCategoryType* _ShopCategory_k__BackingField; // 0x20

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_ShopCategory()
		{
			return ((::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPUIOPENER_GET_SHOPCATEGORY_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_b__8_0(UIShop* arg)
		{
			((::System::Void(*)(UIShop*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPUIOPENER__OPENUI_B__8_0_OFFSET))(arg, nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPUIOPENER_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

		::System::Void set_ShopCategory(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPUIOPENER_SET_SHOPCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::ShopCategoryType* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

