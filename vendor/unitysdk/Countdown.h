#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define COUNTDOWN_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD9B070)
#define COUNTDOWN_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9B080)
#define COUNTDOWN_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD9B090)

	inline static constexpr unsigned int Countdown_TypeDefinitionIndex = 9804;

	class Countdown : public Il2CppObject
	{
	public:
		::System::Boolean start; // 0x28
		::System::Single totalDurationSeconds; // 0x2C
		::System::Single alertDurationSeconds; // 0x30

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWN_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWN_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTDOWN_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

	};

