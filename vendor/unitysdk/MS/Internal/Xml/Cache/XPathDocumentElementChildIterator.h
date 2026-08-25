#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::Cache { class XPathDocumentNavigator; }
namespace MS::Internal::Xml::Cache { class XPathDocumentElementChildIterator; }

#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTCHILDITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9954390)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTCHILDITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x99544C0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTCHILDITERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x9954510)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTCHILDITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9954590)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathDocumentElementChildIterator_TypeDefinitionIndex = 28322;

	class XPathDocumentElementChildIterator : public Il2CppObject
	{
	public:
		::System::String* _localName; // 0x28
		::System::String* _namespaceUri; // 0x30

		::System::Void .ctor(::MS::Internal::Xml::Cache::XPathDocumentNavigator* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::MS::Internal::Xml::Cache::XPathDocumentNavigator*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTCHILDITERATOR_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::Cache::XPathDocumentElementChildIterator* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::Cache::XPathDocumentElementChildIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTCHILDITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTCHILDITERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTCHILDITERATOR_MOVENEXT_OFFSET))(nullptr);
		}

	};
}

