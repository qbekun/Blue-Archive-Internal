#pragma once
#include "../unitysdk.h"

#define SYSTEM_CLSCOMPLIANTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x927D280)

namespace System
{
	inline static constexpr unsigned int CLSCompliantAttribute_TypeDefinitionIndex = 23719;

	class CLSCompliantAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _compliant; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CLSCOMPLIANTATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

