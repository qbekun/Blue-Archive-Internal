#pragma once
#include "unitysdk.h"

namespace FlatData { class TacticRange; }
class UIFilterUnit;

#define UICHARACTERFILTERTACTICRANGETABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAF2CD0)
#define UICHARACTERFILTERTACTICRANGETABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF2CE0)
#define UICHARACTERFILTERTACTICRANGETABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAF2D20)
#define UICHARACTERFILTERTACTICRANGETABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF2FF0)
#define UICHARACTERFILTERTACTICRANGETABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAF3170)
#define UICHARACTERFILTERTACTICRANGETABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAF3180)
#define UICHARACTERFILTERTACTICRANGETABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAF32F0)

	inline static constexpr unsigned int UICharacterFilterTacticRangeTabController_TypeDefinitionIndex = 8133;

	class UICharacterFilterTacticRangeTabController : public <>c
	{
	public:
		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICRANGETABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICRANGETABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::FlatData::TacticRange* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::TacticRange*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICRANGETABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICRANGETABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICRANGETABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICRANGETABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(::FlatData::TacticRange* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::FlatData::TacticRange*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICRANGETABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

	};

