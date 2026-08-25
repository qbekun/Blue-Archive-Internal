#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements::UIR { class RenderChain; }

#define RENDERCHAINSTATICINDEXALLOCATOR_ALLOCATEINDEX_OFFSET UNITYSDK_OFFSET(0xA43A170)
#define RENDERCHAINSTATICINDEXALLOCATOR_FREEINDEX_OFFSET UNITYSDK_OFFSET(0xA43A6F0)
#define RENDERCHAINSTATICINDEXALLOCATOR_ACCESSINDEX_OFFSET UNITYSDK_OFFSET(0xA43E260)
#define RENDERCHAINSTATICINDEXALLOCATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA43F050)

	inline static constexpr unsigned int RenderChainStaticIndexAllocator_TypeDefinitionIndex = 30729;

	class RenderChainStaticIndexAllocator : public Il2CppObject
	{
	public:
		Il2CppObject* renderChains; // 0x0

		::System::Int32 AllocateIndex(::UnityEngine::UIElements::UIR::RenderChain* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERCHAINSTATICINDEXALLOCATOR_ALLOCATEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void FreeIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RENDERCHAINSTATICINDEXALLOCATOR_FREEINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::UIR::RenderChain* AccessIndex(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::UIR::RenderChain*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RENDERCHAINSTATICINDEXALLOCATOR_ACCESSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERCHAINSTATICINDEXALLOCATOR_.CCTOR_OFFSET))(nullptr);
		}

	};

