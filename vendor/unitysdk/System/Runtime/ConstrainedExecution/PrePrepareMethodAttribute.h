#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_PREPREPAREMETHODATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227490)

namespace System::Runtime::ConstrainedExecution
{
	inline static constexpr unsigned int PrePrepareMethodAttribute_TypeDefinitionIndex = 24731;

	class PrePrepareMethodAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_PREPREPAREMETHODATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

