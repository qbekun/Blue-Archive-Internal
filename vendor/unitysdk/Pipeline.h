#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }

#define PIPELINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA08CD70)

	inline static constexpr unsigned int Pipeline_TypeDefinitionIndex = 32791;

	class Pipeline : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ProfilingSampler* beginContextRendering; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* endContextRendering; // 0x8
		::UnityEngine::Rendering::ProfilingSampler* beginCameraRendering; // 0x10
		::UnityEngine::Rendering::ProfilingSampler* endCameraRendering; // 0x18
		::System::String* k_Name; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* initializeCameraData; // 0x20
		::UnityEngine::Rendering::ProfilingSampler* initializeStackedCameraData; // 0x28
		::UnityEngine::Rendering::ProfilingSampler* initializeAdditionalCameraData; // 0x30
		::UnityEngine::Rendering::ProfilingSampler* initializeRenderingData; // 0x38
		::UnityEngine::Rendering::ProfilingSampler* initializeShadowData; // 0x40
		::UnityEngine::Rendering::ProfilingSampler* initializeLightData; // 0x48
		::UnityEngine::Rendering::ProfilingSampler* getPerObjectLightFlags; // 0x50
		::UnityEngine::Rendering::ProfilingSampler* getMainLightIndex; // 0x58
		::UnityEngine::Rendering::ProfilingSampler* setupPerFrameShaderConstants; // 0x60

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINE_.CCTOR_OFFSET))(nullptr);
		}

	};

