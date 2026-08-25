#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_DECOMPRESSION_ZLIB_SHAREDUTILS_READINPUT_OFFSET UNITYSDK_OFFSET(0x8E6A70)
#define BESTHTTP_DECOMPRESSION_ZLIB_SHAREDUTILS_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x8E6B80)
#define BESTHTTP_DECOMPRESSION_ZLIB_SHAREDUTILS_TOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x8E6BC0)
#define BESTHTTP_DECOMPRESSION_ZLIB_SHAREDUTILS_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E6C00)
#define BESTHTTP_DECOMPRESSION_ZLIB_SHAREDUTILS_URSHIFT_OFFSET UNITYSDK_OFFSET(0x8E6050)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int SharedUtils_TypeDefinitionIndex = 23381;

	class SharedUtils : public Il2CppObject
	{
	public:
		::System::Int32 ReadInput(::System::IO::TextReader* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::IO::TextReader*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_SHAREDUTILS_READINPUT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToByteArray(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_SHAREDUTILS_TOBYTEARRAY_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToCharArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_SHAREDUTILS_TOCHARARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_SHAREDUTILS_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 URShift(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_SHAREDUTILS_URSHIFT_OFFSET))(arg, arg, nullptr);
		}

	};
}

