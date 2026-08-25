#pragma once
#include "unitysdk.h"

class TweenAlpha;
class UIRect;
class UILabel;
namespace UnityEngine { class Animation; }
class UIScenarioNew;
class ScenarioEndingInfo;
class ScenarioScriptInfo;

#define UISCENARIOENDING_.CTOR_OFFSET UNITYSDK_OFFSET(0x27DC210)
#define UISCENARIOENDING_SETUI_OFFSET UNITYSDK_OFFSET(0x27DC280)
#define UISCENARIOENDING_INITENDING_OFFSET UNITYSDK_OFFSET(0x27DC4A0)
#define UISCENARIOENDING_HANDLEENDING_OFFSET UNITYSDK_OFFSET(0x27DC410)
#define UISCENARIOENDING_YIELDINIT_OFFSET UNITYSDK_OFFSET(0x27DC5C0)
#define UISCENARIOENDING_GET_FRONTUIRECT_OFFSET UNITYSDK_OFFSET(0x27DC650)
#define UISCENARIOENDING_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27DC4F0)
#define UISCENARIOENDING_INIT_OFFSET UNITYSDK_OFFSET(0x27DC6F0)

	inline static constexpr unsigned int UIScenarioEnding_TypeDefinitionIndex = 7643;

	class UIScenarioEnding : public Il2CppObject
	{
	public:
		TweenAlpha* frontUITween; // 0x18
		UIRect* frontUIRect; // 0x20
		UILabel* endingLabel; // 0x28
		::UnityEngine::Animation* endingAnimation; // 0x30
		::UnityEngine::Animation* toBeContinueAnimation; // 0x38
		::System::String* endingAniName; // 0x40
		::System::String* stampAniName; // 0x48
		UIScenarioNew* scenarioUI; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetUI(ScenarioEndingInfo* arg)
		{
			((::System::Void(*)(ScenarioEndingInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDING_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void InitEnding(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDING_INITENDING_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* HandleEnding(ScenarioEndingInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(ScenarioEndingInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDING_HANDLEENDING_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* YieldInit()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDING_YIELDINIT_OFFSET))(nullptr);
		}

		UIRect* get_FrontUIRect()
		{
			return ((UIRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDING_GET_FRONTUIRECT_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDING_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDING_INIT_OFFSET))(nullptr);
		}

	};

