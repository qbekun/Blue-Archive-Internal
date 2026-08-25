#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class CameraRenderType; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CameraRenderType_TypeDefinitionIndex = 32771;

	class CameraRenderType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::CameraRenderType* Base; // 0x0
		::UnityEngine::Rendering::Universal::CameraRenderType* Overlay; // 0x0

	};
}

