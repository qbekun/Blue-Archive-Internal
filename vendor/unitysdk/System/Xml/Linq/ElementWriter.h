#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_ELEMENTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9859440)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEELEMENT_OFFSET UNITYSDK_OFFSET(0x9859470)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x985B260)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_PUSHANCESTORS_OFFSET UNITYSDK_OFFSET(0x985ABF0)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_PUSHELEMENT_OFFSET UNITYSDK_OFFSET(0x985B5A0)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x985B0E0)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x985B1A0)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x985AEE0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int ElementWriter_TypeDefinitionIndex = 37303;

	class ElementWriter : public Il2CppObject
	{
	public:
		::System::Xml::XmlWriter* _writer; // 0x10
		::System::Xml::Linq::NamespaceResolver* _resolver; // 0x18

		::System::Void .ctor(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void WriteElement(::System::Xml::Linq::XElement* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEELEMENT_OFFSET))(arg, nullptr);
		}

		::System::String* GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Xml::Linq::XNamespace*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_GETPREFIXOFNAMESPACE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PushAncestors(::System::Xml::Linq::XElement* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_PUSHANCESTORS_OFFSET))(arg, nullptr);
		}

		::System::Void PushElement(::System::Xml::Linq::XElement* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_PUSHELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteEndElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEENDELEMENT_OFFSET))(nullptr);
		}

		::System::Void WriteFullEndElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEFULLENDELEMENT_OFFSET))(nullptr);
		}

		::System::Void WriteStartElement(::System::Xml::Linq::XElement* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_WRITESTARTELEMENT_OFFSET))(arg, nullptr);
		}

	};
}

