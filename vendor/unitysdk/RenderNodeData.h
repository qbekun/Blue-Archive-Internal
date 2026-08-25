#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::UIElements::UIR { class RenderChainCommand; }
namespace UnityEngine::UIElements::UIR { class UIRenderDevice; }
namespace UnityEngine { class Texture; }

	inline static constexpr unsigned int RenderNodeData_TypeDefinitionIndex = 30730;

	class RenderNodeData : public Il2CppObject
	{
	public:
		::UnityEngine::Material* standardMaterial; // 0x10
		::UnityEngine::Material* initialMaterial; // 0x18
		::UnityEngine::MaterialPropertyBlock* matPropBlock; // 0x20
		::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand; // 0x28
		::UnityEngine::UIElements::UIR::UIRenderDevice* device; // 0x30
		::UnityEngine::Texture* vectorAtlas; // 0x38
		::UnityEngine::Texture* shaderInfoAtlas; // 0x40
		::System::Single dpiScale; // 0x48
		Il2CppObject* transformConstants; // 0x50
		Il2CppObject* clipRectConstants; // 0x60

	};

