#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_TYPEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D38A0)
#define SYSTEM_RUNTIME_REMOTING_TYPEENTRY_GET_ASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x91D38B0)
#define SYSTEM_RUNTIME_REMOTING_TYPEENTRY_SET_ASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x91D38C0)
#define SYSTEM_RUNTIME_REMOTING_TYPEENTRY_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x91D38D0)
#define SYSTEM_RUNTIME_REMOTING_TYPEENTRY_SET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x91D38E0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int TypeEntry_TypeDefinitionIndex = 24454;

	class TypeEntry : public Il2CppObject
	{
	public:
		::System::String* assembly_name; // 0x10
		::System::String* type_name; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEENTRY_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_AssemblyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEENTRY_GET_ASSEMBLYNAME_OFFSET))(nullptr);
		}

		::System::Void set_AssemblyName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEENTRY_SET_ASSEMBLYNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEENTRY_GET_TYPENAME_OFFSET))(nullptr);
		}

		::System::Void set_TypeName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEENTRY_SET_TYPENAME_OFFSET))(str, nullptr);
		}

	};
}

