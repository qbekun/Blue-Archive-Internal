#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalEntityChunk; }
namespace UnityEngine::Rendering::Universal { class DecalCachedChunk; }
namespace UnityEngine::Rendering::Universal { class DecalCulledChunk; }
namespace UnityEngine::Rendering::Universal { class DecalDrawCallChunk; }

	inline static constexpr unsigned int CombinedChunks_TypeDefinitionIndex = 32612;

	class CombinedChunks : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DecalEntityChunk* entityChunk; // 0x10
		::UnityEngine::Rendering::Universal::DecalCachedChunk* cachedChunk; // 0x18
		::UnityEngine::Rendering::Universal::DecalCulledChunk* culledChunk; // 0x20
		::UnityEngine::Rendering::Universal::DecalDrawCallChunk* drawCallChunk; // 0x28
		::System::Int32 previousChunkIndex; // 0x30
		::System::Boolean valid; // 0x34

	};

