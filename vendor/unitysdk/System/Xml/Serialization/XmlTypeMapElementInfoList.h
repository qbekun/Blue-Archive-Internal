#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFOLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x99FFB70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapElementInfoList_TypeDefinitionIndex = 27927;

	class XmlTypeMapElementInfoList : public LifetimeByEmitterSpeedModule
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFOLIST_.CTOR_OFFSET))(nullptr);
		}

	};
}

