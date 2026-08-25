#pragma once
#include "unitysdk.h"

class UILabel;
class UIWidget;
namespace UnityEngine { class GameObject; }
class TweenPosition;
class MXPhoneticText;
class MXButton;
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class WaitForSecondsRealtime; }
class ScenarioScriptInfo;

#define UISCENARIOSCRIPT_HANDLEAUTO_OFFSET UNITYSDK_OFFSET(0x27E5700)
#define UISCENARIOSCRIPT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E5890)
#define UISCENARIOSCRIPT_AWAKE_OFFSET UNITYSDK_OFFSET(0x27E58A0)
#define UISCENARIOSCRIPT_ONCLICKSCRIPT_OFFSET UNITYSDK_OFFSET(0x27E5AF0)
#define UISCENARIOSCRIPT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27E5CE0)
#define UISCENARIOSCRIPT_GET_WAITTIMEFORAUTO_OFFSET UNITYSDK_OFFSET(0x27E5E80)
#define UISCENARIOSCRIPT_INIT_OFFSET UNITYSDK_OFFSET(0x27E5D20)
#define UISCENARIOSCRIPT_ONAUTOON_OFFSET UNITYSDK_OFFSET(0x27E5FD0)
#define UISCENARIOSCRIPT_CO_INITSCRIPT_OFFSET UNITYSDK_OFFSET(0x27E6020)
#define UISCENARIOSCRIPT__AWAKE_B__15_0_OFFSET UNITYSDK_OFFSET(0x27E60D0)
#define UISCENARIOSCRIPT_INITSCRIPT_OFFSET UNITYSDK_OFFSET(0x27E60E0)
#define UISCENARIOSCRIPT_YIELDADVANCE_OFFSET UNITYSDK_OFFSET(0x27E5820)
#define UISCENARIOSCRIPT_SET_ISSELECTION_OFFSET UNITYSDK_OFFSET(0x27E6420)
#define UISCENARIOSCRIPT_GET_ISSELECTION_OFFSET UNITYSDK_OFFSET(0x27E6430)
#define UISCENARIOSCRIPT_ONTYPECOMPLETED_OFFSET UNITYSDK_OFFSET(0x27E6440)

	inline static constexpr unsigned int UIScenarioScript_TypeDefinitionIndex = 7687;

	class UIScenarioScript : public Il2CppObject
	{
	public:
		UILabel* charNameText; // 0x18
		UILabel* nicknameText; // 0x20
		UIWidget* nicknameAnchor; // 0x28
		::UnityEngine::GameObject* indicator; // 0x30
		TweenPosition* indicatorTween; // 0x38
		MXPhoneticText* typeEffect; // 0x40
		MXButton* button; // 0x48
		::UnityEngine::Coroutine* yieldAdvance; // 0x50
		::System::Boolean _isSelection_k__BackingField; // 0x58
		::UnityEngine::WaitForSecondsRealtime* waitTimeForAuto; // 0x60

		::System::Void HandleAuto()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_HANDLEAUTO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickScript(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_ONCLICKSCRIPT_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_INITIALIZE_OFFSET))(nullptr);
		}

		::UnityEngine::WaitForSecondsRealtime* get_WaitTimeForAuto()
		{
			return ((::UnityEngine::WaitForSecondsRealtime*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_GET_WAITTIMEFORAUTO_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_INIT_OFFSET))(nullptr);
		}

		::System::Void OnAutoOn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_ONAUTOON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InitScript(ScenarioScriptInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_CO_INITSCRIPT_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__15_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT__AWAKE_B__15_0_OFFSET))(nullptr);
		}

		::System::Void InitScript(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_INITSCRIPT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* YieldAdvance()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_YIELDADVANCE_OFFSET))(nullptr);
		}

		::System::Void set_isSelection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_SET_ISSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_GET_ISSELECTION_OFFSET))(nullptr);
		}

		::System::Void OnTypeCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPT_ONTYPECOMPLETED_OFFSET))(nullptr);
		}

	};

