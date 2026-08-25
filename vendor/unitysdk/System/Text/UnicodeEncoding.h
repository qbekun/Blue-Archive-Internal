#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_UNICODEENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x916E7B0)
#define SYSTEM_TEXT_UNICODEENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x916E800)
#define SYSTEM_TEXT_UNICODEENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x916E870)
#define SYSTEM_TEXT_UNICODEENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x916E9A0)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x916EA90)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x916EC30)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x916ECD0)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x916EDB0)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x916F040)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x916F2D0)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x916F3F0)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x916F590)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x916F670)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x916F900)
#define SYSTEM_TEXT_UNICODEENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x916FA20)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x916FBE0)
#define SYSTEM_TEXT_UNICODEENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x91704D0)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9170E60)
#define SYSTEM_TEXT_UNICODEENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x91716A0)
#define SYSTEM_TEXT_UNICODEENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x91723C0)
#define SYSTEM_TEXT_UNICODEENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x9172420)
#define SYSTEM_TEXT_UNICODEENCODING_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x9172490)
#define SYSTEM_TEXT_UNICODEENCODING_GET_PREAMBLE_OFFSET UNITYSDK_OFFSET(0x91725A0)
#define SYSTEM_TEXT_UNICODEENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9172740)
#define SYSTEM_TEXT_UNICODEENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9172840)
#define SYSTEM_TEXT_UNICODEENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9172940)
#define SYSTEM_TEXT_UNICODEENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9172A50)
#define SYSTEM_TEXT_UNICODEENCODING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9172AE0)

namespace System::Text
{
	inline static constexpr unsigned int UnicodeEncoding_TypeDefinitionIndex = 24261;

	class UnicodeEncoding : public Il2CppObject
	{
	public:
		::System::Text::UnicodeEncoding* s_bigEndianDefault; // 0x0
		::System::Text::UnicodeEncoding* s_littleEndianDefault; // 0x8
		::Il2CppArray<::System::Object*>* s_bigEndianPreamble; // 0x10
		::Il2CppArray<::System::Object*>* s_littleEndianPreamble; // 0x18
		::System::Boolean isThrowException; // 0x38
		::System::Boolean bigEndian; // 0x39
		::System::Boolean byteOrderMark; // 0x3A
		::System::UInt64 highLowPatternMask; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetDefaultFallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_SETDEFAULTFALLBACKS_OFFSET))(nullptr);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_OFFSET))(str, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTES_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* GetString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg, ::System::Text::EncoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Text::EncoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Text::EncoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Text::EncoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg, ::System::Text::DecoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Text::DecoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Text::DecoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Text::DecoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return (return (::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETENCODER_OFFSET))(nullptr);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return (return (::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETDECODER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPreamble()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETPREAMBLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Preamble()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GET_PREAMBLE_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETMAXBYTECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETMAXCHARCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UNICODEENCODING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

