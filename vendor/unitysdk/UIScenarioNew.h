#pragma once
#include "unitysdk.h"

class UIPanel;
class UIScenarioPopup;
class UIScenarioTitle;
class UIScenarioPlace;
class UIScenarioSelection;
class UIScenarioCharacters;
class UIScenarioTransitionControl;
class UIScenarioScriptLogPopulator;
class UIScenarioScreenText;
class UIScenarioEnding;
class UIScenarioTouchZone;
class UIScenarioQuestionSelection;
class UIScenarioBgControl;
class UIScenarioScript;
class UIScenarioButtons;
namespace UnityEngine { class Coroutine; }
class ScenarioScriptInfo;
class ScenarioTask;
class ScenarioQuestionSelectMessage;
class ScenarioSelectMessage;
class UITexture;
class ScenarioAdvanceMessage;

#define UISCENARIONEW_GET_TEENAGEMODE_OFFSET UNITYSDK_OFFSET(0x27E0400)
#define UISCENARIONEW_SETUIWITHOUTTRANSITION_OFFSET UNITYSDK_OFFSET(0x27E0490)
#define UISCENARIONEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27E0C80)
#define UISCENARIONEW_GET_TASK_OFFSET UNITYSDK_OFFSET(0x27E0DC0)
#define UISCENARIONEW_ONCLICKSHOWLOG_OFFSET UNITYSDK_OFFSET(0x27E0EE0)
#define UISCENARIONEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27E0F60)
#define UISCENARIONEW_HANDLETIMELINE_OFFSET UNITYSDK_OFFSET(0x27E0B00)
#define UISCENARIONEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27E1130)
#define UISCENARIONEW__HANDLESCENARIOQUESTIONSELECTMESSAGE_G__CO_SELECT|35_0_OFFSET UNITYSDK_OFFSET(0x27E1360)
#define UISCENARIONEW_HANDLESCENARIOQUESTIONSELECTMESSAGE_OFFSET UNITYSDK_OFFSET(0x27E13F0)
#define UISCENARIONEW_HANDLESCENARIOSELECTMESSAGE_OFFSET UNITYSDK_OFFSET(0x27E1490)
#define UISCENARIONEW_HANDLEAUTOADVANCESCENARIO_OFFSET UNITYSDK_OFFSET(0x27E0680)
#define UISCENARIONEW_GET_BUTTONS_OFFSET UNITYSDK_OFFSET(0x27E1640)
#define UISCENARIONEW_YIELDSELECT_OFFSET UNITYSDK_OFFSET(0x27E1530)
#define UISCENARIONEW_STARTSCENARIO_OFFSET UNITYSDK_OFFSET(0x27E1650)
#define UISCENARIONEW_HANDLELOOPCONTROL_OFFSET UNITYSDK_OFFSET(0x27E0C30)
#define UISCENARIONEW_GET_BGOVERLAP_OFFSET UNITYSDK_OFFSET(0x27E1B40)
#define UISCENARIONEW_YIELDADVANCE_OFFSET UNITYSDK_OFFSET(0x27E15C0)
#define UISCENARIONEW_HANDLESCENARIOADVANCEMESSAGE_OFFSET UNITYSDK_OFFSET(0x27E1B60)
#define UISCENARIONEW_HANDLEVIDEO_OFFSET UNITYSDK_OFFSET(0x27E0850)
#define UISCENARIONEW__HANDLEVIDEO_B__40_0_OFFSET UNITYSDK_OFFSET(0x27E1B80)
#define UISCENARIONEW_CLEAR_OFFSET UNITYSDK_OFFSET(0x27E1C80)
#define UISCENARIONEW_PREINSTANTIATECHARACTERS_OFFSET UNITYSDK_OFFSET(0x27E1CD0)
#define UISCENARIONEW_GET_SCRIPT_OFFSET UNITYSDK_OFFSET(0x27E1CF0)
#define UISCENARIONEW_CLOSELOGPANEL_OFFSET UNITYSDK_OFFSET(0x27DCE60)
#define UISCENARIONEW_START_OFFSET UNITYSDK_OFFSET(0x27E1D00)
#define UISCENARIONEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E1DA0)
#define UISCENARIONEW_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x27E1DC0)
#define UISCENARIONEW_PREINSTANTIATEBGEFFECT_OFFSET UNITYSDK_OFFSET(0x27E1EB0)
#define UISCENARIONEW_ONSKIP_OFFSET UNITYSDK_OFFSET(0x27E1EE0)
#define UISCENARIONEW_SETBGEFFECTDEPTH_OFFSET UNITYSDK_OFFSET(0x27D7230)
#define UISCENARIONEW_GETDEPTHINFO_OFFSET UNITYSDK_OFFSET(0x27D3470)

	inline static constexpr unsigned int UIScenarioNew_TypeDefinitionIndex = 7668;

	class UIScenarioNew : public Il2CppObject
	{
	public:
		UIPanel* frontPanel; // 0xD8
		UIScenarioPopup* popup; // 0xE0
		UIScenarioTitle* title; // 0xE8
		UIScenarioPlace* place; // 0xF0
		UIScenarioSelection* selection; // 0xF8
		UIScenarioCharacters* characters; // 0x100
		UIScenarioTransitionControl* transitionControl; // 0x108
		UIScenarioScriptLogPopulator* logPanel; // 0x110
		UIScenarioScreenText* screenText; // 0x118
		UIScenarioEnding* ending; // 0x120
		UIScenarioTouchZone* touchZone; // 0x128
		UIScenarioQuestionSelection* questionSelection; // 0x130
		UIScenarioBgControl* bgControl; // 0x138
		UIScenarioScript* script; // 0x140
		UIScenarioButtons* buttons; // 0x148
		::UnityEngine::Coroutine* waitAdvanceCoroutine; // 0x150
		::System::Boolean isSkipped; // 0x158
		::System::Int32 addedRenderQueue; // 0x15C

		::System::Boolean get_TeenageMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_GET_TEENAGEMODE_OFFSET))(nullptr);
		}

		::System::Void SetUIWithoutTransition(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_SETUIWITHOUTTRANSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_INITIALIZE_OFFSET))(nullptr);
		}

		ScenarioTask* get_Task()
		{
			return ((ScenarioTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void OnClickShowLog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_ONCLICKSHOWLOG_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void HandleTimeline(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_HANDLETIMELINE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _HandleScenarioQuestionSelectMessage_g__Co_Select|35_0(::System::Int64 arg, ::System::Single arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW__HANDLESCENARIOQUESTIONSELECTMESSAGE_G__CO_SELECT|35_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleScenarioQuestionSelectMessage(ScenarioQuestionSelectMessage* arg)
		{
			return ((::System::Boolean(*)(ScenarioQuestionSelectMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_HANDLESCENARIOQUESTIONSELECTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleScenarioSelectMessage(ScenarioSelectMessage* arg)
		{
			return ((::System::Boolean(*)(ScenarioSelectMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_HANDLESCENARIOSELECTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void HandleAutoAdvanceScenario(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_HANDLEAUTOADVANCESCENARIO_OFFSET))(arg, nullptr);
		}

		UIScenarioButtons* get_Buttons()
		{
			return ((UIScenarioButtons*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_GET_BUTTONS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* YieldSelect(::System::Single arg, ::System::Int64 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_YIELDSELECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartScenario(ScenarioScriptInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_STARTSCENARIO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HandleLoopControl(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_HANDLELOOPCONTROL_OFFSET))(arg, nullptr);
		}

		UITexture* get_BgOverlap()
		{
			return ((UITexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_GET_BGOVERLAP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* YieldAdvance(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_YIELDADVANCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleScenarioAdvanceMessage(ScenarioAdvanceMessage* arg)
		{
			return ((::System::Boolean(*)(ScenarioAdvanceMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_HANDLESCENARIOADVANCEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void HandleVideo(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_HANDLEVIDEO_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleVideo_b__40_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW__HANDLEVIDEO_B__40_0_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_CLEAR_OFFSET))(nullptr);
		}

		::System::Void PreInstantiateCharacters(ScenarioScriptInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_PREINSTANTIATECHARACTERS_OFFSET))(arg, arg2, nullptr);
		}

		UIScenarioScript* get_Script()
		{
			return ((UIScenarioScript*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_GET_SCRIPT_OFFSET))(nullptr);
		}

		::System::Void CloseLogPanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_CLOSELOGPANEL_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void PreInstantiateBgEffect(ScenarioScriptInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_PREINSTANTIATEBGEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_ONSKIP_OFFSET))(nullptr);
		}

		::System::Void SetBgEffectDepth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_SETBGEFFECTDEPTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDepthInfo()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIONEW_GETDEPTHINFO_OFFSET))(nullptr);
		}

	};

