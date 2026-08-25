#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Forms { class HTTPFormBase; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_FORMS_HTTPFORMBASE_GET_FIELDS_OFFSET UNITYSDK_OFFSET(0x8B5930)
#define BESTHTTP_FORMS_HTTPFORMBASE_SET_FIELDS_OFFSET UNITYSDK_OFFSET(0x8B5940)
#define BESTHTTP_FORMS_HTTPFORMBASE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x8B5950)
#define BESTHTTP_FORMS_HTTPFORMBASE_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x8B59A0)
#define BESTHTTP_FORMS_HTTPFORMBASE_SET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x8B59B0)
#define BESTHTTP_FORMS_HTTPFORMBASE_GET_HASBINARY_OFFSET UNITYSDK_OFFSET(0x8B59C0)
#define BESTHTTP_FORMS_HTTPFORMBASE_SET_HASBINARY_OFFSET UNITYSDK_OFFSET(0x8B59D0)
#define BESTHTTP_FORMS_HTTPFORMBASE_GET_HASLONGVALUE_OFFSET UNITYSDK_OFFSET(0x8B59E0)
#define BESTHTTP_FORMS_HTTPFORMBASE_SET_HASLONGVALUE_OFFSET UNITYSDK_OFFSET(0x8B59F0)
#define BESTHTTP_FORMS_HTTPFORMBASE_ADDBINARYDATA_OFFSET UNITYSDK_OFFSET(0x8B5A00)
#define BESTHTTP_FORMS_HTTPFORMBASE_ADDBINARYDATA_OFFSET UNITYSDK_OFFSET(0x8B5BF0)
#define BESTHTTP_FORMS_HTTPFORMBASE_ADDBINARYDATA_OFFSET UNITYSDK_OFFSET(0x8B5A20)
#define BESTHTTP_FORMS_HTTPFORMBASE_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x8B5C10)
#define BESTHTTP_FORMS_HTTPFORMBASE_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x8B5C50)
#define BESTHTTP_FORMS_HTTPFORMBASE_COPYFROM_OFFSET UNITYSDK_OFFSET(0x8B5E30)
#define BESTHTTP_FORMS_HTTPFORMBASE_PREPAREREQUEST_OFFSET UNITYSDK_OFFSET(0x8B5ED0)
#define BESTHTTP_FORMS_HTTPFORMBASE_GETDATA_OFFSET UNITYSDK_OFFSET(0x8B5F20)
#define BESTHTTP_FORMS_HTTPFORMBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B5F70)

namespace BestHTTP::Forms
{
	inline static constexpr unsigned int HTTPFormBase_TypeDefinitionIndex = 23330;

	class HTTPFormBase : public Il2CppObject
	{
	public:
		::System::Int32 LongLength; // 0x0
		Il2CppObject* _Fields_k__BackingField; // 0x10
		::System::Boolean _IsChanged_k__BackingField; // 0x18
		::System::Boolean _HasBinary_k__BackingField; // 0x19
		::System::Boolean _HasLongValue_k__BackingField; // 0x1A

		Il2CppObject* get_Fields()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_GET_FIELDS_OFFSET))(nullptr);
		}

		::System::Void set_Fields(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_SET_FIELDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsChanged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_GET_ISCHANGED_OFFSET))(nullptr);
		}

		::System::Void set_IsChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_SET_ISCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasBinary()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_GET_HASBINARY_OFFSET))(nullptr);
		}

		::System::Void set_HasBinary(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_SET_HASBINARY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasLongValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_GET_HASLONGVALUE_OFFSET))(nullptr);
		}

		::System::Void set_HasLongValue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_SET_HASLONGVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void AddBinaryData(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_ADDBINARYDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddBinaryData(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_ADDBINARYDATA_OFFSET))(str, arg, str, nullptr);
		}

		::System::Void AddBinaryData(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_ADDBINARYDATA_OFFSET))(str, arg, str, str, nullptr);
		}

		::System::Void AddField(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_ADDFIELD_OFFSET))(str, str, nullptr);
		}

		::System::Void AddField(::System::String* str, ::System::String* str, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_ADDFIELD_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void CopyFrom(::BestHTTP::Forms::HTTPFormBase* arg)
		{
			((::System::Void(*)(::BestHTTP::Forms::HTTPFormBase*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareRequest(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_PREPAREREQUEST_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_GETDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPFORMBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

