#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UIElements::UIR { class State; }
namespace UnityEngine::UIElements::UIR { class Page; }

	inline static constexpr unsigned int EvaluationState_TypeDefinitionIndex = 30768;

	class EvaluationState : public Il2CppObject
	{
	public:
		::UnityEngine::MaterialPropertyBlock* stateMatProps; // 0x10
		::UnityEngine::Material* defaultMat; // 0x18
		::UnityEngine::UIElements::UIR::State* curState; // 0x20
		::UnityEngine::UIElements::UIR::Page* curPage; // 0x40
		::System::Boolean mustApplyMaterial; // 0x48
		::System::Boolean mustApplyCommonBlock; // 0x49
		::System::Boolean mustApplyStateBlock; // 0x4A
		::System::Boolean mustApplyStencil; // 0x4B

	};

