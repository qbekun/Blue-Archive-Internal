#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StartDragArgs; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::UIElements { class DragVisualMode; }
namespace UnityEngine::UIElements { class DragAndDropData; }

#define UNITYENGINE_UIELEMENTS_IDRAGANDDROP_STARTDRAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IDRAGANDDROP_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IDRAGANDDROP_ACCEPTDRAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IDRAGANDDROP_DRAGCLEANUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IDRAGANDDROP_SETVISUALMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IDRAGANDDROP_GET_DATA_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IDragAndDrop_TypeDefinitionIndex = 30425;

	class IDragAndDrop : public Il2CppObject
	{
	public:
		::System::Void StartDrag(::UnityEngine::UIElements::StartDragArgs* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StartDragArgs*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IDRAGANDDROP_STARTDRAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateDrag(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IDRAGANDDROP_UPDATEDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void AcceptDrag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IDRAGANDDROP_ACCEPTDRAG_OFFSET))(nullptr);
		}

		::System::Void DragCleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IDRAGANDDROP_DRAGCLEANUP_OFFSET))(nullptr);
		}

		::System::Void SetVisualMode(::UnityEngine::UIElements::DragVisualMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DragVisualMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IDRAGANDDROP_SETVISUALMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::DragAndDropData* get_data()
		{
			return (return (::UnityEngine::UIElements::DragAndDropData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IDRAGANDDROP_GET_DATA_OFFSET))(nullptr);
		}

	};
}

