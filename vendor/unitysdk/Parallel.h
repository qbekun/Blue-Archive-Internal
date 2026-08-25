#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define PARALLEL_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD96B20)
#define PARALLEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xD96B30)
#define PARALLEL_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD96B40)

	inline static constexpr unsigned int Parallel_TypeDefinitionIndex = 9760;

	class Parallel : public Il2CppObject
	{
	public:
		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PARALLEL_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARALLEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + PARALLEL_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

	};

