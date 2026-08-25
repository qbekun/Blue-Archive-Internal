#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_LISTMAP_SET_CHOICEMEMBER_OFFSET UNITYSDK_OFFSET(0x9A03F90)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_GET_ITEMINFO_OFFSET UNITYSDK_OFFSET(0x9A03FA0)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_SET_ITEMINFO_OFFSET UNITYSDK_OFFSET(0x9A03FB0)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x99FCAD0)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x9A03FC0)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_FINDTEXTELEMENT_OFFSET UNITYSDK_OFFSET(0x9A04330)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_GETARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x99FC850)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x9A046B0)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9A04800)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A04810)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int ListMap_TypeDefinitionIndex = 27940;

	class ListMap : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::XmlTypeMapElementInfoList* _itemInfo; // 0x10
		::System::String* _choiceMember; // 0x18

		::System::Void set_ChoiceMember(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_SET_CHOICEMEMBER_OFFSET))(str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfoList* get_ItemInfo()
		{
			return (return (::System::Xml::Serialization::XmlTypeMapElementInfoList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_GET_ITEMINFO_OFFSET))(nullptr);
		}

		::System::Void set_ItemInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapElementInfoList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_SET_ITEMINFO_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::System::Object* arg, ::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::System::Object*, ::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_FINDELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_FINDELEMENT_OFFSET))(str, str, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* FindTextElement()
		{
			return (return (::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_FINDTEXTELEMENT_OFFSET))(nullptr);
		}

		::System::Void GetArrayType(::System::Int32 arg, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_GETARRAYTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_.CTOR_OFFSET))(nullptr);
		}

	};
}

