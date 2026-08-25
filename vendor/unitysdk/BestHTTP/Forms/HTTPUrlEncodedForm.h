#pragma once
#include "../../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_FORMS_HTTPURLENCODEDFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B6B70)
#define BESTHTTP_FORMS_HTTPURLENCODEDFORM_GETDATA_OFFSET UNITYSDK_OFFSET(0x8B6B80)
#define BESTHTTP_FORMS_HTTPURLENCODEDFORM_PREPAREREQUEST_OFFSET UNITYSDK_OFFSET(0x8B6FD0)
#define BESTHTTP_FORMS_HTTPURLENCODEDFORM_ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x8B6E20)

namespace BestHTTP::Forms
{
	inline static constexpr unsigned int HTTPUrlEncodedForm_TypeDefinitionIndex = 23333;

	class HTTPUrlEncodedForm : public Il2CppObject
	{
	public:
		::System::Int32 EscapeTreshold; // 0x0
		::Il2CppArray<::System::Object*>* CachedData; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPURLENCODEDFORM_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPURLENCODEDFORM_GETDATA_OFFSET))(nullptr);
		}

		::System::Void PrepareRequest(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPURLENCODEDFORM_PREPAREREQUEST_OFFSET))(arg, nullptr);
		}

		::System::String* EscapeString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPURLENCODEDFORM_ESCAPESTRING_OFFSET))(str, nullptr);
		}

	};
}

