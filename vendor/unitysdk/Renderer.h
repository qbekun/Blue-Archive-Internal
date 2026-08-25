#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }

#define RENDERER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA08D250)

	inline static constexpr unsigned int Renderer_TypeDefinitionIndex = 32788;

	class Renderer : public Il2CppObject
	{
	public:
		::System::String* k_Name; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* setupCullingParameters; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* setup; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERER_.CCTOR_OFFSET))(nullptr);
		}

	};

