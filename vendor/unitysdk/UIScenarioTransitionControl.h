#pragma once
#include "unitysdk.h"

class UIScenarioNew;
class TweenAlpha;
class ScenarioScriptInfo;
namespace MX::Data::Excel { class ScenarioTransitionExcel; }
class Transition;

#define UISCENARIOTRANSITIONCONTROL_YIELDADVANCE_OFFSET UNITYSDK_OFFSET(0x27EA490)
#define UISCENARIOTRANSITIONCONTROL_FADE_OFFSET UNITYSDK_OFFSET(0x27EA530)
#define UISCENARIOTRANSITIONCONTROL_SHOWTRANSITIONANDADVANCE_OFFSET UNITYSDK_OFFSET(0x27EA710)
#define UISCENARIOTRANSITIONCONTROL_ONOVERLAPFINISHED_OFFSET UNITYSDK_OFFSET(0x27EAA20)
#define UISCENARIOTRANSITIONCONTROL_GET_CURRENTTRANSITIONDURATION_OFFSET UNITYSDK_OFFSET(0x27EACE0)
#define UISCENARIOTRANSITIONCONTROL_ONFADEFINISHED_OFFSET UNITYSDK_OFFSET(0x27EAD30)
#define UISCENARIOTRANSITIONCONTROL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27EADA0)
#define UISCENARIOTRANSITIONCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x27EB050)
#define UISCENARIOTRANSITIONCONTROL_GET_CURRENTTRANSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x27EB0D0)
#define UISCENARIOTRANSITIONCONTROL_INIT_OFFSET UNITYSDK_OFFSET(0x27E2200)
#define UISCENARIOTRANSITIONCONTROL_ADVANCETRANSITION_OFFSET UNITYSDK_OFFSET(0x27EAA30)
#define UISCENARIOTRANSITIONCONTROL_PREFABTRANSITION_OFFSET UNITYSDK_OFFSET(0x27EB480)
#define UISCENARIOTRANSITIONCONTROL_OVERLAPTRANSITION_OFFSET UNITYSDK_OFFSET(0x27EB600)
#define UISCENARIOTRANSITIONCONTROL_HANDLETRANSITION_OFFSET UNITYSDK_OFFSET(0x27EB140)

	inline static constexpr unsigned int UIScenarioTransitionControl_TypeDefinitionIndex = 7702;

	class UIScenarioTransitionControl : public Il2CppObject
	{
	public:
		UIScenarioNew* scenarioUI; // 0x18
		TweenAlpha* fadeTween; // 0x20
		TweenAlpha* fadeTweenWhite; // 0x28
		Il2CppObject* transitionsTable; // 0x30
		ScenarioScriptInfo* currentScenario; // 0x38
		::MX::Data::Excel::ScenarioTransitionExcel* currentTransitionExcel; // 0x40
		TweenAlpha* overlapTween; // 0x50
		Transition* currentTransition; // 0x58

		::System::Collections::IEnumerator* YieldAdvance(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_YIELDADVANCE_OFFSET))(arg, nullptr);
		}

		::System::Void Fade(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_FADE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ShowTransitionAndAdvance(::System::Single arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Single, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_SHOWTRANSITIONANDADVANCE_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnOverlapFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_ONOVERLAPFINISHED_OFFSET))(nullptr);
		}

		::System::Single get_currentTransitionDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_GET_CURRENTTRANSITIONDURATION_OFFSET))(nullptr);
		}

		::System::Void OnFadeFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_ONFADEFINISHED_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_currentTransitionString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_GET_CURRENTTRANSITIONSTRING_OFFSET))(nullptr);
		}

		::System::Void Init(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void AdvanceTransition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_ADVANCETRANSITION_OFFSET))(nullptr);
		}

		::System::Void PrefabTransition(::System::Single arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Single, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_PREFABTRANSITION_OFFSET))(arg, str, nullptr);
		}

		::System::Void OverlapTransition(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_OVERLAPTRANSITION_OFFSET))(arg, nullptr);
		}

		::System::Void HandleTransition(Transition* arg)
		{
			((::System::Void(*)(Transition*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTRANSITIONCONTROL_HANDLETRANSITION_OFFSET))(arg, nullptr);
		}

	};

