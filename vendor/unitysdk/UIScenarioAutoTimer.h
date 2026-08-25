#pragma once
#include "unitysdk.h"

class DisplayContentType;
class UIWidget;
class UISprite;
class MXButton;
namespace UnityEngine { class Coroutine; }
class UIScenarioAutoToggleChangedMessage;

#define UISCENARIOAUTOTIMER_AWAKE_OFFSET UNITYSDK_OFFSET(0x27CEC00)
#define UISCENARIOAUTOTIMER__SETUI_G__USEREWARDPOPUPTIMER|12_1_OFFSET UNITYSDK_OFFSET(0x27CECD0)
#define UISCENARIOAUTOTIMER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27CEE50)
#define UISCENARIOAUTOTIMER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27CF050)
#define UISCENARIOAUTOTIMER_CO_UPDATETIMER_OFFSET UNITYSDK_OFFSET(0x27CF060)
#define UISCENARIOAUTOTIMER_SETUI_OFFSET UNITYSDK_OFFSET(0x27CEE60)
#define UISCENARIOAUTOTIMER__SETUI_G__DISABLETIMER|12_0_OFFSET UNITYSDK_OFFSET(0x27CF100)
#define UISCENARIOAUTOTIMER_STARTTIMER_OFFSET UNITYSDK_OFFSET(0x27CF150)
#define UISCENARIOAUTOTIMER_SETSELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x27CF210)
#define UISCENARIOAUTOTIMER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x27CF250)
#define UISCENARIOAUTOTIMER_ONAUTOTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x27CF390)

	inline static constexpr unsigned int UIScenarioAutoTimer_TypeDefinitionIndex = 7609;

	class UIScenarioAutoTimer : public Il2CppObject
	{
	public:
		DisplayContentType* DisplayContent; // 0x18
		UIWidget* Widget; // 0x20
		UISprite* Timer; // 0x28
		MXButton* ContentButton; // 0x30
		::UnityEngine::Coroutine* timerCoroutine; // 0x38
		::System::Int32 totalSelectionCount; // 0x40

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOAUTOTIMER_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean _SetUI_g__UseRewardPopupTimer|12_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOAUTOTIMER__SETUI_G__USEREWARDPOPUPTIMER|12_1_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOAUTOTIMER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOAUTOTIMER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Co_UpdateTimer(::System::Single arg)
		{
			return ((Il2CppObject*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOAUTOTIMER_CO_UPDATETIMER_OFFSET))(arg, nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOAUTOTIMER_SETUI_OFFSET))(nullptr);
		}

		::System::Void _SetUI_g__DisableTimer|12_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOAUTOTIMER__SETUI_G__DISABLETIMER|12_0_OFFSET))(nullptr);
		}

		::System::Void StartTimer(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOAUTOTIMER_STARTTIMER_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectionState(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOAUTOTIMER_SETSELECTIONSTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOAUTOTIMER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean OnAutoToggleChanged(UIScenarioAutoToggleChangedMessage* arg)
		{
			return ((::System::Boolean(*)(UIScenarioAutoToggleChangedMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOAUTOTIMER_ONAUTOTOGGLECHANGED_OFFSET))(arg, nullptr);
		}

	};

