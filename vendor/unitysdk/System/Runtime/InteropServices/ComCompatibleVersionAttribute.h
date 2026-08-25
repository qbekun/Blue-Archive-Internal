#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMCOMPATIBLEVERSIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222FD0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ComCompatibleVersionAttribute_TypeDefinitionIndex = 24709;

	class ComCompatibleVersionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 _major; // 0x10
		::System::Int32 _minor; // 0x14
		::System::Int32 _build; // 0x18
		::System::Int32 _revision; // 0x1C

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMCOMPATIBLEVERSIONATTRIBUTE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

