#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x998CAD0)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x998CB80)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_MATCH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x998CC40)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x998CC50)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x998CC60)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x998CC70)

namespace System::Xml
{
	inline static constexpr unsigned int DocumentXPathNodeIterator_ElemDescendants_TypeDefinitionIndex = 27741;

	class DocumentXPathNodeIterator_ElemDescendants : public Il2CppObject
	{
	public:
		::System::Xml::DocumentXPathNavigator* nav; // 0x18
		::System::Int32 level; // 0x20
		::System::Int32 position; // 0x24

		::System::Void .ctor(::System::Xml::DocumentXPathNavigator* arg)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::DocumentXPathNodeIterator_ElemDescendants* arg)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNodeIterator_ElemDescendants*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Match(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_MATCH_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Void SetPosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_SETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_ELEMDESCENDANTS_MOVENEXT_OFFSET))(nullptr);
		}

	};
}

