#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_FORMS_HTTPFIELDDATA_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0x8B57D0)
#define BESTHTTP_FORMS_HTTPFIELDDATA_SET_BINARY_OFFSET UNITYSDK_OFFSET(0x8B57E0)
#define BESTHTTP_FORMS_HTTPFIELDDATA_GET_BINARY_OFFSET UNITYSDK_OFFSET(0x8B57F0)
#define BESTHTTP_FORMS_HTTPFIELDDATA_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x8B5800)
#define BESTHTTP_FORMS_HTTPFIELDDATA_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x8B5810)
#define BESTHTTP_FORMS_HTTPFIELDDATA_GET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x8B5820)
#define BESTHTTP_FORMS_HTTPFIELDDATA_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x8B58B0)
#define BESTHTTP_FORMS_HTTPFIELDDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x8B58C0)
#define BESTHTTP_FORMS_HTTPFIELDDATA_SET_MIMETYPE_OFFSET UNITYSDK_OFFSET(0x8B58D0)
#define BESTHTTP_FORMS_HTTPFIELDDATA_GET_MIMETYPE_OFFSET UNITYSDK_OFFSET(0x8B58E0)
#define BESTHTTP_FORMS_HTTPFIELDDATA_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x8B58F0)
#define BESTHTTP_FORMS_HTTPFIELDDATA_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x8B5900)
#define BESTHTTP_FORMS_HTTPFIELDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B5910)
#define BESTHTTP_FORMS_HTTPFIELDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8B5920)

namespace BestHTTP::Forms
{
	inline static constexpr unsigned int HTTPFieldData_TypeDefinitionIndex = 23329;

	class HTTPFieldData : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::String* _FileName_k__BackingField; // 0x18
		::System::String* _MimeType_k__BackingField; // 0x20
		::System::Text::Encoding* _Encoding_k__BackingField; // 0x28
		::System::String* _Text_k__BackingField; // 0x30
		::Il2CppArray<::System::Object*>* _Binary_k__BackingField; // 0x38

		::System::Void set_Encoding(::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_SET_ENCODING_OFFSET))(arg, nullptr);
		}

		::System::Void set_Binary(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_SET_BINARY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Binary()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_GET_BINARY_OFFSET))(nullptr);
		}

		::System::String* get_FileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_SET_TEXT_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Payload()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_GET_PAYLOAD_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void set_MimeType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_SET_MIMETYPE_OFFSET))(str, nullptr);
		}

		::System::String* get_MimeType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_GET_MIMETYPE_OFFSET))(nullptr);
		}

		::System::Void set_FileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_SET_FILENAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFIELDDATA_GET_NAME_OFFSET))(nullptr);
		}

	};
}

