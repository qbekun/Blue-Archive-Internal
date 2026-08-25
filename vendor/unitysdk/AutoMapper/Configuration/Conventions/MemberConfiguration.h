#pragma once
#include "../../../unitysdk.h"

namespace AutoMapper { class INamingConvention; }

#define AUTOMAPPER_CONFIGURATION_CONVENTIONS_MEMBERCONFIGURATION_GET_NAMETOMEMBERMAPPERS_OFFSET UNITYSDK_OFFSET(0x4D4D10)
#define AUTOMAPPER_CONFIGURATION_CONVENTIONS_MEMBERCONFIGURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D1120)

namespace AutoMapper::Configuration::Conventions
{
	inline static constexpr unsigned int MemberConfiguration_TypeDefinitionIndex = 37657;

	class MemberConfiguration : public Il2CppObject
	{
	public:
		::AutoMapper::INamingConvention* _SourceNamingConvention_k__BackingField; // 0x10
		::AutoMapper::INamingConvention* _DestinationNamingConvention_k__BackingField; // 0x18
		Il2CppObject* _NameToMemberMappers_k__BackingField; // 0x20

		Il2CppObject* get_NameToMemberMappers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_CONVENTIONS_MEMBERCONFIGURATION_GET_NAMETOMEMBERMAPPERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_CONVENTIONS_MEMBERCONFIGURATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

