#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_NOINTERPTEXTUREPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4A30)
#define UNITYENGINE_RENDERING_NOINTERPTEXTUREPARAMETER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FE4A80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpTextureParameter_TypeDefinitionIndex = 34123;

	class NoInterpTextureParameter : public ::System::Net::Configuration::SettingsSectionInternal
	{
	public:
		::System::Void .ctor(::UnityEngine::Texture* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPTEXTUREPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPTEXTUREPARAMETER_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

