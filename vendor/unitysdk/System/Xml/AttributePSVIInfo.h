#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_ATTRIBUTEPSVIINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9983CC0)
#define SYSTEM_XML_ATTRIBUTEPSVIINFO_RESET_OFFSET UNITYSDK_OFFSET(0x9983D30)

namespace System::Xml
{
	inline static constexpr unsigned int AttributePSVIInfo_TypeDefinitionIndex = 27736;

	class AttributePSVIInfo : public Il2CppObject
	{
	public:
		::System::String* localName; // 0x10
		::System::String* namespaceUri; // 0x18
		::System::Object* typedAttributeValue; // 0x20
		::System::Xml::Schema::XmlSchemaInfo* attributeSchemaInfo; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_ATTRIBUTEPSVIINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_ATTRIBUTEPSVIINFO_RESET_OFFSET))(nullptr);
		}

	};
}

