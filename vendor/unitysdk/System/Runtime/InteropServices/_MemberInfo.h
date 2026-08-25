#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES__MEMBERINFO_GETTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES__MEMBERINFO_GETIDSOFNAMES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES__MEMBERINFO_GETTYPEINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES__MEMBERINFO_GETTYPEINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES__MEMBERINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int _MemberInfo_TypeDefinitionIndex = 24722;

	class _MemberInfo : public Il2CppObject
	{
	public:
		::System::Type* GetType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES__MEMBERINFO_GETTYPE_OFFSET))(nullptr);
		}

		::System::Void GetIDsOfNames(::System::Guid&* arg, ::System::Int32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Guid&*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES__MEMBERINFO_GETIDSOFNAMES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetTypeInfo(::System::UInt32 arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES__MEMBERINFO_GETTYPEINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetTypeInfoCount(uint32_t&* arg)
		{
			((::System::Void(*)(uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES__MEMBERINFO_GETTYPEINFOCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::System::UInt32 arg, ::System::Guid&* arg, ::System::UInt32 arg, ::System::Int16 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Guid&*, ::System::UInt32, ::System::Int16, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES__MEMBERINFO_INVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

