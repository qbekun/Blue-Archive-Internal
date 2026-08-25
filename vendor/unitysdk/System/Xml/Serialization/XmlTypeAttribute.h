#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_INCLUDEINSCHEMA_OFFSET UNITYSDK_OFFSET(0x99FF4C0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x99FF4D0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x99FF4E0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99FF540)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeAttribute_TypeDefinitionIndex = 27925;

	class XmlTypeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean includeInSchema; // 0x10
		::System::String* ns; // 0x18
		::System::String* typeName; // 0x20

		::System::Boolean get_IncludeInSchema()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_INCLUDEINSCHEMA_OFFSET))(nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_TYPENAME_OFFSET))(nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

	};
}

