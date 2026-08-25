#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_CLASSINTERFACEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222BB0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ClassInterfaceAttribute_TypeDefinitionIndex = 24695;

	class ClassInterfaceAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Runtime::InteropServices::ClassInterfaceType* _val; // 0x10

		::System::Void .ctor(::System::Runtime::InteropServices::ClassInterfaceType* arg)
		{
			((::System::Void(*)(::System::Runtime::InteropServices::ClassInterfaceType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_CLASSINTERFACEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

