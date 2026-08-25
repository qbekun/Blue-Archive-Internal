#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class NumberFunctions; }

#define MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9947900)
#define MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9947940)
#define MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x9947990)
#define MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_NUMBER_OFFSET UNITYSDK_OFFSET(0x99444E0)
#define MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_NUMBER_OFFSET UNITYSDK_OFFSET(0x99437B0)
#define MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x99479B0)
#define MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_NUMBER_OFFSET UNITYSDK_OFFSET(0x9947AC0)
#define MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_SUM_OFFSET UNITYSDK_OFFSET(0x9947D90)
#define MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_FLOOR_OFFSET UNITYSDK_OFFSET(0x9947E70)
#define MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_CEILING_OFFSET UNITYSDK_OFFSET(0x9947F20)
#define MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_ROUND_OFFSET UNITYSDK_OFFSET(0x9947FD0)
#define MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x9948050)
#define MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x9948060)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int NumberFunctions_TypeDefinitionIndex = 28286;

	class NumberFunctions : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::XPath::Query* _arg; // 0x18
		FunctionType* _ftype; // 0x20

		::System::Void .ctor(FunctionType* arg, ::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(FunctionType*, ::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::NumberFunctions* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::NumberFunctions*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Double Number(::System::Boolean arg)
		{
			return (return (::System::Double(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_NUMBER_OFFSET))(arg, nullptr);
		}

		::System::Double Number(::System::String* str)
		{
			return (return (::System::Double(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_NUMBER_OFFSET))(str, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Double Number(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Double(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_NUMBER_OFFSET))(arg, nullptr);
		}

		::System::Double Sum(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Double(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_SUM_OFFSET))(arg, nullptr);
		}

		::System::Double Floor(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Double(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_FLOOR_OFFSET))(arg, nullptr);
		}

		::System::Double Ceiling(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Double(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_CEILING_OFFSET))(arg, nullptr);
		}

		::System::Double Round(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Double(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMBERFUNCTIONS_CLONE_OFFSET))(nullptr);
		}

	};
}

