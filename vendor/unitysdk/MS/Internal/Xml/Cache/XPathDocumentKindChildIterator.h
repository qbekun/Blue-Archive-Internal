#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::Cache { class XPathDocumentNavigator; }
namespace MS::Internal::Xml::Cache { class XPathDocumentKindChildIterator; }

#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDCHILDITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9954600)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDCHILDITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9954680)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDCHILDITERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x99546B0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDCHILDITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9954710)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathDocumentKindChildIterator_TypeDefinitionIndex = 28323;

	class XPathDocumentKindChildIterator : public Il2CppObject
	{
	public:
		::System::Xml::XPath::XPathNodeType* _typ; // 0x28

		::System::Void .ctor(::MS::Internal::Xml::Cache::XPathDocumentNavigator* arg, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::Cache::XPathDocumentNavigator*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDCHILDITERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::Cache::XPathDocumentKindChildIterator* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::Cache::XPathDocumentKindChildIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDCHILDITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDCHILDITERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTKINDCHILDITERATOR_MOVENEXT_OFFSET))(nullptr);
		}

	};
}

