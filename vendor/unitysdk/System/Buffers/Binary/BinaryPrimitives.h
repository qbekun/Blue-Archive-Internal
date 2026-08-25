#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_OFFSET UNITYSDK_OFFSET(0x92DC690)
#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_OFFSET UNITYSDK_OFFSET(0x92DC6B0)
#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_OFFSET UNITYSDK_OFFSET(0x92DC710)
#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_OFFSET UNITYSDK_OFFSET(0x92DC720)
#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_OFFSET UNITYSDK_OFFSET(0x92DC740)
#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_WRITEUINT32BIGENDIAN_OFFSET UNITYSDK_OFFSET(0x92DC7A0)
#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_TRYWRITEUINT32BIGENDIAN_OFFSET UNITYSDK_OFFSET(0x92DC900)

namespace System::Buffers::Binary
{
	inline static constexpr unsigned int BinaryPrimitives_TypeDefinitionIndex = 25211;

	class BinaryPrimitives : public Il2CppObject
	{
	public:
		::System::Int32 ReverseEndianness(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_OFFSET))(arg, nullptr);
		}

		::System::Int64 ReverseEndianness(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_OFFSET))(arg, nullptr);
		}

		::System::UInt16 ReverseEndianness(::System::UInt16 arg)
		{
			return (return (::System::UInt16(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ReverseEndianness(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_OFFSET))(arg, nullptr);
		}

		::System::UInt64 ReverseEndianness(::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_OFFSET))(arg, nullptr);
		}

		::System::Void WriteUInt32BigEndian(Il2CppObject* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_WRITEUINT32BIGENDIAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryWriteUInt32BigEndian(Il2CppObject* arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_TRYWRITEUINT32BIGENDIAN_OFFSET))(arg, arg, nullptr);
		}

	};
}

