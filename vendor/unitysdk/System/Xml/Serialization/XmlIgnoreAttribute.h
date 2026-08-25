#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLIGNOREATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99DEAA0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlIgnoreAttribute_TypeDefinitionIndex = 27890;

	class XmlIgnoreAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLIGNOREATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

