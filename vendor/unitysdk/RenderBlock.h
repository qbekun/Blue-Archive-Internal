#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }

#define RENDERBLOCK_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA059190)

	inline static constexpr unsigned int RenderBlock_TypeDefinitionIndex = 32631;

	class RenderBlock : public Il2CppObject
	{
	public:
		::System::String* k_Name; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* beforeRendering; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* mainRenderingOpaque; // 0x8
		::UnityEngine::Rendering::ProfilingSampler* mainRenderingTransparent; // 0x10
		::UnityEngine::Rendering::ProfilingSampler* afterRendering; // 0x18

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERBLOCK_.CCTOR_OFFSET))(nullptr);
		}

	};

