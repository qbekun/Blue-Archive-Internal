#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define DECREASETRYCOUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9AC90)
#define DECREASETRYCOUNT_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD9ACA0)
#define DECREASETRYCOUNT_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD9AD50)

	inline static constexpr unsigned int DecreaseTryCount_TypeDefinitionIndex = 9800;

	class DecreaseTryCount : public Il2CppObject
	{
	public:
		::System::Int32 decreaseValue; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECREASETRYCOUNT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + DECREASETRYCOUNT_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DECREASETRYCOUNT_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

	};

