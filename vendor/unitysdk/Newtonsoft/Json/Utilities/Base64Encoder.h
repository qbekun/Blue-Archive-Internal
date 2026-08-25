#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x949AD40)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_VALIDATEENCODE_OFFSET UNITYSDK_OFFSET(0x949ADD0)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x949AEB0)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_STORELEFTOVERBYTES_OFFSET UNITYSDK_OFFSET(0x949B150)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_FULFILLFROMLEFTOVER_OFFSET UNITYSDK_OFFSET(0x949B050)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_FLUSH_OFFSET UNITYSDK_OFFSET(0x949B250)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x949B120)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_ENCODEASYNC_OFFSET UNITYSDK_OFFSET(0x949B300)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_WRITECHARSASYNC_OFFSET UNITYSDK_OFFSET(0x949B440)
#define NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x949B4C0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int Base64Encoder_TypeDefinitionIndex = 31809;

	class Base64Encoder : public Il2CppObject
	{
	public:
		::System::Int32 Base64LineSize; // 0x0
		::System::Int32 LineSizeInBytes; // 0x0
		::Il2CppArray<::System::Object*>* _charsLine; // 0x10
		::System::IO::TextWriter* _writer; // 0x18
		::Il2CppArray<::System::Object*>* _leftOverBytes; // 0x20
		::System::Int32 _leftOverBytesCount; // 0x28

		::System::Void .ctor(::System::IO::TextWriter* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateEncode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_VALIDATEENCODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Encode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_ENCODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StoreLeftOverBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, int32_t&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_STORELEFTOVERBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean FulfillFromLeftover(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_FULFILLFROMLEFTOVER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_FLUSH_OFFSET))(nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* EncodeAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_ENCODEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteCharsAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_WRITECHARSASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BASE64ENCODER_FLUSHASYNC_OFFSET))(arg, nullptr);
		}

	};
}

