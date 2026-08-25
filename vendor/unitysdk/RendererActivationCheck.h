#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class GameObject; }

#define RENDERERACTIVATIONCHECK_UPDATE_OFFSET UNITYSDK_OFFSET(0x13C1280)
#define RENDERERACTIVATIONCHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x13C1370)

	inline static constexpr unsigned int RendererActivationCheck_TypeDefinitionIndex = 1033;

	class RendererActivationCheck : public Il2CppObject
	{
	public:
		::UnityEngine::Renderer* Target; // 0x18
		::UnityEngine::GameObject* ActivationTarget; // 0x20

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERERACTIVATIONCHECK_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERERACTIVATIONCHECK_.CTOR_OFFSET))(nullptr);
		}

	};

