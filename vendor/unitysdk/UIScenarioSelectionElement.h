#pragma once
#include "unitysdk.h"

#define UISCENARIOSELECTIONELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27E8B60)
#define UISCENARIOSELECTIONELEMENT_SETUI_OFFSET UNITYSDK_OFFSET(0x27E88D0)
#define UISCENARIOSELECTIONELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E8CE0)
#define UISCENARIOSELECTIONELEMENT_ONSELECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x27E8D20)
#define UISCENARIOSELECTIONELEMENT_GET_SCENARIOSELECTIONKEYMAPID_OFFSET UNITYSDK_OFFSET(0x27E8DE0)

	inline static constexpr unsigned int UIScenarioSelectionElement_TypeDefinitionIndex = 7695;

	class UIScenarioSelectionElement : public Button
	{
	public:
		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONELEMENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetUI(::System::Int64 arg, ::System::Int32 arg2, ::System::String* str, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONELEMENT_SETUI_OFFSET))(arg, arg2, str, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnSelectInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONELEMENT_ONSELECTINTERNAL_OFFSET))(nullptr);
		}

		::System::String* get_ScenarioSelectionKeymapID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONELEMENT_GET_SCENARIOSELECTIONKEYMAPID_OFFSET))(nullptr);
		}

	};

