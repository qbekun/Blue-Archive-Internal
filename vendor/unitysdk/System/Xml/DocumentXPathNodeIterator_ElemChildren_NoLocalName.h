#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_NOLOCALNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x998C4F0)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_NOLOCALNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x998D040)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_NOLOCALNAME_CLONE_OFFSET UNITYSDK_OFFSET(0x998D080)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_NOLOCALNAME_MATCH_OFFSET UNITYSDK_OFFSET(0x998D0F0)

namespace System::Xml
{
	inline static constexpr unsigned int DocumentXPathNodeIterator_ElemChildren_NoLocalName_TypeDefinitionIndex = 27744;

	class DocumentXPathNodeIterator_ElemChildren_NoLocalName : public Il2CppObject
	{
	public:
		::System::String* nsAtom; // 0x28

		::System::Void .ctor(::System::Xml::DocumentXPathNavigator* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNavigator*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_NOLOCALNAME_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Xml::DocumentXPathNodeIterator_ElemChildren_NoLocalName* arg)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNodeIterator_ElemChildren_NoLocalName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_NOLOCALNAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_NOLOCALNAME_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Match(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_NOLOCALNAME_MATCH_OFFSET))(arg, nullptr);
		}

	};
}

