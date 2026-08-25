#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements::UIR { class MeshHandle; }
namespace UnityEngine::UIElements::UIR { class Alloc; }
namespace UnityEngine::UIElements::UIR { class Page; }

	inline static constexpr unsigned int AllocToUpdate_TypeDefinitionIndex = 30765;

	class AllocToUpdate : public Il2CppObject
	{
	public:
		::System::UInt32 id; // 0x10
		::System::UInt32 allocTime; // 0x14
		::UnityEngine::UIElements::UIR::MeshHandle* meshHandle; // 0x18
		::UnityEngine::UIElements::UIR::Alloc* permAllocVerts; // 0x20
		::UnityEngine::UIElements::UIR::Alloc* permAllocIndices; // 0x38
		::UnityEngine::UIElements::UIR::Page* permPage; // 0x50
		::System::Boolean copyBackIndices; // 0x58

	};

