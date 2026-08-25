#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }

#define RENDERPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA059340)

	inline static constexpr unsigned int RenderPass_TypeDefinitionIndex = 32632;

	class RenderPass : public Il2CppObject
	{
	public:
		::System::String* k_Name; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* configure; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERPASS_.CCTOR_OFFSET))(nullptr);
		}

	};

