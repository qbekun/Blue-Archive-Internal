#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::UIR { class RenderDataDirtyTypes; }
namespace UnityEngine::UIElements::UIR { class RenderChainCommand; }
namespace UnityEngine::UIElements::UIR::Implementation { class ClipMethod; }
namespace UnityEngine::UIElements::UIR { class MeshHandle; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::UIElements::UIR { class BMPAlloc; }
namespace UnityEngine { class Color; }

#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINVEDATA_GET_LASTCLOSINGORLASTCOMMAND_OFFSET UNITYSDK_OFFSET(0xA43F1E0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINVEDATA_ALLOCATESID_OFFSET UNITYSDK_OFFSET(0xA43F1F0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINVEDATA_INHERITSID_OFFSET UNITYSDK_OFFSET(0xA43F260)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int RenderChainVEData_TypeDefinitionIndex = 30735;

	class RenderChainVEData : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* prev; // 0x10
		::UnityEngine::UIElements::VisualElement* next; // 0x18
		::UnityEngine::UIElements::VisualElement* groupTransformAncestor; // 0x20
		::UnityEngine::UIElements::VisualElement* boneTransformAncestor; // 0x28
		::UnityEngine::UIElements::VisualElement* prevDirty; // 0x30
		::UnityEngine::UIElements::VisualElement* nextDirty; // 0x38
		::System::Int32 hierarchyDepth; // 0x40
		::UnityEngine::UIElements::UIR::RenderDataDirtyTypes* dirtiedValues; // 0x44
		::System::UInt32 dirtyID; // 0x48
		::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand; // 0x50
		::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand; // 0x58
		::UnityEngine::UIElements::UIR::RenderChainCommand* firstClosingCommand; // 0x60
		::UnityEngine::UIElements::UIR::RenderChainCommand* lastClosingCommand; // 0x68
		::System::Boolean isInChain; // 0x70
		::System::Boolean isHierarchyHidden; // 0x71
		::System::Boolean localFlipsWinding; // 0x72
		::System::Boolean localTransformScaleZero; // 0x73
		::System::Boolean worldFlipsWinding; // 0x74
		::UnityEngine::UIElements::UIR::Implementation::ClipMethod* clipMethod; // 0x78
		::System::Int32 childrenStencilRef; // 0x7C
		::System::Int32 childrenMaskDepth; // 0x80
		::System::Boolean disableNudging; // 0x84
		::System::Boolean usesLegacyText; // 0x85
		::UnityEngine::UIElements::UIR::MeshHandle* data; // 0x88
		::UnityEngine::UIElements::UIR::MeshHandle* closingData; // 0x90
		::UnityEngine::Matrix4x4* verticesSpace; // 0x98
		::System::Int32 displacementUVStart; // 0xD8
		::System::Int32 displacementUVEnd; // 0xDC
		::UnityEngine::UIElements::UIR::BMPAlloc* transformID; // 0xE0
		::UnityEngine::UIElements::UIR::BMPAlloc* clipRectID; // 0xE8
		::UnityEngine::UIElements::UIR::BMPAlloc* opacityID; // 0xF0
		::UnityEngine::UIElements::UIR::BMPAlloc* textCoreSettingsID; // 0xF8
		::UnityEngine::UIElements::UIR::BMPAlloc* backgroundColorID; // 0x100
		::UnityEngine::UIElements::UIR::BMPAlloc* borderLeftColorID; // 0x108
		::UnityEngine::UIElements::UIR::BMPAlloc* borderTopColorID; // 0x110
		::UnityEngine::UIElements::UIR::BMPAlloc* borderRightColorID; // 0x118
		::UnityEngine::UIElements::UIR::BMPAlloc* borderBottomColorID; // 0x120
		::UnityEngine::UIElements::UIR::BMPAlloc* tintColorID; // 0x128
		::System::Single compositeOpacity; // 0x130
		::UnityEngine::Color* backgroundColor; // 0x134
		::UnityEngine::UIElements::VisualElement* prevText; // 0x148
		::UnityEngine::UIElements::VisualElement* nextText; // 0x150
		Il2CppObject* textEntries; // 0x158
		Il2CppObject* textures; // 0x160

		::UnityEngine::UIElements::UIR::RenderChainCommand* get_lastClosingOrLastCommand()
		{
			return (return (::UnityEngine::UIElements::UIR::RenderChainCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINVEDATA_GET_LASTCLOSINGORLASTCOMMAND_OFFSET))(nullptr);
		}

		::System::Boolean AllocatesID(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINVEDATA_ALLOCATESID_OFFSET))(arg, nullptr);
		}

		::System::Boolean InheritsID(::UnityEngine::UIElements::UIR::BMPAlloc* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::UIR::BMPAlloc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINVEDATA_INHERITSID_OFFSET))(arg, nullptr);
		}

	};
}

