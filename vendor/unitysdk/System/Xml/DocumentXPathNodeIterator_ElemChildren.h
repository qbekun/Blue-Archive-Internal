#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_.CTOR_OFFSET UNITYSDK_OFFSET(0x998C560)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_.CTOR_OFFSET UNITYSDK_OFFSET(0x998D310)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_CLONE_OFFSET UNITYSDK_OFFSET(0x998D360)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_MATCH_OFFSET UNITYSDK_OFFSET(0x998D3E0)

namespace System::Xml
{
	inline static constexpr unsigned int DocumentXPathNodeIterator_ElemChildren_TypeDefinitionIndex = 27746;

	class DocumentXPathNodeIterator_ElemChildren : public Il2CppObject
	{
	public:
		::System::String* localNameAtom; // 0x28
		::System::String* nsAtom; // 0x30

		::System::Void .ctor(::System::Xml::DocumentXPathNavigator* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNavigator*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void .ctor(::System::Xml::DocumentXPathNodeIterator_ElemChildren* arg)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNodeIterator_ElemChildren*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Match(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMCHILDREN_MATCH_OFFSET))(arg, nullptr);
		}

	};
}

