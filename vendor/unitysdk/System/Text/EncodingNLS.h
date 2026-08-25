#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_ENCODINGNLS_.CTOR_OFFSET UNITYSDK_OFFSET(0x915E7F0)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x915E800)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x915E9A0)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x915EA40)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTES_OFFSET UNITYSDK_OFFSET(0x915EB20)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTES_OFFSET UNITYSDK_OFFSET(0x915EDB0)
#define SYSTEM_TEXT_ENCODINGNLS_GETBYTES_OFFSET UNITYSDK_OFFSET(0x915F040)
#define SYSTEM_TEXT_ENCODINGNLS_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x915F160)
#define SYSTEM_TEXT_ENCODINGNLS_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x915F300)
#define SYSTEM_TEXT_ENCODINGNLS_GETCHARS_OFFSET UNITYSDK_OFFSET(0x915F3E0)
#define SYSTEM_TEXT_ENCODINGNLS_GETCHARS_OFFSET UNITYSDK_OFFSET(0x915F670)
#define SYSTEM_TEXT_ENCODINGNLS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x915F790)
#define SYSTEM_TEXT_ENCODINGNLS_GETDECODER_OFFSET UNITYSDK_OFFSET(0x915F950)
#define SYSTEM_TEXT_ENCODINGNLS_GETENCODER_OFFSET UNITYSDK_OFFSET(0x915F9F0)

namespace System::Text
{
	inline static constexpr unsigned int EncodingNLS_TypeDefinitionIndex = 24243;

	class EncodingNLS : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_OFFSET))(str, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTES_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETBYTES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETCHARCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETCHARS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* GetString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return (return (::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETDECODER_OFFSET))(nullptr);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return (return (::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGNLS_GETENCODER_OFFSET))(nullptr);
		}

	};
}

