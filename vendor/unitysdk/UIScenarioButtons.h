#pragma once
#include "unitysdk.h"

class MXButton;
class UIScenarioScript;
namespace UnityEngine { class GameObject; }
class MXToggle;
class UIScenarioNew;
namespace UnityEngine { class ParticleSystem; }
class ScenarioTask;
class UIPopup_System;
class ScenarioScriptInfo;
class ScenarioCloseMenuPopupMessage;
class UIPopup_ScenarioSkip;

#define UISCENARIOBUTTONS_HIDEMENUCHECK_OFFSET UNITYSDK_OFFSET(0x27D4530)
#define UISCENARIOBUTTONS_ONCLICKHIDEUIS_OFFSET UNITYSDK_OFFSET(0x27D45E0)
#define UISCENARIOBUTTONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x27D4750)
#define UISCENARIOBUTTONS_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x27D4760)
#define UISCENARIOBUTTONS_SETAUTOOFF_OFFSET UNITYSDK_OFFSET(0x27D4770)
#define UISCENARIOBUTTONS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x27D47A0)
#define UISCENARIOBUTTONS_GET_SCRIPTACTIVE_OFFSET UNITYSDK_OFFSET(0x27D48E0)
#define UISCENARIOBUTTONS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27D48F0)
#define UISCENARIOBUTTONS_INIT_OFFSET UNITYSDK_OFFSET(0x27D4B50)
#define UISCENARIOBUTTONS_ONAUTOCHANGED_OFFSET UNITYSDK_OFFSET(0x27D4CD0)
#define UISCENARIOBUTTONS_GET_SCENARIOTASK_OFFSET UNITYSDK_OFFSET(0x27D4FB0)
#define UISCENARIOBUTTONS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27D5050)
#define UISCENARIOBUTTONS__INITIALIZE_G__CHECKFORCONTINUOUSSCENARIOAUTOON|28_0_OFFSET UNITYSDK_OFFSET(0x27D49C0)
#define UISCENARIOBUTTONS__ONCLICKSKIP_G__RESTORERENDERQUEUE|32_2_OFFSET UNITYSDK_OFFSET(0x27D50E0)
#define UISCENARIOBUTTONS_ONCLICKMENUBUTTON_OFFSET UNITYSDK_OFFSET(0x27D5140)
#define UISCENARIOBUTTONS_SET_SCRIPTACTIVE_OFFSET UNITYSDK_OFFSET(0x27D5210)
#define UISCENARIOBUTTONS_INITBUTTONS_OFFSET UNITYSDK_OFFSET(0x27D5220)
#define UISCENARIOBUTTONS_GET_AUTOPARTICLE_OFFSET UNITYSDK_OFFSET(0x27D4F10)
#define UISCENARIOBUTTONS_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x27D5310)
#define UISCENARIOBUTTONS_ONCLICKSETTING_OFFSET UNITYSDK_OFFSET(0x27D5320)
#define UISCENARIOBUTTONS_ONCLICKSKIP_OFFSET UNITYSDK_OFFSET(0x27D53F0)
#define UISCENARIOBUTTONS_AWAKE_OFFSET UNITYSDK_OFFSET(0x27D5580)
#define UISCENARIOBUTTONS__ONCLICKSKIP_G__SETRENDERQUEUE|32_1_OFFSET UNITYSDK_OFFSET(0x27D5EA0)
#define UISCENARIOBUTTONS_CLOSEMENUPOPUP_OFFSET UNITYSDK_OFFSET(0x27D6100)
#define UISCENARIOBUTTONS_INITBUTTONSWHENSTARTGROUP_OFFSET UNITYSDK_OFFSET(0x27D61D0)
#define UISCENARIOBUTTONS_ONCLICKSHOWUIS_OFFSET UNITYSDK_OFFSET(0x27D6260)
#define UISCENARIOBUTTONS__ONCLICKSKIP_B__32_0_OFFSET UNITYSDK_OFFSET(0x27D63B0)
#define UISCENARIOBUTTONS__ONCLICKSKIP_B__32_3_OFFSET UNITYSDK_OFFSET(0x27D6520)

	inline static constexpr unsigned int UIScenarioButtons_TypeDefinitionIndex = 7621;

	class UIScenarioButtons : public Il2CppObject
	{
	public:
		MXButton* skipButton; // 0x18
		MXButton* hideMxButton; // 0x20
		MXButton* settingButton; // 0x28
		MXButton* showMxButton; // 0x30
		UIScenarioScript* script; // 0x38
		MXButton* menuButton; // 0x40
		MXButton* menuButtonOnPopup; // 0x48
		::UnityEngine::GameObject* menuPopup; // 0x50
		MXToggle* autoToggle; // 0x58
		UIScenarioNew* scenarioUI; // 0x60
		::UnityEngine::ParticleSystem* autoParticle; // 0x68
		::System::Boolean hideMenuCheck; // 0x0
		::System::Boolean _scriptActive_k__BackingField; // 0x70
		::System::Single autoOnTime; // 0x74
		::System::Int64 _groupId_k__BackingField; // 0x78

		::System::Boolean HideMenuCheck(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_HIDEMENUCHECK_OFFSET))(str, nullptr);
		}

		::System::Void OnClickHideUIs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_ONCLICKHIDEUIS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_groupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void SetAutoOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_SETAUTOOFF_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean get_scriptActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_GET_SCRIPTACTIVE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnAutoChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_ONAUTOCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		ScenarioTask* get_ScenarioTask()
		{
			return ((ScenarioTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_GET_SCENARIOTASK_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean _Initialize_g__CheckForContinuousScenarioAutoOn|28_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS__INITIALIZE_G__CHECKFORCONTINUOUSSCENARIOAUTOON|28_0_OFFSET))(nullptr);
		}

		::System::Void _OnClickSkip_g__RestoreRenderQueue|32_2(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS__ONCLICKSKIP_G__RESTORERENDERQUEUE|32_2_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickMenuButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_ONCLICKMENUBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_scriptActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_SET_SCRIPTACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void InitButtons(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_INITBUTTONS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ParticleSystem* get_AutoParticle()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_GET_AUTOPARTICLE_OFFSET))(nullptr);
		}

		::System::Int64 get_groupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void OnClickSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_ONCLICKSETTING_OFFSET))(nullptr);
		}

		::System::Void OnClickSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_ONCLICKSKIP_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickSkip_g__SetRenderQueue|32_1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS__ONCLICKSKIP_G__SETRENDERQUEUE|32_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean CloseMenuPopup(ScenarioCloseMenuPopupMessage* arg)
		{
			return ((::System::Boolean(*)(ScenarioCloseMenuPopupMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_CLOSEMENUPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void InitButtonsWhenStartGroup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_INITBUTTONSWHENSTARTGROUP_OFFSET))(nullptr);
		}

		::System::Void OnClickShowUIs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS_ONCLICKSHOWUIS_OFFSET))(nullptr);
		}

		::System::Void _OnClickSkip_b__32_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS__ONCLICKSKIP_B__32_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickSkip_b__32_3(UIPopup_ScenarioSkip* arg)
		{
			((::System::Void(*)(UIPopup_ScenarioSkip*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBUTTONS__ONCLICKSKIP_B__32_3_OFFSET))(arg, nullptr);
		}

	};

