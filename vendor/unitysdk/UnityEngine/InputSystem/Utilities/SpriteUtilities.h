#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Color32; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SPRITEUTILITIES_CREATECIRCLESPRITE_OFFSET UNITYSDK_OFFSET(0x9E88680)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int SpriteUtilities_TypeDefinitionIndex = 28957;

	class SpriteUtilities : public Il2CppObject
	{
	public:
		::UnityEngine::Sprite* CreateCircleSprite(::System::Int32 arg, ::UnityEngine::Color32* arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::System::Int32, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SPRITEUTILITIES_CREATECIRCLESPRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

