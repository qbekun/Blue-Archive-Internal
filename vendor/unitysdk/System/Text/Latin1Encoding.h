#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_LATIN1ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x915FEE0)
#define SYSTEM_TEXT_LATIN1ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x915FEF0)
#define SYSTEM_TEXT_LATIN1ENCODING_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x915FF40)
#define SYSTEM_TEXT_LATIN1ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9160010)
#define SYSTEM_TEXT_LATIN1ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9160330)
#define SYSTEM_TEXT_LATIN1ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9160850)
#define SYSTEM_TEXT_LATIN1ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x9160860)
#define SYSTEM_TEXT_LATIN1ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9160910)
#define SYSTEM_TEXT_LATIN1ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x9160A10)
#define SYSTEM_TEXT_LATIN1ENCODING_GETBESTFITUNICODETOBYTESDATA_OFFSET UNITYSDK_OFFSET(0x9160B00)
#define SYSTEM_TEXT_LATIN1ENCODING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9160B50)

namespace System::Text
{
	inline static constexpr unsigned int Latin1Encoding_TypeDefinitionIndex = 24245;

	class Latin1Encoding : public Il2CppObject
	{
	public:
		::System::Text::Latin1Encoding* s_default; // 0x0
		::Il2CppArray<::System::Object*>* arrayCharBestFit; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetByteCount(::System::Object** arg, ::System::Int32 arg, ::System::Text::EncoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Text::EncoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetBytes(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Text::EncoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Text::EncoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetCharCount(::System::Object** arg, ::System::Int32 arg, ::System::Text::DecoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Text::DecoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Text::DecoderNLS* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Text::DecoderNLS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETMAXBYTECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETMAXCHARCOUNT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBestFitUnicodeToBytesData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_GETBESTFITUNICODETOBYTESDATA_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_LATIN1ENCODING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

