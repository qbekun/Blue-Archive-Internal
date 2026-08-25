#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_NOLOCALNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x998C4C0)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_NOLOCALNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x998D130)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_NOLOCALNAME_CLONE_OFFSET UNITYSDK_OFFSET(0x998D170)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_NOLOCALNAME_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x998D1E0)

namespace System::Xml
{
	inline static constexpr unsigned int DocumentXPathNodeIterator_ElemChildren_AndSelf_NoLocalName_TypeDefinitionIndex = 27745;

	class DocumentXPathNodeIterator_ElemChildren_AndSelf_NoLocalName : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Xml::DocumentXPathNavigator* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNavigator*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_NOLOCALNAME_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Xml::DocumentXPathNodeIterator_ElemChildren_AndSelf_NoLocalName* arg)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNodeIterator_ElemChildren_AndSelf_NoLocalName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_NOLOCALNAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_NOLOCALNAME_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_ANDSELF_NOLOCALNAME_MOVENEXT_OFFSET))(nullptr);
		}

	};
}

