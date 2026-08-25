#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class BaseAxisQuery; }

#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993CBE0)
#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993C610)
#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993C720)
#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x993C810)
#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x993CC90)
#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x993CD00)
#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x993CD10)
#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_NAMETEST_OFFSET UNITYSDK_OFFSET(0x993CD20)
#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_TYPETEST_OFFSET UNITYSDK_OFFSET(0x993CD30)
#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x993CD40)
#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x993CD50)
#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_MATCHES_OFFSET UNITYSDK_OFFSET(0x993CD60)
#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x993CE60)
#define MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x993CEC0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int BaseAxisQuery_TypeDefinitionIndex = 28251;

	class BaseAxisQuery : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::XPath::Query* qyInput; // 0x18
		::System::Boolean _nameTest; // 0x20
		::System::String* _name; // 0x28
		::System::String* _prefix; // 0x30
		::System::String* _nsUri; // 0x38
		::System::Xml::XPath::XPathNodeType* _typeTest; // 0x40
		::System::Xml::XPath::XPathNavigator* currentNode; // 0x48
		::System::Int32 position; // 0x50

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::BaseAxisQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::BaseAxisQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Boolean get_NameTest()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_NAMETEST_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeType* get_TypeTest()
		{
			return (return (::System::Xml::XPath::XPathNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_TYPETEST_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean matches(::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_MATCHES_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BASEAXISQUERY_GET_STATICTYPE_OFFSET))(nullptr);
		}

	};
}

