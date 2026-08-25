#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class EventBlackboardProperty; }
namespace MXUnderCover { class UCEntity; }

#define EVENTBLACKBOARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xD97C90)
#define EVENTBLACKBOARD_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD97CA0)
#define EVENTBLACKBOARD_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD97D30)

	inline static constexpr unsigned int EventBlackboard_TypeDefinitionIndex = 9769;

	class EventBlackboard : public Il2CppObject
	{
	public:
		::MXUnderCover::EventBlackboardProperty* Event; // 0x28
		::System::Boolean Value; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBLACKBOARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBLACKBOARD_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBLACKBOARD_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

	};

