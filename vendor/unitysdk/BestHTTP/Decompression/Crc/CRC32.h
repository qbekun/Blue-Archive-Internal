#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_DECOMPRESSION_CRC_CRC32_GET_TOTALBYTESREAD_OFFSET UNITYSDK_OFFSET(0x8EADE0)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_GET_CRC32RESULT_OFFSET UNITYSDK_OFFSET(0x8E7550)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_GETCRC32_OFFSET UNITYSDK_OFFSET(0x8EADF0)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_GETCRC32ANDCOPY_OFFSET UNITYSDK_OFFSET(0x8EAE00)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_COMPUTECRC32_OFFSET UNITYSDK_OFFSET(0x8EAFE0)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32__INTERNALCOMPUTECRC32_OFFSET UNITYSDK_OFFSET(0x8EB020)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_SLURPBLOCK_OFFSET UNITYSDK_OFFSET(0x8E7CE0)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_UPDATECRC_OFFSET UNITYSDK_OFFSET(0x8EB060)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_UPDATECRC_OFFSET UNITYSDK_OFFSET(0x8EB0D0)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_REVERSEBITS_OFFSET UNITYSDK_OFFSET(0x8EB150)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_REVERSEBITS_OFFSET UNITYSDK_OFFSET(0x8EB1B0)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_GENERATELOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x8EB1E0)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_GF2_MATRIX_TIMES_OFFSET UNITYSDK_OFFSET(0x8EB400)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_GF2_MATRIX_SQUARE_OFFSET UNITYSDK_OFFSET(0x8EB460)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_COMBINE_OFFSET UNITYSDK_OFFSET(0x8EB520)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E76F0)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_.CTOR_OFFSET UNITYSDK_OFFSET(0x8EB950)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_.CTOR_OFFSET UNITYSDK_OFFSET(0x8EB990)
#define BESTHTTP_DECOMPRESSION_CRC_CRC32_RESET_OFFSET UNITYSDK_OFFSET(0x8EB9D0)

namespace BestHTTP::Decompression::Crc
{
	inline static constexpr unsigned int CRC32_TypeDefinitionIndex = 23391;

	class CRC32 : public Il2CppObject
	{
	public:
		::System::UInt32 dwPolynomial; // 0x10
		::System::Int64 _TotalBytesRead; // 0x18
		::System::Boolean reverseBits; // 0x20
		::Il2CppArray<::System::Object*>* crc32Table; // 0x28
		::System::Int32 BUFFER_SIZE; // 0x0
		::System::UInt32 _register; // 0x30

		::System::Int64 get_TotalBytesRead()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_GET_TOTALBYTESREAD_OFFSET))(nullptr);
		}

		::System::Int32 get_Crc32Result()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_GET_CRC32RESULT_OFFSET))(nullptr);
		}

		::System::Int32 GetCrc32(::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_GETCRC32_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCrc32AndCopy(::System::IO::Stream* arg, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::System::IO::Stream*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_GETCRC32ANDCOPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ComputeCrc32(::System::Int32 arg, ::System::Byte arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_COMPUTECRC32_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 _InternalComputeCrc32(::System::UInt32 arg, ::System::Byte arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32__INTERNALCOMPUTECRC32_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SlurpBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_SLURPBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateCRC(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_UPDATECRC_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCRC(::System::Byte arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_UPDATECRC_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 ReverseBits(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_REVERSEBITS_OFFSET))(arg, nullptr);
		}

		::System::Byte ReverseBits(::System::Byte arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_REVERSEBITS_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateLookupTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_GENERATELOOKUPTABLE_OFFSET))(nullptr);
		}

		::System::UInt32 gf2_matrix_times(::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_GF2_MATRIX_TIMES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void gf2_matrix_square(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_GF2_MATRIX_SQUARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Combine(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_COMBINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_CRC_CRC32_RESET_OFFSET))(nullptr);
		}

	};
}

