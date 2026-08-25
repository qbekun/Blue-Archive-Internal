#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_.CTOR_OFFSET UNITYSDK_OFFSET(0x998C520)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_.CTOR_OFFSET UNITYSDK_OFFSET(0x998D450)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_CLONE_OFFSET UNITYSDK_OFFSET(0x998D4A0)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x998D520)

namespace System::Xml
{
	inline static constexpr unsigned int DocumentXPathNodeIterator_ElemChildren_AndSelf_TypeDefinitionIndex = 27747;

	class DocumentXPathNodeIterator_ElemChildren_AndSelf : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Xml::DocumentXPathNavigator* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNavigator*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void .ctor(::System::Xml::DocumentXPathNodeIterator_ElemChildren_AndSelf* arg)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNodeIterator_ElemChildren_AndSelf*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_MOVENEXT_OFFSET))(nullptr);
		}

	};
}

