#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_CUBEMAPPARAMETER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FE5020)
#define UNITYENGINE_RENDERING_CUBEMAPPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE5100)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CubemapParameter_TypeDefinitionIndex = 34128;

	class CubemapParameter : public ::System::Net::Configuration::SettingsSectionInternal
	{
	public:
		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CUBEMAPPARAMETER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Texture* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CUBEMAPPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

