#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x914B9F0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x914BA10)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9148F40)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeRegistryHandle_TypeDefinitionIndex = 23650;

	class SafeRegistryHandle : public Il2CppObject
	{
	public:
		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

