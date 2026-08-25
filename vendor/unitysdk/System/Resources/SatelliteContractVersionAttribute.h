#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_SATELLITECONTRACTVERSIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x922DEA0)
#define SYSTEM_RESOURCES_SATELLITECONTRACTVERSIONATTRIBUTE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x922DF30)

namespace System::Resources
{
	inline static constexpr unsigned int SatelliteContractVersionAttribute_TypeDefinitionIndex = 24814;

	class SatelliteContractVersionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Version_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_SATELLITECONTRACTVERSIONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_SATELLITECONTRACTVERSIONATTRIBUTE_GET_VERSION_OFFSET))(nullptr);
		}

	};
}

