#pragma once
#include "unitysdk.h"

namespace Unity::Collections { class Allocator; }

#define ALLOCATORHANDLE_GET_TABLEENTRY_OFFSET UNITYSDK_OFFSET(0x9E36BB0)
#define ALLOCATORHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9E37450)
#define ALLOCATORHANDLE_REWIND_OFFSET UNITYSDK_OFFSET(0x9E37460)
#define ALLOCATORHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E37010)
#define ALLOCATORHANDLE_GET_TOALLOCATOR_OFFSET UNITYSDK_OFFSET(0x9E37470)
#define ALLOCATORHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E37480)
#define ALLOCATORHANDLE_TRY_OFFSET UNITYSDK_OFFSET(0x9E37490)
#define ALLOCATORHANDLE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9E36DF0)

	inline static constexpr unsigned int AllocatorHandle_TypeDefinitionIndex = 36997;

	class AllocatorHandle : public Il2CppObject
	{
	public:
		::System::UInt16 Index; // 0x10
		::System::UInt16 Version; // 0x12

		TableEntry&* get_TableEntry()
		{
			return (return (TableEntry&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLOCATORHANDLE_GET_TABLEENTRY_OFFSET))(nullptr);
		}

		::System::Int32 get_Value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLOCATORHANDLE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void Rewind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLOCATORHANDLE_REWIND_OFFSET))(nullptr);
		}

		AllocatorHandle* op_Implicit(::Unity::Collections::Allocator* arg)
		{
			return (return (AllocatorHandle*(*)(::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + ALLOCATORHANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Unity::Collections::Allocator* get_ToAllocator()
		{
			return (return (::Unity::Collections::Allocator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLOCATORHANDLE_GET_TOALLOCATOR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLOCATORHANDLE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 Try(Block&* arg)
		{
			return (return (::System::Int32(*)(Block&*, ::PVOID))((::PBYTE)hIl2Cpp + ALLOCATORHANDLE_TRY_OFFSET))(arg, nullptr);
		}

		AllocatorHandle* get_Handle()
		{
			return (return (AllocatorHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLOCATORHANDLE_GET_HANDLE_OFFSET))(nullptr);
		}

	};

