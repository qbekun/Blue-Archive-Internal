#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_CLASSMAP_ADDMEMBER_OFFSET UNITYSDK_OFFSET(0x9A01F50)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_REGISTERFLATLIST_OFFSET UNITYSDK_OFFSET(0x9A02DD0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9A02E80)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x9A02F80)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x9A03360)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_BUILDKEY_OFFSET UNITYSDK_OFFSET(0x9A02CF0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ISORDERDEPENDENTMAP_OFFSET UNITYSDK_OFFSET(0x9A03740)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_DEFAULTANYELEMENTMEMBER_OFFSET UNITYSDK_OFFSET(0x9A03B30)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_DEFAULTANYATTRIBUTEMEMBER_OFFSET UNITYSDK_OFFSET(0x9A03B40)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_NAMESPACEDECLARATIONS_OFFSET UNITYSDK_OFFSET(0x9A03B50)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ATTRIBUTEMEMBERS_OFFSET UNITYSDK_OFFSET(0x99F9750)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ELEMENTMEMBERS_OFFSET UNITYSDK_OFFSET(0x9A03B60)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x9A03B70)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_FLATLISTS_OFFSET UNITYSDK_OFFSET(0x9A03B80)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_LISTMEMBERS_OFFSET UNITYSDK_OFFSET(0x9A03B90)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_XMLTEXTCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x9A03BA0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_RETURNMEMBER_OFFSET UNITYSDK_OFFSET(0x9A03BB0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_SIMPLECONTENTBASETYPE_OFFSET UNITYSDK_OFFSET(0x9A03BC0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_SETCANBESIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x9A03E70)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_HASSIMPLECONTENT_OFFSET UNITYSDK_OFFSET(0x9A03E80)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A03EE0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int ClassMap_TypeDefinitionIndex = 27939;

	class ClassMap : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* _elements; // 0x10
		::System::Collections::ArrayList* _elementMembers; // 0x18
		::System::Collections::Hashtable* _attributeMembers; // 0x20
		::Il2CppArray<::System::Object*>* _attributeMembersArray; // 0x28
		::System::Collections::ArrayList* _flatLists; // 0x30
		::System::Collections::ArrayList* _allMembers; // 0x38
		::System::Collections::ArrayList* _membersWithDefault; // 0x40
		::System::Collections::ArrayList* _listMembers; // 0x48
		::System::Xml::Serialization::XmlTypeMapMemberAnyElement* _defaultAnyElement; // 0x50
		::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* _defaultAnyAttribute; // 0x58
		::System::Xml::Serialization::XmlTypeMapMemberNamespaces* _namespaceDeclarations; // 0x60
		::System::Xml::Serialization::XmlTypeMapMember* _xmlTextCollector; // 0x68
		::System::Xml::Serialization::XmlTypeMapMember* _returnMember; // 0x70
		::System::Boolean _ignoreMemberNamespace; // 0x78
		::System::Boolean _canBeSimpleType; // 0x79
		Il2CppObject* _isOrderDependentMap; // 0x7A

		::System::Void AddMember(::System::Xml::Serialization::XmlTypeMapMember* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapMember*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_ADDMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFlatList(::System::Xml::Serialization::XmlTypeMapMemberExpandable* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapMemberExpandable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_REGISTERFLATLIST_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapMemberAttribute* GetAttribute(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapMemberAttribute*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GETATTRIBUTE_OFFSET))(str, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* GetElement(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GETELEMENT_OFFSET))(str, str, arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* GetElement(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GETELEMENT_OFFSET))(str, str, nullptr);
		}

		::System::String* BuildKey(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_BUILDKEY_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean get_IsOrderDependentMap()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ISORDERDEPENDENTMAP_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapMemberAnyElement* get_DefaultAnyElementMember()
		{
			return (return (::System::Xml::Serialization::XmlTypeMapMemberAnyElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_DEFAULTANYELEMENTMEMBER_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* get_DefaultAnyAttributeMember()
		{
			return (return (::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_DEFAULTANYATTRIBUTEMEMBER_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapMemberNamespaces* get_NamespaceDeclarations()
		{
			return (return (::System::Xml::Serialization::XmlTypeMapMemberNamespaces*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_NAMESPACEDECLARATIONS_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_AttributeMembers()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ATTRIBUTEMEMBERS_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_ElementMembers()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ELEMENTMEMBERS_OFFSET))(nullptr);
		}

		::System::Collections::ArrayList* get_AllMembers()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ALLMEMBERS_OFFSET))(nullptr);
		}

		::System::Collections::ArrayList* get_FlatLists()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_FLATLISTS_OFFSET))(nullptr);
		}

		::System::Collections::ArrayList* get_ListMembers()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_LISTMEMBERS_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapMember* get_XmlTextCollector()
		{
			return (return (::System::Xml::Serialization::XmlTypeMapMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_XMLTEXTCOLLECTOR_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapMember* get_ReturnMember()
		{
			return (return (::System::Xml::Serialization::XmlTypeMapMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_RETURNMEMBER_OFFSET))(nullptr);
		}

		::System::Xml::XmlQualifiedName* get_SimpleContentBaseType()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_SIMPLECONTENTBASETYPE_OFFSET))(nullptr);
		}

		::System::Void SetCanBeSimpleType(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_SETCANBESIMPLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasSimpleContent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_HASSIMPLECONTENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_.CTOR_OFFSET))(nullptr);
		}

	};
}

