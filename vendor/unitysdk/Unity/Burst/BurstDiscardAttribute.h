#pragma once
#include "../../unitysdk.h"

#define UNITY_BURST_BURSTDISCARDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1BD0)

namespace Unity::Burst
{
	inline static constexpr unsigned int BurstDiscardAttribute_TypeDefinitionIndex = 30926;

	class BurstDiscardAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTDISCARDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

