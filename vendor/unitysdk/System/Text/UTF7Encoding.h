#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_UTF7ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x91681E0)
#define SYSTEM_TEXT_UTF7ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9168210)
#define SYSTEM_TEXT_UTF7ENCODING_MAKETABLES_OFFSET UNITYSDK_OFFSET(0x9168240)
#define SYSTEM_TEXT_UTF7ENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x91684C0)
#define SYSTEM_TEXT_UTF7ENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9168590)
#define SYSTEM_TEXT_UTF7ENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9168650)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x91686C0)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9168860)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9168900)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x91689E0)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9168C70)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9168F00)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9169020)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x91691C0)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x91692A0)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x9169530)
#define SYSTEM_TEXT_UTF7ENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9169650)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9169810)
#define SYSTEM_TEXT_UTF7ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9169840)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9169C40)
#define SYSTEM_TEXT_UTF7ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x9169C70)
#define SYSTEM_TEXT_UTF7ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x9169F70)
#define SYSTEM_TEXT_UTF7ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x916A070)
#define SYSTEM_TEXT_UTF7ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x916A170)
#define SYSTEM_TEXT_UTF7ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x916A230)
#define SYSTEM_TEXT_UTF7ENCODING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x916A2C0)

namespace System::Text
{
	inline static constexpr unsigned int UTF7Encoding_TypeDefinitionIndex = 24255;

	class UTF7Encoding : public Il2CppObject
	{
	public:
		::System::Text::UTF7Encoding* s_default; // 0x0
		::Il2CppArray<::System::Object*>* _base64Bytes; // 0x38
		::Il2CppArray<::System::Object*>* _base64Values; // 0x40
		::Il2CppArray<::System::Object*>* _directEncode; // 0x48
		::System::Boolean _allowOptionals; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void MakeTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_MAKETABLES_OFFSET))(nullptr);
		}

		::System::Void SetDefaultFallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_SETDEFAULTFALLBACKS_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_OFFSET))(str, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTES_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* GetString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg, ::System::Text::EncoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Text::EncoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Text::EncoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Text::EncoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg, ::System::Text::DecoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Text::DecoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Text::DecoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Text::DecoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return (return (::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETDECODER_OFFSET))(nullptr);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return (return (::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETENCODER_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETMAXBYTECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_GETMAXCHARCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

