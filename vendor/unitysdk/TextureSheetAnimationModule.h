#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define TEXTURESHEETANIMATIONMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2973E0)

	inline static constexpr unsigned int TextureSheetAnimationModule_TypeDefinitionIndex = 36918;

	class TextureSheetAnimationModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTURESHEETANIMATIONMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

