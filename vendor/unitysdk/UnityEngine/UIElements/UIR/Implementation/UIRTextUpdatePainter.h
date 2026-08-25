#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine { class Color32; }
namespace UnityEngine::UIElements { class MeshGenerationContext; }
namespace UnityEngine::UIElements::UIR { class UIRenderDevice; }
namespace UnityEngine::UIElements { class ITextHandle; }

#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_GET_MESHGENERATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0xA361A00)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA361A10)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_BEGIN_OFFSET UNITYSDK_OFFSET(0xA3564C0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_END_OFFSET UNITYSDK_OFFSET(0xA356740)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA361A80)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_DRAWRECTANGLE_OFFSET UNITYSDK_OFFSET(0xA361B20)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_DRAWIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xA361B30)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_DRAWTEXT_OFFSET UNITYSDK_OFFSET(0xA361B40)

namespace UnityEngine::UIElements::UIR::Implementation
{
	inline static constexpr unsigned int UIRTextUpdatePainter_TypeDefinitionIndex = 30791;

	class UIRTextUpdatePainter : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* m_CurrentElement; // 0x10
		::System::Int32 m_TextEntryIndex; // 0x18
		Il2CppObject* m_DudVerts; // 0x20
		Il2CppObject* m_DudIndices; // 0x30
		Il2CppObject* m_MeshDataVerts; // 0x40
		::UnityEngine::Color32* m_XFormClipPages; // 0x50
		::UnityEngine::Color32* m_IDs; // 0x54
		::UnityEngine::Color32* m_Flags; // 0x58
		::UnityEngine::Color32* m_OpacityColorPages; // 0x5C
		::UnityEngine::UIElements::MeshGenerationContext* _meshGenerationContext_k__BackingField; // 0x60

		::UnityEngine::UIElements::MeshGenerationContext* get_meshGenerationContext()
		{
			return (return (::UnityEngine::UIElements::MeshGenerationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_GET_MESHGENERATIONCONTEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Begin(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::UIR::UIRenderDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_BEGIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_END_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void DrawRectangle(RectangleParams* arg)
		{
			((::System::Void(*)(RectangleParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_DRAWRECTANGLE_OFFSET))(arg, nullptr);
		}

		::System::Void DrawImmediate(::System::Action* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_DRAWIMMEDIATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawText(TextParams* arg, ::UnityEngine::UIElements::ITextHandle* arg, ::System::Single arg)
		{
			((::System::Void(*)(TextParams*, ::UnityEngine::UIElements::ITextHandle*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRTEXTUPDATEPAINTER_DRAWTEXT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

