#pragma once
#include "unitysdk.h"

class UILabel;
class TweenAlpha;
class ScenarioScriptInfo;

#define UISCENARIOPLACE_INIT_OFFSET UNITYSDK_OFFSET(0x27E28D0)
#define UISCENARIOPLACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E2AB0)
#define UISCENARIOPLACE_YIELDPLACETEXT_OFFSET UNITYSDK_OFFSET(0x27E2A40)
#define UISCENARIOPLACE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27E2AE0)
#define UISCENARIOPLACE_INITPLACE_OFFSET UNITYSDK_OFFSET(0x27E2B10)

	inline static constexpr unsigned int UIScenarioPlace_TypeDefinitionIndex = 7670;

	class UIScenarioPlace : public Il2CppObject
	{
	public:
		UILabel* placeLabel; // 0x18
		TweenAlpha* placeTween; // 0x20

		::System::Void Init(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOPLACE_INIT_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOPLACE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* YieldPlaceText()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOPLACE_YIELDPLACETEXT_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOPLACE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void InitPlace(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOPLACE_INITPLACE_OFFSET))(arg, nullptr);
		}

	};

