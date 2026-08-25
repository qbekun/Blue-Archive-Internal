#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_TERNARYTREEREADONLY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9959FE0)
#define SYSTEM_XML_TERNARYTREEREADONLY_FINDCASEINSENSITIVESTRING_OFFSET UNITYSDK_OFFSET(0x9958A20)

namespace System::Xml
{
	inline static constexpr unsigned int TernaryTreeReadOnly_TypeDefinitionIndex = 27657;

	class TernaryTreeReadOnly : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* nodeBuffer; // 0x10

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TERNARYTREEREADONLY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Byte FindCaseInsensitiveString(::System::String* str)
		{
			return (return (::System::Byte(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TERNARYTREEREADONLY_FINDCASEINSENSITIVESTRING_OFFSET))(str, nullptr);
		}

	};
}

