#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_.CTOR_OFFSET UNITYSDK_OFFSET(0x99DA8B0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x99DA920)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x99DA970)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GETKEY_OFFSET UNITYSDK_OFFSET(0x99DAA70)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99DAAD0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributeOverrides_TypeDefinitionIndex = 27883;

	class XmlAttributeOverrides : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* overrides; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_.CTOR_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlAttributes* get_Item(::System::Type* arg)
		{
			return (return (::System::Xml::Serialization::XmlAttributes*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlAttributes* get_Item(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::XmlAttributes*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GET_ITEM_OFFSET))(arg, str, nullptr);
		}

		::System::Xml::Serialization::TypeMember* GetKey(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Xml::Serialization::TypeMember*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_GETKEY_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEOVERRIDES_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

	};
}

