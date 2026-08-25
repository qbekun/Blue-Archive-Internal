#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_HTMLTERNARYTREE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x98509B0)

namespace System::Xml
{
	inline static constexpr unsigned int HtmlTernaryTree_TypeDefinitionIndex = 27634;

	class HtmlTernaryTree : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* htmlElements; // 0x0
		::Il2CppArray<::System::Object*>* htmlAttributes; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLTERNARYTREE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

