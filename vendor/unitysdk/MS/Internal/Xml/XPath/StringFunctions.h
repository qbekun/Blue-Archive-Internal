#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class StringFunctions; }

#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x994B4F0)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x994B940)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x994BC10)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x994BD70)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x994D910)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x994D960)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x994BE90)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x994D9B0)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_CONCAT_OFFSET UNITYSDK_OFFSET(0x994C2C0)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x994C490)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x994C660)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_SUBSTRINGBEFORE_OFFSET UNITYSDK_OFFSET(0x994C860)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_SUBSTRINGAFTER_OFFSET UNITYSDK_OFFSET(0x994CAA0)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_SUBSTRING_OFFSET UNITYSDK_OFFSET(0x994CCE0)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_STRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x994D170)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x994D320)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x994D5C0)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x994D9D0)
#define MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x994DA30)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int StringFunctions_TypeDefinitionIndex = 28303;

	class StringFunctions : public Il2CppObject
	{
	public:
		FunctionType* _funcType; // 0x18
		Il2CppObject* _argList; // 0x20
		::System::Globalization::CompareInfo* s_compareInfo; // 0x0

		::System::Void .ctor(FunctionType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(FunctionType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::StringFunctions* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::StringFunctions*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::String* toString(::System::Double arg)
		{
			return (return (::System::String*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* toString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* toString(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::System::String* Concat(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_CONCAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean StartsWith(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_STARTSWITH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::String* SubstringBefore(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_SUBSTRINGBEFORE_OFFSET))(arg, nullptr);
		}

		::System::String* SubstringAfter(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_SUBSTRINGAFTER_OFFSET))(arg, nullptr);
		}

		::System::String* Substring(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_SUBSTRING_OFFSET))(arg, nullptr);
		}

		::System::Double StringLength(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Double(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_STRINGLENGTH_OFFSET))(arg, nullptr);
		}

		::System::String* Normalize(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_NORMALIZE_OFFSET))(arg, nullptr);
		}

		::System::String* Translate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_TRANSLATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_CLONE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_STRINGFUNCTIONS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

