#pragma once
#include "unitysdk.h"

class CharacterObscurationFilterType;
class UIFilterUnit;

#define UICHARACTERFILTEROBSCURATIONTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAF1FB0)
#define UICHARACTERFILTEROBSCURATIONTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAF2280)
#define UICHARACTERFILTEROBSCURATIONTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF2340)
#define UICHARACTERFILTEROBSCURATIONTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAF2380)
#define UICHARACTERFILTEROBSCURATIONTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAF2390)
#define UICHARACTERFILTEROBSCURATIONTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF2500)
#define UICHARACTERFILTEROBSCURATIONTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAF25D0)

	inline static constexpr unsigned int UICharacterFilterObscurationTabController_TypeDefinitionIndex = 8131;

	class UICharacterFilterObscurationTabController : public ::MX::Logic::BattleEntities::ActionChangedEventArgs
	{
	public:
		::System::Void OnTabChanged(::System::Boolean arg, CharacterObscurationFilterType* arg2)
		{
			((::System::Void(*)(::System::Boolean, CharacterObscurationFilterType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTEROBSCURATIONTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetFilterUnit(CharacterObscurationFilterType* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(CharacterObscurationFilterType*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTEROBSCURATIONTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTEROBSCURATIONTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTEROBSCURATIONTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTEROBSCURATIONTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTEROBSCURATIONTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTEROBSCURATIONTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

	};

