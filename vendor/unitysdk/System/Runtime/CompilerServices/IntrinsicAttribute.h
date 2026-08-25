#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_INTRINSICATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x983DC50)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IntrinsicAttribute_TypeDefinitionIndex = 37105;

	class IntrinsicAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTRINSICATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

