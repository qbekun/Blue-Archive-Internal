#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTEXECUTEJAVASCRIPT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB7040)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTEXECUTEJAVASCRIPT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB9580)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTEXECUTEJAVASCRIPT_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB9690)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestExecuteJavaScript_TypeDefinitionIndex = 25465;

	class RequestExecuteJavaScript : public Il2CppObject
	{
	public:
		::System::Int32 sequence; // 0x18
		::System::Boolean onDocumentLoad; // 0x1C
		::System::String* code; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTEXECUTEJAVASCRIPT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTEXECUTEJAVASCRIPT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTEXECUTEJAVASCRIPT_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

