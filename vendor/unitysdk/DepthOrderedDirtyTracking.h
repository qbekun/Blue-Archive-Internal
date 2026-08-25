#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::UIR { class RenderDataDirtyTypes; }
namespace UnityEngine::UIElements::UIR { class RenderDataDirtyTypeClasses; }

#define DEPTHORDEREDDIRTYTRACKING_ENSUREFITS_OFFSET UNITYSDK_OFFSET(0xA43DA40)
#define DEPTHORDEREDDIRTYTRACKING_REGISTERDIRTY_OFFSET UNITYSDK_OFFSET(0xA43D310)
#define DEPTHORDEREDDIRTYTRACKING_CLEARDIRTY_OFFSET UNITYSDK_OFFSET(0xA43B1B0)
#define DEPTHORDEREDDIRTYTRACKING_RESET_OFFSET UNITYSDK_OFFSET(0xA43A110)

	inline static constexpr unsigned int DepthOrderedDirtyTracking_TypeDefinitionIndex = 30728;

	class DepthOrderedDirtyTracking : public Il2CppObject
	{
	public:
		Il2CppObject* heads; // 0x10
		Il2CppObject* tails; // 0x18
		::Il2CppArray<::System::Object*>* minDepths; // 0x20
		::Il2CppArray<::System::Object*>* maxDepths; // 0x28
		::System::UInt32 dirtyID; // 0x30

		::System::Void EnsureFits(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEPTHORDEREDDIRTYTRACKING_ENSUREFITS_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterDirty(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes* arg, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes*, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses*, ::PVOID))((::PBYTE)hIl2Cpp + DEPTHORDEREDDIRTYTRACKING_REGISTERDIRTY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ClearDirty(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + DEPTHORDEREDDIRTYTRACKING_CLEARDIRTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPTHORDEREDDIRTYTRACKING_RESET_OFFSET))(nullptr);
		}

	};

