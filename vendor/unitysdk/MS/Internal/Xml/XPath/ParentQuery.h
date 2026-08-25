#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class ParentQuery; }

#define MS_INTERNAL_XML_XPATH_PARENTQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9948790)
#define MS_INTERNAL_XML_XPATH_PARENTQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x99487B0)
#define MS_INTERNAL_XML_XPATH_PARENTQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x99487C0)
#define MS_INTERNAL_XML_XPATH_PARENTQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x9948860)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int ParentQuery_TypeDefinitionIndex = 28292;

	class ParentQuery : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PARENTQUERY_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::ParentQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::ParentQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PARENTQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PARENTQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PARENTQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

