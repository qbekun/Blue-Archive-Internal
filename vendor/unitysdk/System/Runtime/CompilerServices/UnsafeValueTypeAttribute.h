#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFEVALUETYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92283E0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int UnsafeValueTypeAttribute_TypeDefinitionIndex = 24767;

	class UnsafeValueTypeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFEVALUETYPEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

