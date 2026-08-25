#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_ASCIIENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x93FFC30)
#define SYSTEM_TEXT_ASCIIENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x93FFC40)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x93FFC80)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x93FFE20)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x93FFEC0)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x93FFFA0)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9400230)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x94004C0)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x94005E0)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9400780)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x9400860)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x9400AF0)
#define SYSTEM_TEXT_ASCIIENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9400C10)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9400DD0)
#define SYSTEM_TEXT_ASCIIENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x94011E0)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x94017A0)
#define SYSTEM_TEXT_ASCIIENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x94019E0)
#define SYSTEM_TEXT_ASCIIENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9401EE0)
#define SYSTEM_TEXT_ASCIIENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9401FE0)
#define SYSTEM_TEXT_ASCIIENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x94020D0)
#define SYSTEM_TEXT_ASCIIENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x9402130)
#define SYSTEM_TEXT_ASCIIENCODING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9402190)

namespace System::Text
{
	inline static constexpr unsigned int ASCIIEncoding_TypeDefinitionIndex = 24220;

	class ASCIIEncoding : public Il2CppObject
	{
	public:
		ASCIIEncodingSealed* s_default; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultFallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_SETDEFAULTFALLBACKS_OFFSET))(nullptr);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_OFFSET))(str, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTES_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* GetString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg, ::System::Text::EncoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Text::EncoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Text::EncoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Text::EncoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg, ::System::Text::DecoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Text::DecoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Text::DecoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Text::DecoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETMAXBYTECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETMAXCHARCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return (return (::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETDECODER_OFFSET))(nullptr);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return (return (::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_GETENCODER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ASCIIENCODING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

