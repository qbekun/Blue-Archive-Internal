#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class TextureDimension; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_TEXTUREPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE48A0)
#define UNITYENGINE_RENDERING_TEXTUREPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE48F0)
#define UNITYENGINE_RENDERING_TEXTUREPARAMETER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FE4950)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureParameter_TypeDefinitionIndex = 34122;

	class TextureParameter : public ::System::Net::Configuration::SettingsSectionInternal
	{
	public:
		::UnityEngine::Rendering::TextureDimension* dimension; // 0x20

		::System::Void .ctor(::UnityEngine::Texture* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Texture* arg, ::UnityEngine::Rendering::TextureDimension* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Rendering::TextureDimension*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREPARAMETER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREPARAMETER_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

