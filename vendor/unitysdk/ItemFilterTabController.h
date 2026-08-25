#pragma once
#include "unitysdk.h"

class ItemCategoryWrapper;
class UIFilterUnit;

#define ITEMFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAE9C50)
#define ITEMFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAE9D50)
#define ITEMFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAE9F50)
#define ITEMFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAE9F90)
#define ITEMFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAEA150)
#define ITEMFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAEA160)
#define ITEMFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAEA170)

	inline static constexpr unsigned int ItemFilterTabController_TypeDefinitionIndex = 8104;

	class ItemFilterTabController : public ::MX::Logic::Actions::WanderAction
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(ItemCategoryWrapper* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(ItemCategoryWrapper*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ItemCategoryWrapper* arg2)
		{
			((::System::Void(*)(::System::Boolean, ItemCategoryWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};

