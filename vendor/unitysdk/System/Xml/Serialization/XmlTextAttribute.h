#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99FF3B0)
#define SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x99FF3C0)
#define SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x99FF420)
#define SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99FF430)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTextAttribute_TypeDefinitionIndex = 27924;

	class XmlTextAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* dataType; // 0x10
		::System::Type* type; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_DataType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_GET_DATATYPE_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

	};
}

