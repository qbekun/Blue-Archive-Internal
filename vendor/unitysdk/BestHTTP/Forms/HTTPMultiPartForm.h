#pragma once
#include "../../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_FORMS_HTTPMULTIPARTFORM_PREPAREREQUEST_OFFSET UNITYSDK_OFFSET(0x8B5F80)
#define BESTHTTP_FORMS_HTTPMULTIPARTFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B5FF0)
#define BESTHTTP_FORMS_HTTPMULTIPARTFORM_GETDATA_OFFSET UNITYSDK_OFFSET(0x8B6090)

namespace BestHTTP::Forms
{
	inline static constexpr unsigned int HTTPMultiPartForm_TypeDefinitionIndex = 23332;

	class HTTPMultiPartForm : public Il2CppObject
	{
	public:
		::System::String* Boundary; // 0x20
		::Il2CppArray<::System::Object*>* CachedData; // 0x28

		::System::Void PrepareRequest(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPMULTIPARTFORM_PREPAREREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPMULTIPARTFORM_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_FORMS_HTTPMULTIPARTFORM_GETDATA_OFFSET))(nullptr);
		}

	};
}

