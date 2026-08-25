#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPERESTRICTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E5740)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int SerializedTypeRestrictionAttribute_TypeDefinitionIndex = 36378;

	class SerializedTypeRestrictionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* type; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPERESTRICTIONATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

