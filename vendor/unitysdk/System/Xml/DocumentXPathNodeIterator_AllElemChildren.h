#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_.CTOR_OFFSET UNITYSDK_OFFSET(0x998C6C0)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_.CTOR_OFFSET UNITYSDK_OFFSET(0x998CDF0)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_CLONE_OFFSET UNITYSDK_OFFSET(0x998CE00)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_MATCH_OFFSET UNITYSDK_OFFSET(0x998CE60)

namespace System::Xml
{
	inline static constexpr unsigned int DocumentXPathNodeIterator_AllElemChildren_TypeDefinitionIndex = 27742;

	class DocumentXPathNodeIterator_AllElemChildren : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Xml::DocumentXPathNavigator* arg)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::DocumentXPathNodeIterator_AllElemChildren* arg)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNodeIterator_AllElemChildren*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Match(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_MATCH_OFFSET))(arg, nullptr);
		}

	};
}

