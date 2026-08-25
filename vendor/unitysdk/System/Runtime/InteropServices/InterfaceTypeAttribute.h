#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_INTERFACETYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222B60)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int InterfaceTypeAttribute_TypeDefinitionIndex = 24692;

	class InterfaceTypeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Runtime::InteropServices::ComInterfaceType* _val; // 0x10

		::System::Void .ctor(::System::Runtime::InteropServices::ComInterfaceType* arg)
		{
			((::System::Void(*)(::System::Runtime::InteropServices::ComInterfaceType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_INTERFACETYPEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

