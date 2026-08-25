#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLINCLUDEATTRIBUTE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x99DEAB0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlIncludeAttribute_TypeDefinitionIndex = 27891;

	class XmlIncludeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* type; // 0x10

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLINCLUDEATTRIBUTE_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

