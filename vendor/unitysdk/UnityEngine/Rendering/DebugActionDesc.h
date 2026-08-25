#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::Rendering { class DebugActionRepeatMode; }

#define UNITYENGINE_RENDERING_DEBUGACTIONDESC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FAADD0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugActionDesc_TypeDefinitionIndex = 33937;

	class DebugActionDesc : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputAction* buttonAction; // 0x10
		::UnityEngine::Rendering::DebugActionRepeatMode* repeatMode; // 0x18
		::System::Single repeatDelay; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONDESC_.CTOR_OFFSET))(nullptr);
		}

	};
}

