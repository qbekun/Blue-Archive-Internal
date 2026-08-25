#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x991E1D0)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9913BF0)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9913A80)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x991E710)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x991E980)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CHANGELISTTYPE_OFFSET UNITYSDK_OFFSET(0x9919AB0)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_ISLISTTYPE_OFFSET UNITYSDK_OFFSET(0x991EA90)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_TOLIST_OFFSET UNITYSDK_OFFSET(0x991F360)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_STRINGASLIST_OFFSET UNITYSDK_OFFSET(0x991F2C0)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_LISTASSTRING_OFFSET UNITYSDK_OFFSET(0x991EF00)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CREATEINVALIDCLRMAPPINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x991EC30)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlListConverter_TypeDefinitionIndex = 28226;

	class XmlListConverter : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlValueConverter* atomicConverter; // 0x28

		::System::Void .ctor(::System::Xml::Schema::XmlBaseConverter* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlBaseConverter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlBaseConverter* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlBaseConverter*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlValueConverter* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlValueConverter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Object* ChangeType(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CHANGETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ChangeListType(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CHANGELISTTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsListType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_ISLISTTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray(::System::Object* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_TOARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IList* ToList(::System::Object* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Collections::IList*(*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_TOLIST_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* StringAsList(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_STRINGASLIST_OFFSET))(str, nullptr);
		}

		::System::String* ListAsString(::System::Collections::IEnumerable* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::String*(*)(::System::Collections::IEnumerable*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_LISTASSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CreateInvalidClrMappingException(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Exception*(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CREATEINVALIDCLRMAPPINGEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

