#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class Alloc; }

#define UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA34E350)
#define UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_GET_TOTALSIZE_OFFSET UNITYSDK_OFFSET(0xA34E4F0)
#define UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_GET_HIGHWATERMARK_OFFSET UNITYSDK_OFFSET(0xA34E500)
#define UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xA34E510)
#define UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_FREE_OFFSET UNITYSDK_OFFSET(0xA34E910)
#define UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_COALESCEBLOCKWITHPREVIOUS_OFFSET UNITYSDK_OFFSET(0xA34EB80)
#define UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_BESTFITFINDAVAILABLEBLOCK_OFFSET UNITYSDK_OFFSET(0xA34E750)
#define UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_SPLITBLOCK_OFFSET UNITYSDK_OFFSET(0xA34E7B0)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int BestFitAllocator_TypeDefinitionIndex = 30775;

	class BestFitAllocator : public Il2CppObject
	{
	public:
		::System::UInt32 _totalSize_k__BackingField; // 0x10
		Block* m_FirstBlock; // 0x18
		Block* m_FirstAvailableBlock; // 0x20
		BlockPool* m_BlockPool; // 0x28
		::System::UInt32 m_HighWatermark; // 0x30

		::System::Void .ctor(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_totalSize()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_GET_TOTALSIZE_OFFSET))(nullptr);
		}

		::System::UInt32 get_highWatermark()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_GET_HIGHWATERMARK_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::UIR::Alloc* Allocate(::System::UInt32 arg)
		{
			return (return (::UnityEngine::UIElements::UIR::Alloc*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_ALLOCATE_OFFSET))(arg, nullptr);
		}

		::System::Void Free(::UnityEngine::UIElements::UIR::Alloc* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::Alloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_FREE_OFFSET))(arg, nullptr);
		}

		Block* CoalesceBlockWithPrevious(Block* arg)
		{
			return (return (Block*(*)(Block*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_COALESCEBLOCKWITHPREVIOUS_OFFSET))(arg, nullptr);
		}

		Block* BestFitFindAvailableBlock(::System::UInt32 arg)
		{
			return (return (Block*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_BESTFITFINDAVAILABLEBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void SplitBlock(Block* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(Block*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BESTFITALLOCATOR_SPLITBLOCK_OFFSET))(arg, arg, nullptr);
		}

	};
}

