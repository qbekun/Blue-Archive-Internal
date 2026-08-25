#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugSceneOverrideMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugSceneOverrideMode_TypeDefinitionIndex = 38085;

	class DebugSceneOverrideMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DebugSceneOverrideMode* None; // 0x0
		::UnityEngine::Rendering::Universal::DebugSceneOverrideMode* Overdraw; // 0x0
		::UnityEngine::Rendering::Universal::DebugSceneOverrideMode* Wireframe; // 0x0
		::UnityEngine::Rendering::Universal::DebugSceneOverrideMode* SolidWireframe; // 0x0
		::UnityEngine::Rendering::Universal::DebugSceneOverrideMode* ShadedWireframe; // 0x0

	};
}

