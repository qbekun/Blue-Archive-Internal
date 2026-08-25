#pragma once
#include "unitysdk.h"

namespace FlatData { class TacticRole; }
class UIFilterUnit;

#define UICHARACTERFILTERTACTICROLETABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF33F0)
#define UICHARACTERFILTERTACTICROLETABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAF3430)
#define UICHARACTERFILTERTACTICROLETABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAF35A0)
#define UICHARACTERFILTERTACTICROLETABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF35B0)
#define UICHARACTERFILTERTACTICROLETABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAF3680)
#define UICHARACTERFILTERTACTICROLETABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAF3950)
#define UICHARACTERFILTERTACTICROLETABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAF3A40)

	inline static constexpr unsigned int UICharacterFilterTacticRoleTabController_TypeDefinitionIndex = 8135;

	class UICharacterFilterTacticRoleTabController : public <>c__DisplayClass144_0
	{
	public:
		::Il2CppArray<::System::Object*>* tacticRoleIconProperties; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICROLETABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICROLETABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICROLETABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICROLETABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::FlatData::TacticRole* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::TacticRole*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICROLETABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetFilterUnit(::FlatData::TacticRole* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::FlatData::TacticRole*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICROLETABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERTACTICROLETABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

	};

