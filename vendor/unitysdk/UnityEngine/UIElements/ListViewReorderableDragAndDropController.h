#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ListView; }
namespace UnityEngine::UIElements { class DragVisualMode; }
namespace UnityEngine::UIElements { class IListDragAndDropArgs; }

#define UNITYENGINE_UIELEMENTS_LISTVIEWREORDERABLEDRAGANDDROPCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DA210)
#define UNITYENGINE_UIELEMENTS_LISTVIEWREORDERABLEDRAGANDDROPCONTROLLER_HANDLEDRAGANDDROP_OFFSET UNITYSDK_OFFSET(0xA3DA240)
#define UNITYENGINE_UIELEMENTS_LISTVIEWREORDERABLEDRAGANDDROPCONTROLLER_ONDROP_OFFSET UNITYSDK_OFFSET(0xA3DA3E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ListViewReorderableDragAndDropController_TypeDefinitionIndex = 30439;

	class ListViewReorderableDragAndDropController : public ::UnityEngine::UnityEngineModuleAssembly
	{
	public:
		::UnityEngine::UIElements::ListView* m_ListView; // 0x28

		::System::Void .ctor(::UnityEngine::UIElements::ListView* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ListView*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWREORDERABLEDRAGANDDROPCONTROLLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::DragVisualMode* HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* arg)
		{
			return (return (::UnityEngine::UIElements::DragVisualMode*(*)(::UnityEngine::UIElements::IListDragAndDropArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWREORDERABLEDRAGANDDROPCONTROLLER_HANDLEDRAGANDDROP_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IListDragAndDropArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWREORDERABLEDRAGANDDROPCONTROLLER_ONDROP_OFFSET))(arg, nullptr);
		}

	};
}

