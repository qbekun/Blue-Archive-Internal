#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class DocumentOrderQuery; }

#define MS_INTERNAL_XML_XPATH_DOCUMENTORDERQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993F720)
#define MS_INTERNAL_XML_XPATH_DOCUMENTORDERQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993F730)
#define MS_INTERNAL_XML_XPATH_DOCUMENTORDERQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x993F740)
#define MS_INTERNAL_XML_XPATH_DOCUMENTORDERQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x993F800)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int DocumentOrderQuery_TypeDefinitionIndex = 28265;

	class DocumentOrderQuery : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DOCUMENTORDERQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::DocumentOrderQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::DocumentOrderQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DOCUMENTORDERQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DOCUMENTORDERQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DOCUMENTORDERQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

