#pragma once
#include "unitysdk.h"

class UIFilterUnit;

#define UICHARACTERFILTERFAVORITETABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF0C30)
#define UICHARACTERFILTERFAVORITETABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAF0D00)
#define UICHARACTERFILTERFAVORITETABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAF0E70)
#define UICHARACTERFILTERFAVORITETABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAF0E80)
#define UICHARACTERFILTERFAVORITETABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF0E90)
#define UICHARACTERFILTERFAVORITETABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAF0ED0)
#define UICHARACTERFILTERFAVORITETABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAF0FD0)

	inline static constexpr unsigned int UICharacterFilterFavoriteTabController_TypeDefinitionIndex = 8123;

	class UICharacterFilterFavoriteTabController : public ::MX::Logic::Actions::Ob2d6eb33e4fe681a185b730aadb64bb26be4e31d56de5f2aee873fce16ad070f
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERFAVORITETABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERFAVORITETABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERFAVORITETABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERFAVORITETABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERFAVORITETABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(::System::Boolean arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::System::Boolean, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERFAVORITETABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERFAVORITETABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};

