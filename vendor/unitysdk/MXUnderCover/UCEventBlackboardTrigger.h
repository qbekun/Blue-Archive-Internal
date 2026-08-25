#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCConditionEventBlackboard; }
namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCEVENTBLACKBOARDTRIGGER_ONCHANGED_OFFSET UNITYSDK_OFFSET(0xD94BF0)
#define MXUNDERCOVER_UCEVENTBLACKBOARDTRIGGER_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD94C50)
#define MXUNDERCOVER_UCEVENTBLACKBOARDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD94DC0)
#define MXUNDERCOVER_UCEVENTBLACKBOARDTRIGGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD94E30)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCEventBlackboardTrigger_TypeDefinitionIndex = 9735;

	class UCEventBlackboardTrigger : public Il2CppObject
	{
	public:
		::MXUnderCover::UCConditionEventBlackboard* TriggerCondition; // 0x50
		::System::Boolean isTriggerable; // 0x58

		::System::Void OnChanged(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCEVENTBLACKBOARDTRIGGER_ONCHANGED_OFFSET))(str, nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCEVENTBLACKBOARDTRIGGER_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCEVENTBLACKBOARDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCEVENTBLACKBOARDTRIGGER_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

