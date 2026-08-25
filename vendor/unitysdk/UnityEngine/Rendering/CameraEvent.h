#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CameraEvent; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraEvent_TypeDefinitionIndex = 31497;

	class CameraEvent : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::CameraEvent* BeforeDepthTexture; // 0x0
		::UnityEngine::Rendering::CameraEvent* AfterDepthTexture; // 0x0
		::UnityEngine::Rendering::CameraEvent* BeforeDepthNormalsTexture; // 0x0
		::UnityEngine::Rendering::CameraEvent* AfterDepthNormalsTexture; // 0x0
		::UnityEngine::Rendering::CameraEvent* BeforeGBuffer; // 0x0
		::UnityEngine::Rendering::CameraEvent* AfterGBuffer; // 0x0
		::UnityEngine::Rendering::CameraEvent* BeforeLighting; // 0x0
		::UnityEngine::Rendering::CameraEvent* AfterLighting; // 0x0
		::UnityEngine::Rendering::CameraEvent* BeforeFinalPass; // 0x0
		::UnityEngine::Rendering::CameraEvent* AfterFinalPass; // 0x0
		::UnityEngine::Rendering::CameraEvent* BeforeForwardOpaque; // 0x0
		::UnityEngine::Rendering::CameraEvent* AfterForwardOpaque; // 0x0
		::UnityEngine::Rendering::CameraEvent* BeforeImageEffectsOpaque; // 0x0
		::UnityEngine::Rendering::CameraEvent* AfterImageEffectsOpaque; // 0x0
		::UnityEngine::Rendering::CameraEvent* BeforeSkybox; // 0x0
		::UnityEngine::Rendering::CameraEvent* AfterSkybox; // 0x0
		::UnityEngine::Rendering::CameraEvent* BeforeForwardAlpha; // 0x0
		::UnityEngine::Rendering::CameraEvent* AfterForwardAlpha; // 0x0
		::UnityEngine::Rendering::CameraEvent* BeforeImageEffects; // 0x0
		::UnityEngine::Rendering::CameraEvent* AfterImageEffects; // 0x0
		::UnityEngine::Rendering::CameraEvent* AfterEverything; // 0x0
		::UnityEngine::Rendering::CameraEvent* BeforeReflections; // 0x0
		::UnityEngine::Rendering::CameraEvent* AfterReflections; // 0x0
		::UnityEngine::Rendering::CameraEvent* BeforeHaloAndLensFlares; // 0x0
		::UnityEngine::Rendering::CameraEvent* AfterHaloAndLensFlares; // 0x0

	};
}

