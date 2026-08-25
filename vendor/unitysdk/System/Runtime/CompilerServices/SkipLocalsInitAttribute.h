#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_SKIPLOCALSINITATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2889380)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int SkipLocalsInitAttribute_TypeDefinitionIndex = 37756;

	class SkipLocalsInitAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_SKIPLOCALSINITATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

