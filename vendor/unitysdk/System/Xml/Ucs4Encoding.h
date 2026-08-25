#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_UCS4ENCODING_GET_WEBNAME_OFFSET UNITYSDK_OFFSET(0x99C5F40)
#define SYSTEM_XML_UCS4ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x99C5F60)
#define SYSTEM_XML_UCS4ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x99C5F70)
#define SYSTEM_XML_UCS4ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x99C5FD0)
#define SYSTEM_XML_UCS4ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x99C5FE0)
#define SYSTEM_XML_UCS4ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x99C5FF0)
#define SYSTEM_XML_UCS4ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x99C6000)
#define SYSTEM_XML_UCS4ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x99C6030)
#define SYSTEM_XML_UCS4ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x99C6080)
#define SYSTEM_XML_UCS4ENCODING_GET_CODEPAGE_OFFSET UNITYSDK_OFFSET(0x99C6090)
#define SYSTEM_XML_UCS4ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x99C60A0)
#define SYSTEM_XML_UCS4ENCODING_GET_UCS4_LITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x99C60B0)
#define SYSTEM_XML_UCS4ENCODING_GET_UCS4_BIGENDIAN_OFFSET UNITYSDK_OFFSET(0x99C61B0)
#define SYSTEM_XML_UCS4ENCODING_GET_UCS4_2143_OFFSET UNITYSDK_OFFSET(0x99C62B0)
#define SYSTEM_XML_UCS4ENCODING_GET_UCS4_3412_OFFSET UNITYSDK_OFFSET(0x99C63B0)
#define SYSTEM_XML_UCS4ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C64B0)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Encoding_TypeDefinitionIndex = 27819;

	class Ucs4Encoding : public Il2CppObject
	{
	public:
		::System::Xml::Ucs4Decoder* ucs4Decoder; // 0x38

		::System::String* get_WebName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GET_WEBNAME_OFFSET))(nullptr);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return (return (::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETDECODER_OFFSET))(nullptr);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETBYTECOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETBYTES_OFFSET))(str, nullptr);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETMAXBYTECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETCHARCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETMAXCHARCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CodePage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GET_CODEPAGE_OFFSET))(nullptr);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return (return (::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETENCODER_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_UCS4_Littleendian()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GET_UCS4_LITTLEENDIAN_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_UCS4_Bigendian()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GET_UCS4_BIGENDIAN_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_UCS4_2143()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GET_UCS4_2143_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_UCS4_3412()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GET_UCS4_3412_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_.CTOR_OFFSET))(nullptr);
		}

	};
}

