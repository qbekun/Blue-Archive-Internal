#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackSerializerOptions; }
namespace MemoryPack { class StringEncoding; }

#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x906C3A0)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_GET_STRINGENCODING_OFFSET UNITYSDK_OFFSET(0x906C400)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_SET_STRINGENCODING_OFFSET UNITYSDK_OFFSET(0x906C410)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_GET_SERVICEPROVIDER_OFFSET UNITYSDK_OFFSET(0x906C420)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_SET_SERVICEPROVIDER_OFFSET UNITYSDK_OFFSET(0x906C430)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x906C440)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x906C540)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x906C650)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x906C6E0)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x906C710)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x906C810)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x906C8A0)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS__CLONE_$_OFFSET UNITYSDK_OFFSET(0x906C9C0)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x906CA40)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x906CA80)
#define MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x906CA90)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackSerializerOptions_TypeDefinitionIndex = 35436;

	class MemoryPackSerializerOptions : public Il2CppObject
	{
	public:
		::MemoryPack::MemoryPackSerializerOptions* Default; // 0x0
		::MemoryPack::MemoryPackSerializerOptions* Utf8; // 0x8
		::MemoryPack::MemoryPackSerializerOptions* Utf16; // 0x10
		::MemoryPack::StringEncoding* _StringEncoding_k__BackingField; // 0x10
		::System::IServiceProvider* _ServiceProvider_k__BackingField; // 0x18

		::System::Type* get_EqualityContract()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_GET_EQUALITYCONTRACT_OFFSET))(nullptr);
		}

		::MemoryPack::StringEncoding* get_StringEncoding()
		{
			return (return (::MemoryPack::StringEncoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_GET_STRINGENCODING_OFFSET))(nullptr);
		}

		::System::Void set_StringEncoding(::MemoryPack::StringEncoding* arg)
		{
			((::System::Void(*)(::MemoryPack::StringEncoding*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_SET_STRINGENCODING_OFFSET))(arg, nullptr);
		}

		::System::IServiceProvider* get_ServiceProvider()
		{
			return (return (::System::IServiceProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_GET_SERVICEPROVIDER_OFFSET))(nullptr);
		}

		::System::Void set_ServiceProvider(::System::IServiceProvider* arg)
		{
			((::System::Void(*)(::System::IServiceProvider*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_SET_SERVICEPROVIDER_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* arg)
		{
			return (return (::System::Boolean(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_PRINTMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Inequality(::MemoryPack::MemoryPackSerializerOptions* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (::System::Boolean(*)(::MemoryPack::MemoryPackSerializerOptions*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::MemoryPack::MemoryPackSerializerOptions* arg, ::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (::System::Boolean(*)(::MemoryPack::MemoryPackSerializerOptions*, ::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (::System::Boolean(*)(::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_EQUALS_OFFSET))(arg, nullptr);
		}

		::MemoryPack::MemoryPackSerializerOptions* _Clone_$()
		{
			return (return (::MemoryPack::MemoryPackSerializerOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS__CLONE_$_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKSERIALIZEROPTIONS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

