#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::Cache { class XPathDocumentNavigator; }
namespace MS::Internal::Xml::Cache { class XPathDocumentElementDescendantIterator; }

#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTDESCENDANTITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9954770)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTDESCENDANTITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9954940)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTDESCENDANTITERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x99549A0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTDESCENDANTITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9954A40)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathDocumentElementDescendantIterator_TypeDefinitionIndex = 28324;

	class XPathDocumentElementDescendantIterator : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::Cache::XPathDocumentNavigator* _end; // 0x28
		::System::String* _localName; // 0x30
		::System::String* _namespaceUri; // 0x38
		::System::Boolean _matchSelf; // 0x40

		::System::Void .ctor(::MS::Internal::Xml::Cache::XPathDocumentNavigator* arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::Cache::XPathDocumentNavigator*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTDESCENDANTITERATOR_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::Cache::XPathDocumentElementDescendantIterator* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::Cache::XPathDocumentElementDescendantIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTDESCENDANTITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTDESCENDANTITERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTELEMENTDESCENDANTITERATOR_MOVENEXT_OFFSET))(nullptr);
		}

	};
}

