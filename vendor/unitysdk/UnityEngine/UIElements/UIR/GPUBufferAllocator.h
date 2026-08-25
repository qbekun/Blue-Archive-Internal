#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class BestFitAllocator; }
namespace UnityEngine::UIElements::UIR { class Alloc; }

#define UNITYENGINE_UIELEMENTS_UIR_GPUBUFFERALLOCATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA34ED60)
#define UNITYENGINE_UIELEMENTS_UIR_GPUBUFFERALLOCATOR_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xA348E10)
#define UNITYENGINE_UIELEMENTS_UIR_GPUBUFFERALLOCATOR_FREE_OFFSET UNITYSDK_OFFSET(0xA348F70)
#define UNITYENGINE_UIELEMENTS_UIR_GPUBUFFERALLOCATOR_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA34EE30)
#define UNITYENGINE_UIELEMENTS_UIR_GPUBUFFERALLOCATOR_HIGHLOWCOLLIDE_OFFSET UNITYSDK_OFFSET(0xA34EE00)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int GPUBufferAllocator_TypeDefinitionIndex = 30776;

	class GPUBufferAllocator : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::UIR::BestFitAllocator* m_Low; // 0x10
		::UnityEngine::UIElements::UIR::BestFitAllocator* m_High; // 0x18

		::System::Void .ctor(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GPUBUFFERALLOCATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::UIR::Alloc* Allocate(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::UIElements::UIR::Alloc*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GPUBUFFERALLOCATOR_ALLOCATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Free(::UnityEngine::UIElements::UIR::Alloc* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::Alloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GPUBUFFERALLOCATOR_FREE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GPUBUFFERALLOCATOR_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean HighLowCollide()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GPUBUFFERALLOCATOR_HIGHLOWCOLLIDE_OFFSET))(nullptr);
		}

	};
}

