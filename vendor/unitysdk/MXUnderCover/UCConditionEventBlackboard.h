#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class EventBlackboardProperty; }
namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCCONDITIONEVENTBLACKBOARD_CHECK_OFFSET UNITYSDK_OFFSET(0xD9BA60)
#define MXUNDERCOVER_UCCONDITIONEVENTBLACKBOARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9BB30)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCConditionEventBlackboard_TypeDefinitionIndex = 9818;

	class UCConditionEventBlackboard : public Il2CppObject
	{
	public:
		::MXUnderCover::EventBlackboardProperty* Event; // 0x10
		::System::Boolean isOn; // 0x18

		::System::Boolean Check(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONEVENTBLACKBOARD_CHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONEVENTBLACKBOARD_.CTOR_OFFSET))(nullptr);
		}

	};
}

