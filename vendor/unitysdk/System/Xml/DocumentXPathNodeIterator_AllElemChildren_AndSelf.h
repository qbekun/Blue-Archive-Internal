#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_ANDSELF_.CTOR_OFFSET UNITYSDK_OFFSET(0x998C6B0)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_ANDSELF_.CTOR_OFFSET UNITYSDK_OFFSET(0x998CEA0)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_ANDSELF_CLONE_OFFSET UNITYSDK_OFFSET(0x998CEB0)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_ANDSELF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x998CF10)

namespace System::Xml
{
	inline static constexpr unsigned int DocumentXPathNodeIterator_AllElemChildren_AndSelf_TypeDefinitionIndex = 27743;

	class DocumentXPathNodeIterator_AllElemChildren_AndSelf : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Xml::DocumentXPathNavigator* arg)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_ANDSELF_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::DocumentXPathNodeIterator_AllElemChildren_AndSelf* arg)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNodeIterator_AllElemChildren_AndSelf*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_ANDSELF_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_ANDSELF_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ALLELEMCHILDREN_ANDSELF_MOVENEXT_OFFSET))(nullptr);
		}

	};
}

