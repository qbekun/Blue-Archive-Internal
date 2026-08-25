#pragma once
#include "unitysdk.h"

#define BLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E37560)
#define BLOCK_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x9E37000)
#define BLOCK_GET_ALLOCATEDBYTES_OFFSET UNITYSDK_OFFSET(0x9E37600)
#define BLOCK_TRYFREE_OFFSET UNITYSDK_OFFSET(0x9E375B0)
#define BLOCK_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x9E37610)
#define BLOCK_GET_BYTES_OFFSET UNITYSDK_OFFSET(0x9E36FF0)

	inline static constexpr unsigned int Block_TypeDefinitionIndex = 36999;

	class Block : public Il2CppObject
	{
	public:
		Range* Range; // 0x10
		::System::Int32 BytesPerItem; // 0x20
		::System::Int32 AllocatedItems; // 0x24
		::System::Byte Log2Alignment; // 0x28
		::System::Byte Padding0; // 0x29
		::System::UInt16 Padding1; // 0x2A
		::System::UInt32 Padding2; // 0x2C

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCK_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 get_Alignment()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCK_GET_ALIGNMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_AllocatedBytes()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCK_GET_ALLOCATEDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 TryFree()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCK_TRYFREE_OFFSET))(nullptr);
		}

		::System::Void set_Alignment(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BLOCK_SET_ALIGNMENT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Bytes()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCK_GET_BYTES_OFFSET))(nullptr);
		}

	};

