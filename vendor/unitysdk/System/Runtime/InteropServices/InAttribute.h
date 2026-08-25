#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_INATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222C40)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int InAttribute_TypeDefinitionIndex = 24702;

	class InAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_INATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

