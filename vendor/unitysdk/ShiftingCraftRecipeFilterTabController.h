#pragma once
#include "unitysdk.h"

class ShiftingCraftFilterOption;
class UIFilterUnit;

#define SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAEC580)
#define SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAEC740)
#define SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAEC8C0)
#define SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAEC9C0)
#define SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAECA00)
#define SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAECA10)
#define SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAECD50)

	inline static constexpr unsigned int ShiftingCraftRecipeFilterTabController_TypeDefinitionIndex = 8110;

	class ShiftingCraftRecipeFilterTabController : public <>c__DisplayClass115_0
	{
	public:
		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(ShiftingCraftFilterOption* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(ShiftingCraftFilterOption*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ShiftingCraftFilterOption* arg2)
		{
			((::System::Void(*)(::System::Boolean, ShiftingCraftFilterOption*, ::PVOID))((::PBYTE)hIl2Cpp + SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHIFTINGCRAFTRECIPEFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

	};

