#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class BooleanFunctions; }

#define MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x993D010)
#define MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x993D2A0)
#define MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x993D2F0)
#define MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x993D310)
#define MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x993D770)
#define MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x993D800)
#define MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x993D470)
#define MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x993D820)
#define MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_NOT_OFFSET UNITYSDK_OFFSET(0x993D610)
#define MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_LANG_OFFSET UNITYSDK_OFFSET(0x993D690)
#define MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x993D830)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int BooleanFunctions_TypeDefinitionIndex = 28253;

	class BooleanFunctions : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::XPath::Query* _arg; // 0x18
		FunctionType* _funcType; // 0x20

		::System::Void .ctor(FunctionType* arg, ::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(FunctionType*, ::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::BooleanFunctions* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::BooleanFunctions*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean toBoolean(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Boolean toBoolean(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_TOBOOLEAN_OFFSET))(str, nullptr);
		}

		::System::Boolean toBoolean(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::System::Boolean Not(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_NOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Lang(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_LANG_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANFUNCTIONS_CLONE_OFFSET))(nullptr);
		}

	};
}

