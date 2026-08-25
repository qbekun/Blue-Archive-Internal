#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLIMPLEMENTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x999B5B0)
#define SYSTEM_XML_XMLIMPLEMENTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x999B6F0)
#define SYSTEM_XML_XMLIMPLEMENTATION_CREATEDOCUMENT_OFFSET UNITYSDK_OFFSET(0x999B720)
#define SYSTEM_XML_XMLIMPLEMENTATION_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x999B780)

namespace System::Xml
{
	inline static constexpr unsigned int XmlImplementation_TypeDefinitionIndex = 27766;

	class XmlImplementation : public Il2CppObject
	{
	public:
		::System::Xml::XmlNameTable* nameTable; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLIMPLEMENTATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlNameTable* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLIMPLEMENTATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlDocument* CreateDocument()
		{
			return (return (::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLIMPLEMENTATION_CREATEDOCUMENT_OFFSET))(nullptr);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return (return (::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLIMPLEMENTATION_GET_NAMETABLE_OFFSET))(nullptr);
		}

	};
}

