#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StartDragArgs; }
namespace UnityEngine::UIElements { class DragVisualMode; }

#define UNITYENGINE_UIELEMENTS_IDRAGANDDROPCONTROLLER`1_CANSTARTDRAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IDRAGANDDROPCONTROLLER`1_SETUPDRAGANDDROP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IDRAGANDDROPCONTROLLER`1_HANDLEDRAGANDDROP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IDRAGANDDROPCONTROLLER`1_ONDROP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IDRAGANDDROPCONTROLLER`1_DRAGCLEANUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IDRAGANDDROPCONTROLLER`1_GETSORTEDSELECTEDIDS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IDragAndDropController`1_TypeDefinitionIndex = 30428;

	class IDragAndDropController`1 : public Il2CppObject
	{
	public:
		::System::Boolean CanStartDrag(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IDRAGANDDROPCONTROLLER`1_CANSTARTDRAG_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StartDragArgs* SetupDragAndDrop(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::UIElements::StartDragArgs*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IDRAGANDDROPCONTROLLER`1_SETUPDRAGANDDROP_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::DragVisualMode* HandleDragAndDrop(Il2CppObject* arg)
		{
			return (return (::UnityEngine::UIElements::DragVisualMode*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IDRAGANDDROPCONTROLLER`1_HANDLEDRAGANDDROP_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrop(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IDRAGANDDROPCONTROLLER`1_ONDROP_OFFSET))(arg, nullptr);
		}

		::System::Void DragCleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IDRAGANDDROPCONTROLLER`1_DRAGCLEANUP_OFFSET))(nullptr);
		}

		Il2CppObject* GetSortedSelectedIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IDRAGANDDROPCONTROLLER`1_GETSORTEDSELECTEDIDS_OFFSET))(nullptr);
		}

	};
}

