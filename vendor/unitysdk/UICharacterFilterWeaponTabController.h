#pragma once
#include "unitysdk.h"

namespace FlatData { class WeaponType; }
class UIFilterUnit;

#define UICHARACTERFILTERWEAPONTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAF3A50)
#define UICHARACTERFILTERWEAPONTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAF3B00)
#define UICHARACTERFILTERWEAPONTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAF3B10)
#define UICHARACTERFILTERWEAPONTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF3C80)
#define UICHARACTERFILTERWEAPONTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAF3CC0)
#define UICHARACTERFILTERWEAPONTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAF3F90)
#define UICHARACTERFILTERWEAPONTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF3FA0)

	inline static constexpr unsigned int UICharacterFilterWeaponTabController_TypeDefinitionIndex = 8136;

	class UICharacterFilterWeaponTabController : public <>c__DisplayClass145_0
	{
	public:
		::System::Void SetFilterUnit(::FlatData::WeaponType* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::FlatData::WeaponType*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERWEAPONTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERWEAPONTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERWEAPONTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERWEAPONTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::FlatData::WeaponType* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::WeaponType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERWEAPONTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERWEAPONTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERWEAPONTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

	};

