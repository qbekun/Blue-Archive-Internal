#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class ForwardPositionQuery; }

#define MS_INTERNAL_XML_XPATH_FORWARDPOSITIONQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9941180)
#define MS_INTERNAL_XML_XPATH_FORWARDPOSITIONQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9941190)
#define MS_INTERNAL_XML_XPATH_FORWARDPOSITIONQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x99411A0)
#define MS_INTERNAL_XML_XPATH_FORWARDPOSITIONQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x9941320)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int ForwardPositionQuery_TypeDefinitionIndex = 28272;

	class ForwardPositionQuery : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FORWARDPOSITIONQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::ForwardPositionQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::ForwardPositionQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FORWARDPOSITIONQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FORWARDPOSITIONQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FORWARDPOSITIONQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

