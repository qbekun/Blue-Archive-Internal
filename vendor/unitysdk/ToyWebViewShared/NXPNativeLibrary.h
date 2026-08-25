#pragma once
#include "../unitysdk.h"

#define TOYWEBVIEWSHARED_NXPNATIVELIBRARY_LOADLIBRARY_OFFSET UNITYSDK_OFFSET(0x9BAA300)
#define TOYWEBVIEWSHARED_NXPNATIVELIBRARY_GETPROCADDRESS_OFFSET UNITYSDK_OFFSET(0x9BAA430)
#define TOYWEBVIEWSHARED_NXPNATIVELIBRARY_FREELIBRARY_OFFSET UNITYSDK_OFFSET(0x9BAA570)

namespace ToyWebViewShared
{
	inline static constexpr unsigned int NXPNativeLibrary_TypeDefinitionIndex = 25399;

	class NXPNativeLibrary : public Il2CppObject
	{
	public:
		::System::Int32 LoadLibrary(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPNATIVELIBRARY_LOADLIBRARY_OFFSET))(str, nullptr);
		}

		::System::Int32 GetProcAddress(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPNATIVELIBRARY_GETPROCADDRESS_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean FreeLibrary(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPNATIVELIBRARY_FREELIBRARY_OFFSET))(arg, nullptr);
		}

	};
}

