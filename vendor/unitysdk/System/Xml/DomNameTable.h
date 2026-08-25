#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_DOMNAMETABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x998D650)
#define SYSTEM_XML_DOMNAMETABLE_GETNAME_OFFSET UNITYSDK_OFFSET(0x998D6F0)
#define SYSTEM_XML_DOMNAMETABLE_ADDNAME_OFFSET UNITYSDK_OFFSET(0x998D890)
#define SYSTEM_XML_DOMNAMETABLE_GROW_OFFSET UNITYSDK_OFFSET(0x998DB50)

namespace System::Xml
{
	inline static constexpr unsigned int DomNameTable_TypeDefinitionIndex = 27748;

	class DomNameTable : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* entries; // 0x10
		::System::Int32 count; // 0x18
		::System::Int32 mask; // 0x1C
		::System::Xml::XmlDocument* ownerDocument; // 0x20
		::System::Xml::XmlNameTable* nameTable; // 0x28

		::System::Void .ctor(::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOMNAMETABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlName* GetName(::System::String* str, ::System::String* str, ::System::String* str, ::System::Xml::Schema::IXmlSchemaInfo* arg)
		{
			return (return (::System::Xml::XmlName*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Xml::Schema::IXmlSchemaInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOMNAMETABLE_GETNAME_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Xml::XmlName* AddName(::System::String* str, ::System::String* str, ::System::String* str, ::System::Xml::Schema::IXmlSchemaInfo* arg)
		{
			return (return (::System::Xml::XmlName*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Xml::Schema::IXmlSchemaInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOMNAMETABLE_ADDNAME_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void Grow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOMNAMETABLE_GROW_OFFSET))(nullptr);
		}

	};
}

