#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_OBJECTMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x99DEBB0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int ObjectMap_TypeDefinitionIndex = 27893;

	class ObjectMap : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_OBJECTMAP_.CTOR_OFFSET))(nullptr);
		}

	};
}

