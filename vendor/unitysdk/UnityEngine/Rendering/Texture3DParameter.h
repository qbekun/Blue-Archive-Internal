#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_TEXTURE3DPARAMETER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FE4C90)
#define UNITYENGINE_RENDERING_TEXTURE3DPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4D70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Texture3DParameter_TypeDefinitionIndex = 34125;

	class Texture3DParameter : public ::System::Net::Configuration::SettingsSectionInternal
	{
	public:
		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE3DPARAMETER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Texture* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE3DPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

