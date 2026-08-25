#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99DEA60)
#define SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99DEA90)
#define SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99DC970)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlEnumAttribute_TypeDefinitionIndex = 27889;

	class XmlEnumAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* name; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

	};
}

