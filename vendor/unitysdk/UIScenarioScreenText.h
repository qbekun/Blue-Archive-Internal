#pragma once
#include "unitysdk.h"

class TweenAlpha;
class UIWidget;
class ScenarioScriptInfo;

#define UISCENARIOSCREENTEXT_FADE_OFFSET UNITYSDK_OFFSET(0x27E4A10)
#define UISCENARIOSCREENTEXT_ONSCREENLABELCOMPLETED_OFFSET UNITYSDK_OFFSET(0x27E4BC0)
#define UISCENARIOSCREENTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0x27E4C80)
#define UISCENARIOSCREENTEXT_GET_WIDGET_OFFSET UNITYSDK_OFFSET(0x27E4E60)
#define UISCENARIOSCREENTEXT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27E4EF0)
#define UISCENARIOSCREENTEXT_ONFADEFINISH_OFFSET UNITYSDK_OFFSET(0x27E5110)
#define UISCENARIOSCREENTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E51C0)
#define UISCENARIOSCREENTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x27E51D0)
#define UISCENARIOSCREENTEXT_HIDEALL_OFFSET UNITYSDK_OFFSET(0x27E4F00)
#define UISCENARIOSCREENTEXT_GET_TWEENALPHA_OFFSET UNITYSDK_OFFSET(0x27E4B30)

	inline static constexpr unsigned int UIScenarioScreenText_TypeDefinitionIndex = 7683;

	class UIScenarioScreenText : public Il2CppObject
	{
	public:
		Il2CppObject* labels; // 0x18
		TweenAlpha* tweenAlpha; // 0x20
		UIWidget* widget; // 0x28
		::System::Int32 completedCount; // 0x30

		::System::Void Fade()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENTEXT_FADE_OFFSET))(nullptr);
		}

		::System::Void OnScreenLabelCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENTEXT_ONSCREENLABELCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENTEXT_AWAKE_OFFSET))(nullptr);
		}

		UIWidget* get_Widget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENTEXT_GET_WIDGET_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENTEXT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnFadeFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENTEXT_ONFADEFINISH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENTEXT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void HideAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENTEXT_HIDEALL_OFFSET))(nullptr);
		}

		TweenAlpha* get_TweenAlpha()
		{
			return ((TweenAlpha*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENTEXT_GET_TWEENALPHA_OFFSET))(nullptr);
		}

	};

