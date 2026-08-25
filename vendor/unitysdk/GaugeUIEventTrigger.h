#pragma once
#include "unitysdk.h"

class TriggerType;
namespace MX::Core::Services { class Hash64; }
namespace MX::UI::UIHPWidgets { class ICustomGaugeUI; }

#define GAUGEUIEVENTTRIGGER_GET_LOGICEFFECTTEMPLATEIDHASH_OFFSET UNITYSDK_OFFSET(0x25EA430)
#define GAUGEUIEVENTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25EA4C0)
#define GAUGEUIEVENTTRIGGER_EXECUTEENTER_OFFSET UNITYSDK_OFFSET(0x25EA570)
#define GAUGEUIEVENTTRIGGER_EXECUTEEXIT_OFFSET UNITYSDK_OFFSET(0x25EA700)

	inline static constexpr unsigned int GaugeUIEventTrigger_TypeDefinitionIndex = 6410;

	class GaugeUIEventTrigger : public Il2CppObject
	{
	public:
		TriggerType* type; // 0x10
		::System::Int32 triggerValue; // 0x14
		::System::String* logicEffectTemplateId; // 0x18
		::MX::Core::Services::Hash64* logicEffectTemplateIdHash; // 0x20
		Il2CppObject* onEnterActions; // 0x28
		Il2CppObject* onExitActions; // 0x30
		::System::Boolean clearAllIsTriggeringEvent; // 0x38
		::System::Boolean triggerAlreadyOnWhenCreated; // 0x39

		::MX::Core::Services::Hash64* get_LogicEffectTemplateIdHash()
		{
			return ((::MX::Core::Services::Hash64*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIEVENTTRIGGER_GET_LOGICEFFECTTEMPLATEIDHASH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIEVENTTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ExecuteEnter(::MX::UI::UIHPWidgets::ICustomGaugeUI* arg)
		{
			((::System::Void(*)(::MX::UI::UIHPWidgets::ICustomGaugeUI*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIEVENTTRIGGER_EXECUTEENTER_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteExit(::MX::UI::UIHPWidgets::ICustomGaugeUI* arg)
		{
			((::System::Void(*)(::MX::UI::UIHPWidgets::ICustomGaugeUI*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIEVENTTRIGGER_EXECUTEEXIT_OFFSET))(arg, nullptr);
		}

	};

