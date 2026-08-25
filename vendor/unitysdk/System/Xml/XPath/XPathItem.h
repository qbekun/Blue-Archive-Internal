#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_XPATH_XPATHITEM_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHITEM_GET_TYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHITEM_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHITEM_GET_VALUEASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHITEM_GET_VALUEASDATETIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHITEM_GET_VALUEASDOUBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHITEM_GET_VALUEASINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHITEM_GET_VALUEASLONG_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHITEM_VALUEAS_OFFSET UNITYSDK_OFFSET(0x99CC560)
#define SYSTEM_XML_XPATH_XPATHITEM_VALUEAS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x99CC580)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathItem_TypeDefinitionIndex = 27848;

	class XPathItem : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaType* get_XmlType()
		{
			return (return (::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_GET_XMLTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Object* get_TypedValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_GET_TYPEDVALUE_OFFSET))(nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ValueAsBoolean()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_GET_VALUEASBOOLEAN_OFFSET))(nullptr);
		}

		::System::DateTime* get_ValueAsDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_GET_VALUEASDATETIME_OFFSET))(nullptr);
		}

		::System::Double get_ValueAsDouble()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_GET_VALUEASDOUBLE_OFFSET))(nullptr);
		}

		::System::Int32 get_ValueAsInt()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_GET_VALUEASINT_OFFSET))(nullptr);
		}

		::System::Int64 get_ValueAsLong()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_GET_VALUEASLONG_OFFSET))(nullptr);
		}

		::System::Object* ValueAs(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_VALUEAS_OFFSET))(arg, nullptr);
		}

		::System::Object* ValueAs(::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_VALUEAS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHITEM_.CTOR_OFFSET))(nullptr);
		}

	};
}

