#pragma once
#include "unitysdk.h"

class UIFilterUnit;

#define SHOPRESOURCEFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAED650)
#define SHOPRESOURCEFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAEDA20)
#define SHOPRESOURCEFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAEDA30)
#define SHOPRESOURCEFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAEDD70)
#define SHOPRESOURCEFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAEDF30)
#define SHOPRESOURCEFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAEDF40)
#define SHOPRESOURCEFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAEE230)

	inline static constexpr unsigned int ShopResourceFilterTabController_TypeDefinitionIndex = 8112;

	class ShopResourceFilterTabController : public ::MX::Logic::Actions::WeaponMountSkillAction
	{
	public:
		::System::Void SetFilterUnit(::System::Int32 arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::System::Int32, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPRESOURCEFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPRESOURCEFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SHOPRESOURCEFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPRESOURCEFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPRESOURCEFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPRESOURCEFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPRESOURCEFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

