#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPECONVERTORATTRIBUTE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x99D2810)
#define SYSTEM_XML_SERIALIZATION_XMLTYPECONVERTORATTRIBUTE_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x99D2820)
#define SYSTEM_XML_SERIALIZATION_XMLTYPECONVERTORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D2830)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeConvertorAttribute_TypeDefinitionIndex = 27872;

	class XmlTypeConvertorAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Method_k__BackingField; // 0x10

		::System::String* get_Method()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPECONVERTORATTRIBUTE_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Void set_Method(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPECONVERTORATTRIBUTE_SET_METHOD_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPECONVERTORATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

