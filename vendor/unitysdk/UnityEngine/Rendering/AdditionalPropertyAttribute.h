#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_ADDITIONALPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA7750)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AdditionalPropertyAttribute_TypeDefinitionIndex = 33892;

	class AdditionalPropertyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ADDITIONALPROPERTYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

