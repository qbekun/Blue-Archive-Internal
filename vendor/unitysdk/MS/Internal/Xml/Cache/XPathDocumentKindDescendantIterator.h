#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::Cache { class XPathDocumentNavigator; }
namespace MS::Internal::Xml::Cache { class XPathDocumentKindDescendantIterator; }

#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDDESCENDANTITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9954BB0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDDESCENDANTITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9954CC0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDDESCENDANTITERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x9954D10)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDDESCENDANTITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9954D90)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathDocumentKindDescendantIterator_TypeDefinitionIndex = 28325;

	class XPathDocumentKindDescendantIterator : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::Cache::XPathDocumentNavigator* _end; // 0x28
		::System::Xml::XPath::XPathNodeType* _typ; // 0x30
		::System::Boolean _matchSelf; // 0x34

		::System::Void .ctor(::MS::Internal::Xml::Cache::XPathDocumentNavigator* arg, ::System::Xml::XPath::XPathNodeType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::Cache::XPathDocumentNavigator*, ::System::Xml::XPath::XPathNodeType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDDESCENDANTITERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::Cache::XPathDocumentKindDescendantIterator* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::Cache::XPathDocumentKindDescendantIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDDESCENDANTITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDDESCENDANTITERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDDESCENDANTITERATOR_MOVENEXT_OFFSET))(nullptr);
		}

	};
}

