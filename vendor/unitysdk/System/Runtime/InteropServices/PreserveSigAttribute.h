#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_PRESERVESIGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222C30)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int PreserveSigAttribute_TypeDefinitionIndex = 24701;

	class PreserveSigAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_PRESERVESIGATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

