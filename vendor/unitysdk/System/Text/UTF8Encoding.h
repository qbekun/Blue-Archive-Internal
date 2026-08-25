#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_UTF8ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x916A5D0)
#define SYSTEM_TEXT_UTF8ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x916A600)
#define SYSTEM_TEXT_UTF8ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x916A630)
#define SYSTEM_TEXT_UTF8ENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x916A680)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x916A760)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x916A900)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x916A9A0)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x916AA80)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x916AD10)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x916AFA0)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x916B0C0)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x916B260)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x916B340)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x916B5D0)
#define SYSTEM_TEXT_UTF8ENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x916B6F0)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x916B8B0)
#define SYSTEM_TEXT_UTF8ENCODING_PTRDIFF_OFFSET UNITYSDK_OFFSET(0x916C110)
#define SYSTEM_TEXT_UTF8ENCODING_PTRDIFF_OFFSET UNITYSDK_OFFSET(0x916C120)
#define SYSTEM_TEXT_UTF8ENCODING_INRANGE_OFFSET UNITYSDK_OFFSET(0x916C100)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x916C130)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x916CAE0)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x916D1E0)
#define SYSTEM_TEXT_UTF8ENCODING_FALLBACKINVALIDBYTESEQUENCE_OFFSET UNITYSDK_OFFSET(0x916DBD0)
#define SYSTEM_TEXT_UTF8ENCODING_FALLBACKINVALIDBYTESEQUENCE_OFFSET UNITYSDK_OFFSET(0x916D190)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTESUNKNOWN_OFFSET UNITYSDK_OFFSET(0x916DC40)
#define SYSTEM_TEXT_UTF8ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x916DE90)
#define SYSTEM_TEXT_UTF8ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x916DEF0)
#define SYSTEM_TEXT_UTF8ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x916DF50)
#define SYSTEM_TEXT_UTF8ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x916E050)
#define SYSTEM_TEXT_UTF8ENCODING_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x916E150)
#define SYSTEM_TEXT_UTF8ENCODING_GET_PREAMBLE_OFFSET UNITYSDK_OFFSET(0x916E240)
#define SYSTEM_TEXT_UTF8ENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x916E3B0)
#define SYSTEM_TEXT_UTF8ENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x916E470)
#define SYSTEM_TEXT_UTF8ENCODING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x916E4D0)

namespace System::Text
{
	inline static constexpr unsigned int UTF8Encoding_TypeDefinitionIndex = 24259;

	class UTF8Encoding : public Il2CppObject
	{
	public:
		UTF8EncodingSealed* s_default; // 0x0
		::Il2CppArray<::System::Object*>* s_preamble; // 0x8
		::System::Boolean _emitUTF8Identifier; // 0x38
		::System::Boolean _isThrowException; // 0x39

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetDefaultFallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_SETDEFAULTFALLBACKS_OFFSET))(nullptr);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_OFFSET))(str, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTES_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* GetString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg, ::System::Text::EncoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Text::EncoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 PtrDiff(::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_PTRDIFF_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 PtrDiff(::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_PTRDIFF_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean InRange(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_INRANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Text::EncoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Text::EncoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg, ::System::Text::DecoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Text::DecoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Text::DecoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Text::DecoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean FallbackInvalidByteSequence(::System::Object*&* arg, ::System::Int32 arg, ::System::Text::DecoderFallbackBuffer* arg, ::System::Object*&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*&*, ::System::Int32, ::System::Text::DecoderFallbackBuffer*, ::System::Object*&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_FALLBACKINVALIDBYTESEQUENCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 FallbackInvalidByteSequence(::System::Object** arg, ::System::Int32 arg, ::System::Text::DecoderFallbackBuffer* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Text::DecoderFallbackBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_FALLBACKINVALIDBYTESEQUENCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytesUnknown(::System::Object*&* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Object*&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTESUNKNOWN_OFFSET))(arg, arg, nullptr);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return (return (::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETDECODER_OFFSET))(nullptr);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return (return (::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETENCODER_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETMAXBYTECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETMAXCHARCOUNT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPreamble()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETPREAMBLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Preamble()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GET_PREAMBLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

