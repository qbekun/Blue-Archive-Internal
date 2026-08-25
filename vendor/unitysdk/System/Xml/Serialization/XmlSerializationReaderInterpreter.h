#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99EC4F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITCALLBACKS_OFFSET UNITYSDK_OFFSET(0x99EC540)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITIDS_OFFSET UNITYSDK_OFFSET(0x99EC9C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READROOT_OFFSET UNITYSDK_OFFSET(0x99EC9D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READENCODEDOBJECT_OFFSET UNITYSDK_OFFSET(0x99ECBC0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READMESSAGE_OFFSET UNITYSDK_OFFSET(0x99ECD50)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READROOT_OFFSET UNITYSDK_OFFSET(0x99ECAD0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READOBJECT_OFFSET UNITYSDK_OFFSET(0x99F0540)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READCLASSINSTANCE_OFFSET UNITYSDK_OFFSET(0x99F0E60)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READCLASSINSTANCEMEMBERS_OFFSET UNITYSDK_OFFSET(0x99F1150)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READATTRIBUTEMEMBERS_OFFSET UNITYSDK_OFFSET(0x99ED460)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READMEMBERS_OFFSET UNITYSDK_OFFSET(0x99ED9D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETLISTMEMBERSDEFAULTS_OFFSET UNITYSDK_OFFSET(0x99F18F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPMEMBERS_OFFSET UNITYSDK_OFFSET(0x99F1F40)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_PROCESSUNKNOWNATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99F2370)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_PROCESSUNKNOWNELEMENT_OFFSET UNITYSDK_OFFSET(0x99F23C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x99F1AE0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x99F1310)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETMEMBERVALUEFROMATTR_OFFSET UNITYSDK_OFFSET(0x99ED390)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x99F14D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READOBJECTELEMENT_OFFSET UNITYSDK_OFFSET(0x99F1CA0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READPRIMITIVEVALUE_OFFSET UNITYSDK_OFFSET(0x99F2410)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETVALUEFROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x99F11F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READLISTELEMENT_OFFSET UNITYSDK_OFFSET(0x99F0690)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READLISTSTRING_OFFSET UNITYSDK_OFFSET(0x99F2540)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_ADDLISTVALUE_OFFSET UNITYSDK_OFFSET(0x99F1580)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x99F1140)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x99ED330)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATELIST_OFFSET UNITYSDK_OFFSET(0x99F1C10)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITIALIZELIST_OFFSET UNITYSDK_OFFSET(0x99F1B40)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FILLLIST_OFFSET UNITYSDK_OFFSET(0x99F28D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_COPYENUMERABLELIST_OFFSET UNITYSDK_OFFSET(0x99F28E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLNODEELEMENT_OFFSET UNITYSDK_OFFSET(0x99F0520)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLNODE_OFFSET UNITYSDK_OFFSET(0x99F1E40)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READPRIMITIVEELEMENT_OFFSET UNITYSDK_OFFSET(0x99F0B60)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READENUMELEMENT_OFFSET UNITYSDK_OFFSET(0x99F0C10)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETENUMVALUE_OFFSET UNITYSDK_OFFSET(0x99F2790)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLSERIALIZABLEELEMENT_OFFSET UNITYSDK_OFFSET(0x99F0C80)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99F2D70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReaderInterpreter_TypeDefinitionIndex = 27914;

	class XmlSerializationReaderInterpreter : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::XmlMapping* _typeMap; // 0xD0
		::System::Xml::Serialization::SerializationFormat* _format; // 0xD8
		::System::Xml::XmlQualifiedName* AnyType; // 0x0
		::Il2CppArray<::System::Object*>* empty_array; // 0x8

		::System::Void .ctor(::System::Xml::Serialization::XmlMapping* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void InitCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void InitIDs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITIDS_OFFSET))(nullptr);
		}

		::System::Object* ReadRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READROOT_OFFSET))(nullptr);
		}

		::System::Object* ReadEncodedObject(::System::Xml::Serialization::XmlTypeMapping* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READENCODEDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Object* ReadMessage(::System::Xml::Serialization::XmlMembersMapping* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlMembersMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Object* ReadRoot(::System::Xml::Serialization::XmlTypeMapping* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READROOT_OFFSET))(arg, nullptr);
		}

		::System::Object* ReadObject(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READOBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadClassInstance(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READCLASSINSTANCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReadClassInstanceMembers(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READCLASSINSTANCEMEMBERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadAttributeMembers(::System::Xml::Serialization::ClassMap* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READATTRIBUTEMEMBERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReadMembers(::System::Xml::Serialization::ClassMap* arg, ::System::Object* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READMEMBERS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetListMembersDefaults(::System::Xml::Serialization::ClassMap* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETLISTMEMBERSDEFAULTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FixupMembers(::System::Xml::Serialization::ClassMap* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPMEMBERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessUnknownAttribute(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_PROCESSUNKNOWNATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessUnknownElement(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_PROCESSUNKNOWNELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsReadOnly(::System::Xml::Serialization::XmlTypeMapMember* arg, ::System::Xml::Serialization::TypeData* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Serialization::XmlTypeMapMember*, ::System::Xml::Serialization::TypeData*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_ISREADONLY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* arg, ::System::Object* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETMEMBERVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetMemberValueFromAttr(::System::Xml::Serialization::XmlTypeMapMember* arg, ::System::Object* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETMEMBERVALUEFROMATTR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* GetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETMEMBERVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadObjectElement(::System::Xml::Serialization::XmlTypeMapElementInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapElementInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READOBJECTELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Object* ReadPrimitiveValue(::System::Xml::Serialization::XmlTypeMapElementInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapElementInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READPRIMITIVEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValueFromXmlString(::System::String* str, ::System::Xml::Serialization::TypeData* arg, ::System::Xml::Serialization::XmlTypeMapping* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlTypeMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETVALUEFROMXMLSTRING_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Object* ReadListElement(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Boolean arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READLISTELEMENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* ReadListString(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READLISTSTRING_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddListValue(::System::Xml::Serialization::TypeData* arg, ::System::Object&* arg, ::System::Int32 arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::TypeData*, ::System::Object&*, ::System::Int32, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_ADDLISTVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* CreateInstance(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATEINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* CreateInstance(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATEINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Object* CreateList(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATELIST_OFFSET))(arg, nullptr);
		}

		::System::Object* InitializeList(::System::Xml::Serialization::TypeData* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::TypeData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITIALIZELIST_OFFSET))(arg, nullptr);
		}

		::System::Void FillList(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FILLLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyEnumerableList(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_COPYENUMERABLELIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ReadXmlNodeElement(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLNODEELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ReadXmlNode(::System::Xml::Serialization::TypeData* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::TypeData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLNODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ReadPrimitiveElement(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READPRIMITIVEELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ReadEnumElement(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READENUMELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetEnumValue(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETENUMVALUE_OFFSET))(arg, str, nullptr);
		}

		::System::Object* ReadXmlSerializableElement(::System::Xml::Serialization::XmlTypeMapping* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLSERIALIZABLEELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

