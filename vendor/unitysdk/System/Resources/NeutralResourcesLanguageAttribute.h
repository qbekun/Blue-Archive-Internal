#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B850)
#define SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE_GET_CULTURENAME_OFFSET UNITYSDK_OFFSET(0x922B8E0)
#define SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x922B8F0)

namespace System::Resources
{
	inline static constexpr unsigned int NeutralResourcesLanguageAttribute_TypeDefinitionIndex = 24809;

	class NeutralResourcesLanguageAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _CultureName_k__BackingField; // 0x10
		::System::Resources::UltimateResourceFallbackLocation* _Location_k__BackingField; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_CultureName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE_GET_CULTURENAME_OFFSET))(nullptr);
		}

		::System::Resources::UltimateResourceFallbackLocation* get_Location()
		{
			return (return (::System::Resources::UltimateResourceFallbackLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE_GET_LOCATION_OFFSET))(nullptr);
		}

	};
}

