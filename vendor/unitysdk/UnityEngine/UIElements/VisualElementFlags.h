#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElementFlags; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementFlags_TypeDefinitionIndex = 30245;

	class VisualElementFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::VisualElementFlags* WorldTransformDirty; // 0x0
		::UnityEngine::UIElements::VisualElementFlags* WorldTransformInverseDirty; // 0x0
		::UnityEngine::UIElements::VisualElementFlags* WorldClipDirty; // 0x0
		::UnityEngine::UIElements::VisualElementFlags* BoundingBoxDirty; // 0x0
		::UnityEngine::UIElements::VisualElementFlags* WorldBoundingBoxDirty; // 0x0
		::UnityEngine::UIElements::VisualElementFlags* LayoutManual; // 0x0
		::UnityEngine::UIElements::VisualElementFlags* CompositeRoot; // 0x0
		::UnityEngine::UIElements::VisualElementFlags* RequireMeasureFunction; // 0x0
		::UnityEngine::UIElements::VisualElementFlags* EnableViewDataPersistence; // 0x0
		::UnityEngine::UIElements::VisualElementFlags* DisableClipping; // 0x0
		::UnityEngine::UIElements::VisualElementFlags* NeedsAttachToPanelEvent; // 0x0
		::UnityEngine::UIElements::VisualElementFlags* HierarchyDisplayed; // 0x0
		::UnityEngine::UIElements::VisualElementFlags* StyleInitialized; // 0x0
		::UnityEngine::UIElements::VisualElementFlags* Init; // 0x0

	};
}

