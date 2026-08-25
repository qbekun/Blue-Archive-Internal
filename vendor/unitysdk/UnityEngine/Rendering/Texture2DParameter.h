#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_TEXTURE2DPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4B60)
#define UNITYENGINE_RENDERING_TEXTURE2DPARAMETER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FE4BB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Texture2DParameter_TypeDefinitionIndex = 34124;

	class Texture2DParameter : public ::System::Net::Configuration::SettingsSectionInternal
	{
	public:
		::System::Void .ctor(::UnityEngine::Texture* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DPARAMETER_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

