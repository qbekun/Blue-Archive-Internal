#pragma once
#include "unitysdk.h"

class UIWidget;
class TweenAlpha;
class MXPhoneticText;
class ScenarioScreenTextInfo;

#define UISCENARIOSCREENLABEL_INIT_OFFSET UNITYSDK_OFFSET(0x27E44B0)
#define UISCENARIOSCREENLABEL_ONLABELFINISHED_OFFSET UNITYSDK_OFFSET(0x27E4970)
#define UISCENARIOSCREENLABEL_CLEAR_OFFSET UNITYSDK_OFFSET(0x27E4990)
#define UISCENARIOSCREENLABEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E4A00)

	inline static constexpr unsigned int UIScenarioScreenLabel_TypeDefinitionIndex = 7681;

	class UIScenarioScreenLabel : public Il2CppObject
	{
	public:
		UIWidget* widget; // 0x18
		TweenAlpha* tween; // 0x20
		MXPhoneticText* phonetic; // 0x28
		::System::Action* onLabelTextCompleted; // 0x30

		::System::Void Init(ScenarioScreenTextInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(ScenarioScreenTextInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENLABEL_INIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnLabelFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENLABEL_ONLABELFINISHED_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENLABEL_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCREENLABEL_.CTOR_OFFSET))(nullptr);
		}

	};

