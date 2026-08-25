#pragma once
#include "unitysdk.h"

namespace FlatData { class ShopFilterType; }
class UIFilterUnit;

#define SHOPFILTERTYPEFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAECD60)
#define SHOPFILTERTYPEFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAECF90)
#define SHOPFILTERTYPEFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAECFD0)
#define SHOPFILTERTYPEFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAED190)
#define SHOPFILTERTYPEFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAED530)
#define SHOPFILTERTYPEFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAED630)
#define SHOPFILTERTYPEFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAED640)

	inline static constexpr unsigned int ShopFilterTypeFilterTabController_TypeDefinitionIndex = 8111;

	class ShopFilterTypeFilterTabController : public <>c__DisplayClass143_0
	{
	public:
		::System::Void SetFilterUnit(::FlatData::ShopFilterType* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::FlatData::ShopFilterType*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPFILTERTYPEFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPFILTERTYPEFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPFILTERTYPEFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::FlatData::ShopFilterType* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::ShopFilterType*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPFILTERTYPEFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPFILTERTYPEFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPFILTERTYPEFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPFILTERTYPEFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

	};

