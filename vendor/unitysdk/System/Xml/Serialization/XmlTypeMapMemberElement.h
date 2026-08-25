#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A00810)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_ELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x99F9DF0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_ELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x9A00880)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_CHOICEMEMBER_OFFSET UNITYSDK_OFFSET(0x9A00890)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_CHOICEMEMBER_OFFSET UNITYSDK_OFFSET(0x9A008A0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_CHOICETYPEDATA_OFFSET UNITYSDK_OFFSET(0x9A008B0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_CHOICETYPEDATA_OFFSET UNITYSDK_OFFSET(0x9A008C0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x99FB4E0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SETCHOICE_OFFSET UNITYSDK_OFFSET(0x9A008D0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_ISXMLTEXTCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x9A008E0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_ISXMLTEXTCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x9A008F0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberElement_TypeDefinitionIndex = 27930;

	class XmlTypeMapMemberElement : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::XmlTypeMapElementInfoList* _elementInfo; // 0x58
		::System::String* _choiceMember; // 0x60
		::System::Boolean _isTextCollector; // 0x68
		::System::Xml::Serialization::TypeData* _choiceTypeData; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfoList* get_ElementInfo()
		{
			return (return (::System::Xml::Serialization::XmlTypeMapElementInfoList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_ELEMENTINFO_OFFSET))(nullptr);
		}

		::System::Void set_ElementInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapElementInfoList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_ELEMENTINFO_OFFSET))(arg, nullptr);
		}

		::System::String* get_ChoiceMember()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_CHOICEMEMBER_OFFSET))(nullptr);
		}

		::System::Void set_ChoiceMember(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_CHOICEMEMBER_OFFSET))(str, nullptr);
		}

		::System::Xml::Serialization::TypeData* get_ChoiceTypeData()
		{
			return (return (::System::Xml::Serialization::TypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_CHOICETYPEDATA_OFFSET))(nullptr);
		}

		::System::Void set_ChoiceTypeData(::System::Xml::Serialization::TypeData* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::TypeData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_CHOICETYPEDATA_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_FINDELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetChoice(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SETCHOICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsXmlTextCollector()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_ISXMLTEXTCOLLECTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsXmlTextCollector(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_ISXMLTEXTCOLLECTOR_OFFSET))(arg, nullptr);
		}

	};
}

