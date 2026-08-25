#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPILATIONSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E1D90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPILATIONSETTINGS_GET_ENABLEUPACHECK_OFFSET UNITYSDK_OFFSET(0x98E1DB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaCompilationSettings_TypeDefinitionIndex = 28136;

	class XmlSchemaCompilationSettings : public Il2CppObject
	{
	public:
		::System::Boolean enableUpaCheck; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPILATIONSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_EnableUpaCheck()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPILATIONSETTINGS_GET_ENABLEUPACHECK_OFFSET))(nullptr);
		}

	};
}

