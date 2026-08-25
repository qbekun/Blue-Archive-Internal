#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_VOLATILE_READ_OFFSET UNITYSDK_OFFSET(0x93EDB90)
#define SYSTEM_THREADING_VOLATILE_WRITE_OFFSET UNITYSDK_OFFSET(0x93EDBB0)
#define SYSTEM_THREADING_VOLATILE_READ_OFFSET UNITYSDK_OFFSET(0x93EDBD0)
#define SYSTEM_THREADING_VOLATILE_WRITE_OFFSET UNITYSDK_OFFSET(0x93EDBF0)
#define SYSTEM_THREADING_VOLATILE_READ_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_VOLATILE_WRITE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading
{
	inline static constexpr unsigned int Volatile_TypeDefinitionIndex = 24131;

	class Volatile : public Il2CppObject
	{
	public:
		::System::Boolean Read(bool&* arg)
		{
			return (return (::System::Boolean(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_READ_OFFSET))(arg, nullptr);
		}

		::System::Void Write(bool&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(bool&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_WRITE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Read(int32_t&* arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_READ_OFFSET))(arg, nullptr);
		}

		::System::Void Write(int32_t&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_WRITE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Read(Il2CppObject&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_READ_OFFSET))(arg, nullptr);
		}

		::System::Void Write(Il2CppObject&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_VOLATILE_WRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

