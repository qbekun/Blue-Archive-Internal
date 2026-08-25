#pragma once
#include "../../../../unitysdk.h"

#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBPRODUCERTYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E0EA0)

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobProducerTypeAttribute_TypeDefinitionIndex = 30878;

	class JobProducerTypeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* _ProducerType_k__BackingField; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBPRODUCERTYPEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

