#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int ChainBuilderStats_TypeDefinitionIndex = 30727;

	class ChainBuilderStats : public Il2CppObject
	{
	public:
		::System::UInt32 elementsAdded; // 0x10
		::System::UInt32 elementsRemoved; // 0x14
		::System::UInt32 recursiveClipUpdates; // 0x18
		::System::UInt32 recursiveClipUpdatesExpanded; // 0x1C
		::System::UInt32 nonRecursiveClipUpdates; // 0x20
		::System::UInt32 recursiveTransformUpdates; // 0x24
		::System::UInt32 recursiveTransformUpdatesExpanded; // 0x28
		::System::UInt32 recursiveOpacityUpdates; // 0x2C
		::System::UInt32 recursiveOpacityUpdatesExpanded; // 0x30
		::System::UInt32 colorUpdates; // 0x34
		::System::UInt32 colorUpdatesExpanded; // 0x38
		::System::UInt32 recursiveVisualUpdates; // 0x3C
		::System::UInt32 recursiveVisualUpdatesExpanded; // 0x40
		::System::UInt32 nonRecursiveVisualUpdates; // 0x44
		::System::UInt32 dirtyProcessed; // 0x48
		::System::UInt32 nudgeTransformed; // 0x4C
		::System::UInt32 boneTransformed; // 0x50
		::System::UInt32 skipTransformed; // 0x54
		::System::UInt32 visualUpdateTransformed; // 0x58
		::System::UInt32 updatedMeshAllocations; // 0x5C
		::System::UInt32 newMeshAllocations; // 0x60
		::System::UInt32 groupTransformElementsChanged; // 0x64
		::System::UInt32 immedateRenderersActive; // 0x68
		::System::UInt32 textUpdates; // 0x6C

	};
}

