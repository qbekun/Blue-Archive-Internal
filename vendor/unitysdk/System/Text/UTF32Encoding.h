#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_UTF32ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9165340)
#define SYSTEM_TEXT_UTF32ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x91653E0)
#define SYSTEM_TEXT_UTF32ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9165370)
#define SYSTEM_TEXT_UTF32ENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x9165420)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9165500)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x91656A0)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9165740)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9165820)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9165AB0)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9165D40)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9165E60)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9166000)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x91660E0)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x9166370)
#define SYSTEM_TEXT_UTF32ENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9166490)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9166650)
#define SYSTEM_TEXT_UTF32ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9166AD0)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9166FA0)
#define SYSTEM_TEXT_UTF32ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x9167390)
#define SYSTEM_TEXT_UTF32ENCODING_GETSURROGATE_OFFSET UNITYSDK_OFFSET(0x9166F80)
#define SYSTEM_TEXT_UTF32ENCODING_GETHIGHSURROGATE_OFFSET UNITYSDK_OFFSET(0x9167870)
#define SYSTEM_TEXT_UTF32ENCODING_GETLOWSURROGATE_OFFSET UNITYSDK_OFFSET(0x9167880)
#define SYSTEM_TEXT_UTF32ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x9167890)
#define SYSTEM_TEXT_UTF32ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x9167990)
#define SYSTEM_TEXT_UTF32ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9167A30)
#define SYSTEM_TEXT_UTF32ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9167B30)
#define SYSTEM_TEXT_UTF32ENCODING_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x9167C10)
#define SYSTEM_TEXT_UTF32ENCODING_GET_PREAMBLE_OFFSET UNITYSDK_OFFSET(0x9167D20)
#define SYSTEM_TEXT_UTF32ENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9167EC0)
#define SYSTEM_TEXT_UTF32ENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9167F70)
#define SYSTEM_TEXT_UTF32ENCODING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9168000)

namespace System::Text
{
	inline static constexpr unsigned int UTF32Encoding_TypeDefinitionIndex = 24250;

	class UTF32Encoding : public Il2CppObject
	{
	public:
		::System::Text::UTF32Encoding* s_default; // 0x0
		::System::Text::UTF32Encoding* s_bigEndianDefault; // 0x8
		::Il2CppArray<::System::Object*>* s_bigEndianPreamble; // 0x10
		::Il2CppArray<::System::Object*>* s_littleEndianPreamble; // 0x18
		::System::Boolean _emitUTF32ByteOrderMark; // 0x38
		::System::Boolean _isThrowException; // 0x39
		::System::Boolean _bigEndian; // 0x3A

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetDefaultFallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_SETDEFAULTFALLBACKS_OFFSET))(nullptr);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_OFFSET))(str, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTES_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* GetString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg, ::System::Text::EncoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Text::EncoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Text::EncoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Text::EncoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg, ::System::Text::DecoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Text::DecoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Text::DecoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Text::DecoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 GetSurrogate(::System::Char arg, ::System::Char arg)
		{
			return (return (::System::UInt32(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETSURROGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Char GetHighSurrogate(::System::UInt32 arg)
		{
			return (return (::System::Char(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETHIGHSURROGATE_OFFSET))(arg, nullptr);
		}

		::System::Char GetLowSurrogate(::System::UInt32 arg)
		{
			return (return (::System::Char(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETLOWSURROGATE_OFFSET))(arg, nullptr);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return (return (::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETDECODER_OFFSET))(nullptr);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return (return (::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETENCODER_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETMAXBYTECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETMAXCHARCOUNT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPreamble()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETPREAMBLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Preamble()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GET_PREAMBLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF32ENCODING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

