#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class PropagationPaths; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FDFF0)
#define UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_COPY_OFFSET UNITYSDK_OFFSET(0xA3FE0F0)
#define UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_BUILD_OFFSET UNITYSDK_OFFSET(0xA3FE1F0)
#define UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_RELEASE_OFFSET UNITYSDK_OFFSET(0xA3FE510)
#define UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3FE640)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PropagationPaths_TypeDefinitionIndex = 30542;

	class PropagationPaths : public Il2CppObject
	{
	public:
		Il2CppObject* s_Pool; // 0x0
		Il2CppObject* trickleDownPath; // 0x10
		Il2CppObject* targetElements; // 0x18
		Il2CppObject* bubbleUpPath; // 0x20
		::System::Int32 k_DefaultPropagationDepth; // 0x0
		::System::Int32 k_DefaultTargetCount; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::PropagationPaths* Copy(::UnityEngine::UIElements::PropagationPaths* arg)
		{
			return (return (::UnityEngine::UIElements::PropagationPaths*(*)(::UnityEngine::UIElements::PropagationPaths*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_COPY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::PropagationPaths* Build(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::EventBase* arg, Type* arg)
		{
			return (return (::UnityEngine::UIElements::PropagationPaths*(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*, Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_BUILD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_RELEASE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PROPAGATIONPATHS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

