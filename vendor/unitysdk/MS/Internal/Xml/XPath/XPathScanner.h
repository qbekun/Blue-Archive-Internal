#pragma once
#include "../../../../unitysdk.h"

#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x994F5C0)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_SOURCETEXT_OFFSET UNITYSDK_OFFSET(0x9953720)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_CURRENTCHAR_OFFSET UNITYSDK_OFFSET(0x9953730)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x99536D0)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_KIND_OFFSET UNITYSDK_OFFSET(0x9953740)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9953750)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x9953760)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x9953770)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_NUMBERVALUE_OFFSET UNITYSDK_OFFSET(0x9953780)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_CANBEFUNCTION_OFFSET UNITYSDK_OFFSET(0x9953790)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_SKIPSPACE_OFFSET UNITYSDK_OFFSET(0x99537A0)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_NEXTLEX_OFFSET UNITYSDK_OFFSET(0x9951B80)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANNUMBER_OFFSET UNITYSDK_OFFSET(0x99539F0)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANFRACTION_OFFSET UNITYSDK_OFFSET(0x9953810)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANSTRING_OFFSET UNITYSDK_OFFSET(0x99538E0)
#define MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANNAME_OFFSET UNITYSDK_OFFSET(0x9953B10)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathScanner_TypeDefinitionIndex = 28317;

	class XPathScanner : public Il2CppObject
	{
	public:
		::System::String* _xpathExpr; // 0x10
		::System::Int32 _xpathExprIndex; // 0x18
		LexKind* _kind; // 0x1C
		::System::Char _currentChar; // 0x20
		::System::String* _name; // 0x28
		::System::String* _prefix; // 0x30
		::System::String* _stringValue; // 0x38
		::System::Double _numberValue; // 0x40
		::System::Boolean _canBeFunction; // 0x48
		::System::Xml::XmlCharType* _xmlCharType; // 0x50

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_SourceText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_SOURCETEXT_OFFSET))(nullptr);
		}

		::System::Char get_CurrentChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_CURRENTCHAR_OFFSET))(nullptr);
		}

		::System::Boolean NextChar()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_NEXTCHAR_OFFSET))(nullptr);
		}

		LexKind* get_Kind()
		{
			return (return (LexKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_KIND_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::String* get_StringValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_STRINGVALUE_OFFSET))(nullptr);
		}

		::System::Double get_NumberValue()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_NUMBERVALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanBeFunction()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_GET_CANBEFUNCTION_OFFSET))(nullptr);
		}

		::System::Void SkipSpace()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_SKIPSPACE_OFFSET))(nullptr);
		}

		::System::Boolean NextLex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_NEXTLEX_OFFSET))(nullptr);
		}

		::System::Double ScanNumber()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANNUMBER_OFFSET))(nullptr);
		}

		::System::Double ScanFraction()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANFRACTION_OFFSET))(nullptr);
		}

		::System::String* ScanString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANSTRING_OFFSET))(nullptr);
		}

		::System::String* ScanName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSCANNER_SCANNAME_OFFSET))(nullptr);
		}

	};
}

