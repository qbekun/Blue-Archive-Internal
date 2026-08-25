#pragma once
#include "unitysdk.h"

#define HTTP_REQUEST_HEADER_ID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A48580)
#define HTTP_REQUEST_HEADER_ID_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A65800)

	inline static constexpr unsigned int HTTP_REQUEST_HEADER_ID_TypeDefinitionIndex = 29748;

	class HTTP_REQUEST_HEADER_ID : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_Strings; // 0x0

		::System::String* ToString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HTTP_REQUEST_HEADER_ID_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HTTP_REQUEST_HEADER_ID_.CCTOR_OFFSET))(nullptr);
		}

	};

