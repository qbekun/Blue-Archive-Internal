#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMDEFAULTINTERFACEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222B80)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ComDefaultInterfaceAttribute_TypeDefinitionIndex = 24693;

	class ComDefaultInterfaceAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* _val; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMDEFAULTINTERFACEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

