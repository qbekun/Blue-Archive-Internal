#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMVISIBLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222BD0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ComVisibleAttribute_TypeDefinitionIndex = 24696;

	class ComVisibleAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _val; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMVISIBLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

