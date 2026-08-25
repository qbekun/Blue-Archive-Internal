#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_RELIABILITYCONTRACTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227460)

namespace System::Runtime::ConstrainedExecution
{
	inline static constexpr unsigned int ReliabilityContractAttribute_TypeDefinitionIndex = 24730;

	class ReliabilityContractAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Runtime::ConstrainedExecution::Consistency* _ConsistencyGuarantee_k__BackingField; // 0x10
		::System::Runtime::ConstrainedExecution::Cer* _Cer_k__BackingField; // 0x14

		::System::Void .ctor(::System::Runtime::ConstrainedExecution::Consistency* arg, ::System::Runtime::ConstrainedExecution::Cer* arg)
		{
			((::System::Void(*)(::System::Runtime::ConstrainedExecution::Consistency*, ::System::Runtime::ConstrainedExecution::Cer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_RELIABILITYCONTRACTATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

