#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_GUIDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222C00)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int GuidAttribute_TypeDefinitionIndex = 24700;

	class GuidAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _val; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GUIDATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

