#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class OpenGLESVersion; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int OpenGLESVersion_TypeDefinitionIndex = 31523;

	class OpenGLESVersion : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::OpenGLESVersion* None; // 0x0
		::UnityEngine::Rendering::OpenGLESVersion* OpenGLES20; // 0x0
		::UnityEngine::Rendering::OpenGLESVersion* OpenGLES30; // 0x0
		::UnityEngine::Rendering::OpenGLESVersion* OpenGLES31; // 0x0
		::UnityEngine::Rendering::OpenGLESVersion* OpenGLES31AEP; // 0x0
		::UnityEngine::Rendering::OpenGLESVersion* OpenGLES32; // 0x0

	};
}

