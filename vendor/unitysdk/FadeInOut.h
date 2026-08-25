#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define FADEINOUT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9B490)
#define FADEINOUT_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD9B4A0)
#define FADEINOUT_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD9B4B0)

	inline static constexpr unsigned int FadeInOut_TypeDefinitionIndex = 9808;

	class FadeInOut : public Il2CppObject
	{
	public:
		::System::Boolean fadeIn; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FADEINOUT_.CTOR_OFFSET))(nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FADEINOUT_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + FADEINOUT_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

	};

