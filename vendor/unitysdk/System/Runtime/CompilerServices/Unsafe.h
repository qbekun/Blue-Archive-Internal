#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_READUNALIGNED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_WRITEUNALIGNED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ASPOINTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_SIZEOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCKUNALIGNED_OFFSET UNITYSDK_OFFSET(0x983DC60)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_AS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ASREF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ASREF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_AS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ADDBYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_BYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ARESAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ISADDRESSLESSTHAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ISNULLREF_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int Unsafe_TypeDefinitionIndex = 38077;

	class Unsafe : public Il2CppObject
	{
	public:
		Il2CppObject* ReadUnaligned(uint8_t&* arg)
		{
			return (return (Il2CppObject*(*)(uint8_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_READUNALIGNED_OFFSET))(arg, nullptr);
		}

		::System::Void WriteUnaligned(uint8_t&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(uint8_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_WRITEUNALIGNED_OFFSET))(arg, arg, nullptr);
		}

		::System::Object** AsPointer(Il2CppObject&* arg)
		{
			return (return (::System::Object**(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ASPOINTER_OFFSET))(arg, nullptr);
		}

		::System::Int32 SizeOf()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_SIZEOF_OFFSET))(nullptr);
		}

		::System::Void CopyBlockUnaligned(uint8_t&* arg, uint8_t&* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(uint8_t&*, uint8_t&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCKUNALIGNED_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* As(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_AS_OFFSET))(arg, nullptr);
		}

		Il2CppObject&* AsRef(::System::Object** arg)
		{
			return (return (Il2CppObject&*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ASREF_OFFSET))(arg, nullptr);
		}

		Il2CppObject&* AsRef(Il2CppObject&* arg)
		{
			return (return (Il2CppObject&*(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ASREF_OFFSET))(arg, nullptr);
		}

		Il2CppObject&* As(Il2CppObject&* arg)
		{
			return (return (Il2CppObject&*(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_AS_OFFSET))(arg, nullptr);
		}

		Il2CppObject&* Add(Il2CppObject&* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject&*(*)(Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ADD_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject&* Add(Il2CppObject&* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject&*(*)(Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ADD_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject&* AddByteOffset(Il2CppObject&* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject&*(*)(Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ADDBYTEOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ByteOffset(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_BYTEOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AreSame(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ARESAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsAddressLessThan(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ISADDRESSLESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsNullRef(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_ISNULLREF_OFFSET))(arg, nullptr);
		}

	};
}

