#pragma once
#include "../../../unitysdk.h"

#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_COMPUTECRC32_OFFSET UNITYSDK_OFFSET(0x9056AC0)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_.CTOR_OFFSET UNITYSDK_OFFSET(0x904D2C0)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_RESET_OFFSET UNITYSDK_OFFSET(0x904E780)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x904E720)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_UPDATE_OFFSET UNITYSDK_OFFSET(0x9056B60)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_UPDATE_OFFSET UNITYSDK_OFFSET(0x9056C10)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_UPDATE_OFFSET UNITYSDK_OFFSET(0x9050170)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_UPDATE_OFFSET UNITYSDK_OFFSET(0x9056C80)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_SLOWUPDATELOOP_OFFSET UNITYSDK_OFFSET(0x9057140)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9057260)

namespace ICSharpCode::SharpZipLib::Checksum
{
	inline static constexpr unsigned int Crc32_TypeDefinitionIndex = 37137;

	class Crc32 : public Il2CppObject
	{
	public:
		::System::UInt32 crcInit; // 0x0
		::System::UInt32 crcXor; // 0x4
		::Il2CppArray<::System::Object*>* crcTable; // 0x8
		::System::UInt32 checkValue; // 0x10

		::System::UInt32 ComputeCrc32(::System::UInt32 arg, ::System::Byte arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_COMPUTECRC32_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_RESET_OFFSET))(nullptr);
		}

		::System::Int64 get_Value()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Update(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_UPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SlowUpdateLoop(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_SLOWUPDATELOOP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRC32_.CCTOR_OFFSET))(nullptr);
		}

	};
}

