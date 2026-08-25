#pragma once
#include "unitysdk.h"

class UIScenarioMode_ModeSelectSeriesController;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define UISCENARIOMODE_MODESELECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x280B370)
#define UISCENARIOMODE_MODESELECT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x280B780)
#define UISCENARIOMODE_MODESELECT_SET_SERIESSHORTCUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x280B9D0)
#define UISCENARIOMODE_MODESELECT_WAITOPENCONDITIONBUTTONANI_OFFSET UNITYSDK_OFFSET(0x280B9F0)
#define UISCENARIOMODE_MODESELECT_GETOPENANINAME_OFFSET UNITYSDK_OFFSET(0x280BB70)
#define UISCENARIOMODE_MODESELECT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x280BCB0)
#define UISCENARIOMODE_MODESELECT_PLAYOPENANI_OFFSET UNITYSDK_OFFSET(0x280BD40)
#define UISCENARIOMODE_MODESELECT_PLAYSERIES2UNLOCK_OFFSET UNITYSDK_OFFSET(0x280BEC0)
#define UISCENARIOMODE_MODESELECT_INITBUTTONONCLICK_OFFSET UNITYSDK_OFFSET(0x280B3E0)
#define UISCENARIOMODE_MODESELECT_GET_SERIESSHORTCUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x280C0D0)
#define UISCENARIOMODE_MODESELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x280C0E0)
#define UISCENARIOMODE_MODESELECT___N__0_OFFSET UNITYSDK_OFFSET(0x280C1A0)
#define UISCENARIOMODE_MODESELECT_PLAYANISEQUENCE_OFFSET UNITYSDK_OFFSET(0x280B850)

	inline static constexpr unsigned int UIScenarioMode_ModeSelect_TypeDefinitionIndex = 7787;

	class UIScenarioMode_ModeSelect : public Il2CppObject
	{
	public:
		UIScenarioMode_ModeSelectSeriesController* _seriesController; // 0xD8
		Il2CppObject* modeButtons; // 0xE0
		::Il2CppArray<::System::Object*>* openConditionButtons; // 0xE8
		::UnityEngine::Animation* _uiOpenAni; // 0xF0
		::UnityEngine::GameObject* _seriesUnlockNotice; // 0xF8
		::System::String* _aniKey_Series1Opened; // 0x100
		::System::String* _aniKey_Series2Opened_Series1Forward; // 0x108
		::System::String* _aniKey_Series2Opened_Series2Forward; // 0x110
		::System::String* _aniKey_UnLockSeries2; // 0x118
		::System::Action* _SeriesShortcutCallback_k__BackingField; // 0x120

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MODESELECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MODESELECT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeriesShortcutCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MODESELECT_SET_SERIESSHORTCUTCALLBACK_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* WaitOpenConditionButtonAni()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MODESELECT_WAITOPENCONDITIONBUTTONANI_OFFSET))(nullptr);
		}

		::System::String* GetOpenAniName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MODESELECT_GETOPENANINAME_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MODESELECT_CO_LOADING_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayOpenAni()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MODESELECT_PLAYOPENANI_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlaySeries2Unlock()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MODESELECT_PLAYSERIES2UNLOCK_OFFSET))(nullptr);
		}

		::System::Void InitButtonOnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MODESELECT_INITBUTTONONCLICK_OFFSET))(nullptr);
		}

		::System::Action* get_SeriesShortcutCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MODESELECT_GET_SERIESSHORTCUTCALLBACK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MODESELECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MODESELECT___N__0_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayAniSequence()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MODESELECT_PLAYANISEQUENCE_OFFSET))(nullptr);
		}

	};

