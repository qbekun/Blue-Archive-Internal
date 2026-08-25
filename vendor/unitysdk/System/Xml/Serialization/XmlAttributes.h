#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x99DB280)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x99DB3C0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99DBCA0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLANYELEMENTS_OFFSET UNITYSDK_OFFSET(0x99DBCB0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLARRAY_OFFSET UNITYSDK_OFFSET(0x99DBCC0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLARRAYITEMS_OFFSET UNITYSDK_OFFSET(0x99DBCD0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99DBCE0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLCHOICEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x99DBCF0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x99DBD00)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLELEMENTS_OFFSET UNITYSDK_OFFSET(0x99DBD10)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLIGNORE_OFFSET UNITYSDK_OFFSET(0x99DBD20)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLNS_OFFSET UNITYSDK_OFFSET(0x99DBD30)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLROOT_OFFSET UNITYSDK_OFFSET(0x99DBD40)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLTEXT_OFFSET UNITYSDK_OFFSET(0x99DBD50)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x99DBD60)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99DAFA0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x99DCB00)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_SORTABLEORDER_OFFSET UNITYSDK_OFFSET(0x99DCEC0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributes_TypeDefinitionIndex = 27884;

	class XmlAttributes : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::XmlAnyAttributeAttribute* xmlAnyAttribute; // 0x10
		::System::Xml::Serialization::XmlAnyElementAttributes* xmlAnyElements; // 0x18
		::System::Xml::Serialization::XmlArrayAttribute* xmlArray; // 0x20
		::System::Xml::Serialization::XmlArrayItemAttributes* xmlArrayItems; // 0x28
		::System::Xml::Serialization::XmlAttributeAttribute* xmlAttribute; // 0x30
		::System::Xml::Serialization::XmlChoiceIdentifierAttribute* xmlChoiceIdentifier; // 0x38
		::System::Object* xmlDefaultValue; // 0x40
		::System::Xml::Serialization::XmlElementAttributes* xmlElements; // 0x48
		::System::Xml::Serialization::XmlEnumAttribute* xmlEnum; // 0x50
		::System::Boolean xmlIgnore; // 0x58
		::System::Boolean xmlns; // 0x59
		::System::Xml::Serialization::XmlRootAttribute* xmlRoot; // 0x60
		::System::Xml::Serialization::XmlTextAttribute* xmlText; // 0x68
		::System::Xml::Serialization::XmlTypeAttribute* xmlType; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Reflection::ICustomAttributeProvider* arg)
		{
			((::System::Void(*)(::System::Reflection::ICustomAttributeProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlAnyAttributeAttribute* get_XmlAnyAttribute()
		{
			return (return (::System::Xml::Serialization::XmlAnyAttributeAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLANYATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlAnyElementAttributes* get_XmlAnyElements()
		{
			return (return (::System::Xml::Serialization::XmlAnyElementAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLANYELEMENTS_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlArrayAttribute* get_XmlArray()
		{
			return (return (::System::Xml::Serialization::XmlArrayAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLARRAY_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlArrayItemAttributes* get_XmlArrayItems()
		{
			return (return (::System::Xml::Serialization::XmlArrayItemAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLARRAYITEMS_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlAttributeAttribute* get_XmlAttribute()
		{
			return (return (::System::Xml::Serialization::XmlAttributeAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlChoiceIdentifierAttribute* get_XmlChoiceIdentifier()
		{
			return (return (::System::Xml::Serialization::XmlChoiceIdentifierAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLCHOICEIDENTIFIER_OFFSET))(nullptr);
		}

		::System::Object* get_XmlDefaultValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLDEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlElementAttributes* get_XmlElements()
		{
			return (return (::System::Xml::Serialization::XmlElementAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLELEMENTS_OFFSET))(nullptr);
		}

		::System::Boolean get_XmlIgnore()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLIGNORE_OFFSET))(nullptr);
		}

		::System::Boolean get_Xmlns()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLNS_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlRootAttribute* get_XmlRoot()
		{
			return (return (::System::Xml::Serialization::XmlRootAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLROOT_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlTextAttribute* get_XmlText()
		{
			return (return (::System::Xml::Serialization::XmlTextAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLTEXT_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlTypeAttribute* get_XmlType()
		{
			return (return (::System::Xml::Serialization::XmlTypeAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_XMLTYPE_OFFSET))(nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Order()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Int32 get_SortableOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTES_GET_SORTABLEORDER_OFFSET))(nullptr);
		}

	};
}

