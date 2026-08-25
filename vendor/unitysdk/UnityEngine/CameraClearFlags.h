#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class CameraClearFlags; }

namespace UnityEngine
{
	inline static constexpr unsigned int CameraClearFlags_TypeDefinitionIndex = 31037;

	class CameraClearFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::CameraClearFlags* Skybox; // 0x0
		::UnityEngine::CameraClearFlags* Color; // 0x0
		::UnityEngine::CameraClearFlags* SolidColor; // 0x0
		::UnityEngine::CameraClearFlags* Depth; // 0x0
		::UnityEngine::CameraClearFlags* Nothing; // 0x0

	};
}

