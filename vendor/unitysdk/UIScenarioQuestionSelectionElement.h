#pragma once
#include "unitysdk.h"

class WidgetAlpha;
class UIQuestionSelectionActiveInfo;
class ScenarioQuestionSelectInfo;

#define UISCENARIOQUESTIONSELECTIONELEMENT_ONSELECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x27E40C0)
#define UISCENARIOQUESTIONSELECTIONELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E4260)
#define UISCENARIOQUESTIONSELECTIONELEMENT_GET_SCENARIOSELECTIONKEYMAPID_OFFSET UNITYSDK_OFFSET(0x27E42A0)
#define UISCENARIOQUESTIONSELECTIONELEMENT__ONSELECTINTERNAL_G__CO_REFRESHUI|5_0_OFFSET UNITYSDK_OFFSET(0x27E41F0)
#define UISCENARIOQUESTIONSELECTIONELEMENT_SETUI_OFFSET UNITYSDK_OFFSET(0x27E3610)

	inline static constexpr unsigned int UIScenarioQuestionSelectionElement_TypeDefinitionIndex = 7680;

	class UIScenarioQuestionSelectionElement : public ::UnityEngine::InputSystem::LowLevel::ITextInputReceiver
	{
	public:
		WidgetAlpha* widgetAlpha; // 0x60
		UIQuestionSelectionActiveInfo* activeInfo; // 0x68

		::System::Void OnSelectInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOQUESTIONSELECTIONELEMENT_ONSELECTINTERNAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOQUESTIONSELECTIONELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_ScenarioSelectionKeymapID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOQUESTIONSELECTIONELEMENT_GET_SCENARIOSELECTIONKEYMAPID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnSelectInternal_g__Co_RefreshUI|5_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOQUESTIONSELECTIONELEMENT__ONSELECTINTERNAL_G__CO_REFRESHUI|5_0_OFFSET))(nullptr);
		}

		::System::Void SetUI(::System::Int32 arg, ScenarioQuestionSelectInfo* arg2)
		{
			((::System::Void(*)(::System::Int32, ScenarioQuestionSelectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOQUESTIONSELECTIONELEMENT_SETUI_OFFSET))(arg, arg2, nullptr);
		}

	};

