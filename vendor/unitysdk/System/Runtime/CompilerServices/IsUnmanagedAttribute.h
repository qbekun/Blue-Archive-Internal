#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E36A10)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsUnmanagedAttribute_TypeDefinitionIndex = 36974;

	class IsUnmanagedAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

