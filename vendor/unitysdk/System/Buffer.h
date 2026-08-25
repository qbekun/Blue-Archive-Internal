#pragma once
#include "../unitysdk.h"

#define SYSTEM_BUFFER_INTERNALBLOCKCOPY_OFFSET UNITYSDK_OFFSET(0x9394930)
#define SYSTEM_BUFFER_INDEXOFBYTE_OFFSET UNITYSDK_OFFSET(0x9394940)
#define SYSTEM_BUFFER__BYTELENGTH_OFFSET UNITYSDK_OFFSET(0x9394AC0)
#define SYSTEM_BUFFER_ZEROMEMORY_OFFSET UNITYSDK_OFFSET(0x9394AD0)
#define SYSTEM_BUFFER_MEMCPY_OFFSET UNITYSDK_OFFSET(0x9394B30)
#define SYSTEM_BUFFER_INTERNALMEMCPY_OFFSET UNITYSDK_OFFSET(0x9394EF0)
#define SYSTEM_BUFFER_BYTELENGTH_OFFSET UNITYSDK_OFFSET(0x9394F00)
#define SYSTEM_BUFFER_BLOCKCOPY_OFFSET UNITYSDK_OFFSET(0x9394FC0)
#define SYSTEM_BUFFER_MEMORYCOPY_OFFSET UNITYSDK_OFFSET(0x93951C0)
#define SYSTEM_BUFFER_MEMCPY4_OFFSET UNITYSDK_OFFSET(0x9395300)
#define SYSTEM_BUFFER_MEMCPY2_OFFSET UNITYSDK_OFFSET(0x9395410)
#define SYSTEM_BUFFER_MEMCPY1_OFFSET UNITYSDK_OFFSET(0x93954E0)
#define SYSTEM_BUFFER_MEMCPY_OFFSET UNITYSDK_OFFSET(0x9394B80)
#define SYSTEM_BUFFER_MEMMOVE_OFFSET UNITYSDK_OFFSET(0x93952B0)
#define SYSTEM_BUFFER_MEMMOVE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int Buffer_TypeDefinitionIndex = 23919;

	class Buffer : public Il2CppObject
	{
	public:
		::System::Boolean InternalBlockCopy(::System::Array* arg, ::System::Int32 arg, ::System::Array* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_INTERNALBLOCKCOPY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOfByte(::System::Object** arg, ::System::Byte arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Byte, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_INDEXOFBYTE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 _ByteLength(::System::Array* arg)
		{
			return (return (::System::Int32(*)(::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER__BYTELENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void ZeroMemory(::System::Object** arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_ZEROMEMORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Memcpy(::System::Object** arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InternalMemcpy(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_INTERNALMEMCPY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ByteLength(::System::Array* arg)
		{
			return (return (::System::Int32(*)(::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_BYTELENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void BlockCopy(::System::Array* arg, ::System::Int32 arg, ::System::Array* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_BLOCKCOPY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MemoryCopy(::System::Object** arg, ::System::Object** arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMORYCOPY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void memcpy4(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY4_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void memcpy2(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY2_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void memcpy1(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY1_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Memcpy(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Memmove(::System::Object** arg, ::System::Object** arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMMOVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Memmove(Il2CppObject&* arg, Il2CppObject&* arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMMOVE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

