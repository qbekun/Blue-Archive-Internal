#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::Cache { class XPathDocumentNavigator; }
namespace MS::Internal::Xml::Cache { class XPathDocumentBaseIterator; }

#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTBASEITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x99541A0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTBASEITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x99542E0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTBASEITERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9954370)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTBASEITERATOR_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x9954380)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathDocumentBaseIterator_TypeDefinitionIndex = 28321;

	class XPathDocumentBaseIterator : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::Cache::XPathDocumentNavigator* ctxt; // 0x18
		::System::Int32 pos; // 0x20

		::System::Void .ctor(::MS::Internal::Xml::Cache::XPathDocumentNavigator* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::Cache::XPathDocumentNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTBASEITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::Cache::XPathDocumentBaseIterator* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::Cache::XPathDocumentBaseIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTBASEITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTBASEITERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTBASEITERATOR_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

	};
}

