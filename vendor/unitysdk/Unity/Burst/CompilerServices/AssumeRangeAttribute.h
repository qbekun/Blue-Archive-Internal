#pragma once
#include "../../../unitysdk.h"

#define UNITY_BURST_COMPILERSERVICES_ASSUMERANGEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E368B0)

namespace Unity::Burst::CompilerServices
{
	inline static constexpr unsigned int AssumeRangeAttribute_TypeDefinitionIndex = 37276;

	class AssumeRangeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_COMPILERSERVICES_ASSUMERANGEATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

