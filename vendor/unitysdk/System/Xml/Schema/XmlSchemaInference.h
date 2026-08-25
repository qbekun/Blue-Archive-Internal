#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SET_OCCURRENCE_OFFSET UNITYSDK_OFFSET(0x9875790)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_GET_OCCURRENCE_OFFSET UNITYSDK_OFFSET(0x98757A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SET_TYPEINFERENCE_OFFSET UNITYSDK_OFFSET(0x98757B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98757C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERSCHEMA_OFFSET UNITYSDK_OFFSET(0x9875900)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERSCHEMA1_OFFSET UNITYSDK_OFFSET(0x9875970)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9878650)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_CREATEXMLSCHEMA_OFFSET UNITYSDK_OFFSET(0x987B4F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_ADDELEMENT_OFFSET UNITYSDK_OFFSET(0x9876530)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERELEMENT_OFFSET UNITYSDK_OFFSET(0x9876BE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_CHECKSIMPLECONTENTEXTENSION_OFFSET UNITYSDK_OFFSET(0x987C350)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_GETEFFECTIVESCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x987B970)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDMATCHINGELEMENT_OFFSET UNITYSDK_OFFSET(0x987C980)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_PROCESSATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x987BAC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_MOVEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x987C8E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_MOVEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x987C4B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9879380)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDGLOBALELEMENT_OFFSET UNITYSDK_OFFSET(0x987B580)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x987DDD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDATTRIBUTEREF_OFFSET UNITYSDK_OFFSET(0x9878F80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDELEMENTREF_OFFSET UNITYSDK_OFFSET(0x987DF10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_MAKEEXISTINGATTRIBUTESOPTIONAL_OFFSET UNITYSDK_OFFSET(0x987C2B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SWITCHUSETOOPTIONAL_OFFSET UNITYSDK_OFFSET(0x987E410)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_REFINESIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x9879750)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x987E5B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_DATETIME_OFFSET UNITYSDK_OFFSET(0x987FD10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_CREATENEWELEMENTFORCHOICE_OFFSET UNITYSDK_OFFSET(0x987E080)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_GETSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x987AB30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SETMINMAXOCCURS_OFFSET UNITYSDK_OFFSET(0x987DBE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x987FE50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaInference_TypeDefinitionIndex = 28076;

	class XmlSchemaInference : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* ST_boolean; // 0x0
		::System::Xml::XmlQualifiedName* ST_byte; // 0x8
		::System::Xml::XmlQualifiedName* ST_unsignedByte; // 0x10
		::System::Xml::XmlQualifiedName* ST_short; // 0x18
		::System::Xml::XmlQualifiedName* ST_unsignedShort; // 0x20
		::System::Xml::XmlQualifiedName* ST_int; // 0x28
		::System::Xml::XmlQualifiedName* ST_unsignedInt; // 0x30
		::System::Xml::XmlQualifiedName* ST_long; // 0x38
		::System::Xml::XmlQualifiedName* ST_unsignedLong; // 0x40
		::System::Xml::XmlQualifiedName* ST_integer; // 0x48
		::System::Xml::XmlQualifiedName* ST_decimal; // 0x50
		::System::Xml::XmlQualifiedName* ST_float; // 0x58
		::System::Xml::XmlQualifiedName* ST_double; // 0x60
		::System::Xml::XmlQualifiedName* ST_duration; // 0x68
		::System::Xml::XmlQualifiedName* ST_dateTime; // 0x70
		::System::Xml::XmlQualifiedName* ST_time; // 0x78
		::System::Xml::XmlQualifiedName* ST_date; // 0x80
		::System::Xml::XmlQualifiedName* ST_gYearMonth; // 0x88
		::System::Xml::XmlQualifiedName* ST_string; // 0x90
		::System::Xml::XmlQualifiedName* ST_anySimpleType; // 0x98
		::Il2CppArray<::System::Object*>* SimpleTypes; // 0xA0
		::System::Xml::Schema::XmlSchema* rootSchema; // 0x10
		::System::Xml::Schema::XmlSchemaSet* schemaSet; // 0x18
		::System::Xml::XmlReader* xtr; // 0x20
		::System::Xml::NameTable* nametable; // 0x28
		::System::String* TargetNamespace; // 0x30
		::System::Xml::XmlNamespaceManager* NamespaceManager; // 0x38
		::System::Collections::ArrayList* schemaList; // 0x40
		InferenceOption* occurrence; // 0x48
		InferenceOption* typeInference; // 0x4C

		::System::Void set_Occurrence(InferenceOption* arg)
		{
			((::System::Void(*)(InferenceOption*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SET_OCCURRENCE_OFFSET))(arg, nullptr);
		}

		InferenceOption* get_Occurrence()
		{
			return (return (InferenceOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_GET_OCCURRENCE_OFFSET))(nullptr);
		}

		::System::Void set_TypeInference(InferenceOption* arg)
		{
			((::System::Void(*)(InferenceOption*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SET_TYPEINFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaSet* InferSchema(::System::Xml::XmlReader* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaSet*(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERSCHEMA_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSet* InferSchema1(::System::Xml::XmlReader* arg, ::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaSet*(*)(::System::Xml::XmlReader*, ::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERSCHEMA1_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaAttribute* AddAttribute(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::Xml::Schema::XmlSchema* arg, ::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::Xml::Schema::XmlSchemaObjectTable* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaAttribute*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaObjectTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_ADDATTRIBUTE_OFFSET))(str, str, str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchema* CreateXmlSchema(::System::String* str)
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_CREATEXMLSCHEMA_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaElement* AddElement(::System::String* str, ::System::String* str, ::System::String* str, ::System::Xml::Schema::XmlSchema* arg, ::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::Int32 arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaElement*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_ADDELEMENT_OFFSET))(str, str, str, arg, arg, arg, nullptr);
		}

		::System::Void InferElement(::System::Xml::Schema::XmlSchemaElement* arg, ::System::Boolean arg, ::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Boolean, ::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleContentExtension* CheckSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleContentExtension*(*)(::System::Xml::Schema::XmlSchemaComplexType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_CHECKSIMPLECONTENTEXTENSION_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaType* GetEffectiveSchemaType(::System::Xml::Schema::XmlSchemaElement* arg, ::System::Boolean arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaType*(*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_GETEFFECTIVESCHEMATYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaElement* FindMatchingElement(::System::Boolean arg, ::System::Xml::XmlReader* arg, ::System::Xml::Schema::XmlSchemaComplexType* arg, int32_t&* arg, bool&* arg, ::System::Xml::Schema::XmlSchema* arg, ::System::Boolean arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaElement*(*)(::System::Boolean, ::System::Xml::XmlReader*, ::System::Xml::Schema::XmlSchemaComplexType*, int32_t&*, bool&*, ::System::Xml::Schema::XmlSchema*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDMATCHINGELEMENT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessAttributes(::System::Xml::Schema::XmlSchemaElement&* arg, ::System::Xml::Schema::XmlSchemaType* arg, ::System::Boolean arg, ::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaElement&*, ::System::Xml::Schema::XmlSchemaType*, ::System::Boolean, ::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_PROCESSATTRIBUTES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void MoveAttributes(::System::Xml::Schema::XmlSchemaSimpleContentExtension* arg, ::System::Xml::Schema::XmlSchemaComplexType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleContentExtension*, ::System::Xml::Schema::XmlSchemaComplexType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_MOVEATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MoveAttributes(::System::Xml::Schema::XmlSchemaComplexType* arg, ::System::Xml::Schema::XmlSchemaSimpleContentExtension* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_MOVEATTRIBUTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaAttribute* FindAttribute(::System::Collections::ICollection* arg, ::System::String* str)
		{
			return (return (::System::Xml::Schema::XmlSchemaAttribute*(*)(::System::Collections::ICollection*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDATTRIBUTE_OFFSET))(arg, str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaElement* FindGlobalElement(::System::String* str, ::System::String* str, ::System::Xml::Schema::XmlSchema&* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaElement*(*)(::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchema&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDGLOBALELEMENT_OFFSET))(str, str, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaElement* FindElement(::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::String* str)
		{
			return (return (::System::Xml::Schema::XmlSchemaElement*(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDELEMENT_OFFSET))(arg, str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaAttribute* FindAttributeRef(::System::Collections::ICollection* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::Schema::XmlSchemaAttribute*(*)(::System::Collections::ICollection*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDATTRIBUTEREF_OFFSET))(arg, str, str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaElement* FindElementRef(::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::Schema::XmlSchemaElement*(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDELEMENTREF_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void MakeExistingAttributesOptional(::System::Xml::Schema::XmlSchemaComplexType* arg, ::System::Xml::Schema::XmlSchemaObjectCollection* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_MAKEEXISTINGATTRIBUTESOPTIONAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SwitchUseToOptional(::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::Xml::Schema::XmlSchemaObjectCollection* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SWITCHUSETOOPTIONAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* RefineSimpleType(::System::String* str, int32_t&* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_REFINESIMPLETYPE_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 InferSimpleType(::System::String* str, bool&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERSIMPLETYPE_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 DateTime(::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_DATETIME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaElement* CreateNewElementforChoice(::System::Xml::Schema::XmlSchemaElement* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaElement*(*)(::System::Xml::Schema::XmlSchemaElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_CREATENEWELEMENTFORCHOICE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSchemaType(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_GETSCHEMATYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetMinMaxOccurs(::System::Xml::Schema::XmlSchemaElement* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SETMINMAXOCCURS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

