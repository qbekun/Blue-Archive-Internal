#pragma once
#include "unitysdk.h"

namespace FlatData { class ProductCategory; }
class UIPopup_System;
namespace Cysharp::Threading::Tasks { class UniTaskVoid; }

#define <>C__DISPLAYCLASS200_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA700)
#define <>C__DISPLAYCLASS200_0__SHOWNOTENOUGHSHOPCASHRESOURCEPOPUP_B__0_OFFSET UNITYSDK_OFFSET(0x1FFA710)
#define <>C__DISPLAYCLASS200_0__SHOWNOTENOUGHSHOPCASHRESOURCEPOPUP_B__1_OFFSET UNITYSDK_OFFSET(0x1FFA830)

	inline static constexpr unsigned int <>c__DisplayClass200_0_TypeDefinitionIndex = 3096;

	class <>c__DisplayClass200_0 : public Il2CppObject
	{
	public:
		::System::String* messageKey; // 0x10
		Il2CppObject* beforeOpenShopCashTask; // 0x18
		::FlatData::ProductCategory* settingCategoryType; // 0x20
		Il2CppObject* __9__1; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS200_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowNotEnoughShopCashResourcePopup_b__0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS200_0__SHOWNOTENOUGHSHOPCASHRESOURCEPOPUP_B__0_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* _ShowNotEnoughShopCashResourcePopup_b__1()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS200_0__SHOWNOTENOUGHSHOPCASHRESOURCEPOPUP_B__1_OFFSET))(nullptr);
		}

	};

