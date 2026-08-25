#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class RenderChain; }
namespace UnityEngine::UIElements { class AtlasBase; }
namespace UnityEngine::UIElements::UIR { class VectorImageManager; }
namespace UnityEngine::UIElements::UIR { class BMPAlloc; }
namespace UnityEngine::UIElements { class MeshGenerationContext; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class MeshWriteData; }
namespace UnityEngine::UIElements::UIR { class RenderChainCommand; }
namespace UnityEngine::UIElements { class TextureId; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UIElements { class ITextHandle; }

#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GETPOOLEDMESHWRITEDATA_OFFSET UNITYSDK_OFFSET(0xA358F60)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_ALLOCRAWVERTSINDICES_OFFSET UNITYSDK_OFFSET(0xA359080)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_ALLOCTHROUGHDRAWMESH_OFFSET UNITYSDK_OFFSET(0xA359150)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_ALLOCTHROUGHDRAWGRADIENTS_OFFSET UNITYSDK_OFFSET(0xA3598F0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA359DF0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_MESHGENERATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0xA35A240)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_CURRENTELEMENT_OFFSET UNITYSDK_OFFSET(0xA35A250)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_SET_CURRENTELEMENT_OFFSET UNITYSDK_OFFSET(0xA35A260)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0xA35A280)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_CLOSINGINFO_OFFSET UNITYSDK_OFFSET(0xA35A290)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_TOTALVERTICES_OFFSET UNITYSDK_OFFSET(0xA35A2C0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_SET_TOTALVERTICES_OFFSET UNITYSDK_OFFSET(0xA35A2D0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_TOTALINDICES_OFFSET UNITYSDK_OFFSET(0xA35A2E0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_SET_TOTALINDICES_OFFSET UNITYSDK_OFFSET(0xA35A2F0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA35A300)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA35A310)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA35A320)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA35A3D0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_BEGIN_OFFSET UNITYSDK_OFFSET(0xA35A450)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_LANDCLIPUNREGISTERMESHDRAWCOMMAND_OFFSET UNITYSDK_OFFSET(0xA35ACF0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_LANDCLIPREGISTERMESH_OFFSET UNITYSDK_OFFSET(0xA35AD60)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_ADDGRADIENTSENTRY_OFFSET UNITYSDK_OFFSET(0xA359910)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWMESH_OFFSET UNITYSDK_OFFSET(0xA359180)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWTEXT_OFFSET UNITYSDK_OFFSET(0xA35ADE0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWTEXTNATIVE_OFFSET UNITYSDK_OFFSET(0xA35AF30)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWTEXTCORE_OFFSET UNITYSDK_OFFSET(0xA35B6D0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWRECTANGLE_OFFSET UNITYSDK_OFFSET(0xA35BFE0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWBORDER_OFFSET UNITYSDK_OFFSET(0xA35D6A0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xA35D7E0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_VISUALELEMENT_OFFSET UNITYSDK_OFFSET(0xA35DA30)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWVISUALELEMENTBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA35DA40)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWVISUALELEMENTBORDER_OFFSET UNITYSDK_OFFSET(0xA35EEB0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_APPLYVISUALELEMENTCLIPPING_OFFSET UNITYSDK_OFFSET(0xA35F9E0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_ADJUSTSPRITEWINDING_OFFSET UNITYSDK_OFFSET(0xA360FA0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWSPRITE_OFFSET UNITYSDK_OFFSET(0xA35C920)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_APPLYINSET_OFFSET UNITYSDK_OFFSET(0xA35D2A0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWVECTORIMAGE_OFFSET UNITYSDK_OFFSET(0xA35C300)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_RESET_OFFSET UNITYSDK_OFFSET(0xA3612F0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_VALIDATEMESHWRITEDATA_OFFSET UNITYSDK_OFFSET(0xA361400)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GENERATESTENCILCLIPENTRYFORROUNDEDRECTBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA3601B0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GENERATESTENCILCLIPENTRYFORSVGBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA35FD20)

namespace UnityEngine::UIElements::UIR::Implementation
{
	inline static constexpr unsigned int UIRStylePainter_TypeDefinitionIndex = 30790;

	class UIRStylePainter : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::UIR::RenderChain* m_Owner; // 0x10
		Il2CppObject* m_Entries; // 0x18
		::UnityEngine::UIElements::AtlasBase* m_Atlas; // 0x20
		::UnityEngine::UIElements::UIR::VectorImageManager* m_VectorImageManager; // 0x28
		Entry* m_CurrentEntry; // 0x30
		ClosingInfo* m_ClosingInfo; // 0x90
		::System::Int32 m_MaskDepth; // 0xC8
		::System::Int32 m_StencilRef; // 0xCC
		::UnityEngine::UIElements::UIR::BMPAlloc* m_ClipRectID; // 0xD0
		::System::Int32 m_SVGBackgroundEntryIndex; // 0xD8
		Il2CppObject* m_VertsPool; // 0xE0
		Il2CppObject* m_IndicesPool; // 0x108
		Il2CppObject* m_MeshWriteDataPool; // 0x130
		::System::Int32 m_NextMeshWriteDataPoolItem; // 0x138
		Allocator* m_AllocRawVertsIndicesDelegate; // 0x140
		Allocator* m_AllocThroughDrawMeshDelegate; // 0x148
		Allocator* m_AllocThroughDrawGradientsDelegate; // 0x150
		::UnityEngine::UIElements::MeshGenerationContext* _meshGenerationContext_k__BackingField; // 0x158
		::UnityEngine::UIElements::VisualElement* _currentElement_k__BackingField; // 0x160
		::System::Int32 _totalVertices_k__BackingField; // 0x168
		::System::Int32 _totalIndices_k__BackingField; // 0x16C
		::System::Boolean _disposed_k__BackingField; // 0x170

		::UnityEngine::UIElements::MeshWriteData* GetPooledMeshWriteData()
		{
			return (return (::UnityEngine::UIElements::MeshWriteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GETPOOLEDMESHWRITEDATA_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::MeshWriteData* AllocRawVertsIndices(::System::UInt32 arg, ::System::UInt32 arg, AllocMeshData&* arg)
		{
			return (return (::UnityEngine::UIElements::MeshWriteData*(*)(::System::UInt32, ::System::UInt32, AllocMeshData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_ALLOCRAWVERTSINDICES_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::MeshWriteData* AllocThroughDrawMesh(::System::UInt32 arg, ::System::UInt32 arg, AllocMeshData&* arg)
		{
			return (return (::UnityEngine::UIElements::MeshWriteData*(*)(::System::UInt32, ::System::UInt32, AllocMeshData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_ALLOCTHROUGHDRAWMESH_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::MeshWriteData* AllocThroughDrawGradients(::System::UInt32 arg, ::System::UInt32 arg, AllocMeshData&* arg)
		{
			return (return (::UnityEngine::UIElements::MeshWriteData*(*)(::System::UInt32, ::System::UInt32, AllocMeshData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_ALLOCTHROUGHDRAWGRADIENTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::UIR::RenderChain* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::MeshGenerationContext* get_meshGenerationContext()
		{
			return (return (::UnityEngine::UIElements::MeshGenerationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_MESHGENERATIONCONTEXT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_currentElement()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_CURRENTELEMENT_OFFSET))(nullptr);
		}

		::System::Void set_currentElement(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_SET_CURRENTELEMENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_entries()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_ENTRIES_OFFSET))(nullptr);
		}

		ClosingInfo* get_closingInfo()
		{
			return (return (ClosingInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_CLOSINGINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_totalVertices()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_TOTALVERTICES_OFFSET))(nullptr);
		}

		::System::Void set_totalVertices(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_SET_TOTALVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_totalIndices()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_TOTALINDICES_OFFSET))(nullptr);
		}

		::System::Void set_totalIndices(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_SET_TOTALINDICES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Begin(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_BEGIN_OFFSET))(arg, nullptr);
		}

		::System::Void LandClipUnregisterMeshDrawCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChainCommand*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_LANDCLIPUNREGISTERMESHDRAWCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void LandClipRegisterMesh(Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_LANDCLIPREGISTERMESH_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::MeshWriteData* AddGradientsEntry(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::UIElements::TextureId* arg, ::UnityEngine::Material* arg, MeshFlags* arg)
		{
			return (return (::UnityEngine::UIElements::MeshWriteData*(*)(::System::Int32, ::System::Int32, ::UnityEngine::UIElements::TextureId*, ::UnityEngine::Material*, MeshFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_ADDGRADIENTSENTRY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::MeshWriteData* DrawMesh(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Texture* arg, ::UnityEngine::Material* arg, MeshFlags* arg)
		{
			return (return (::UnityEngine::UIElements::MeshWriteData*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::UnityEngine::Material*, MeshFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWMESH_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawText(TextParams* arg, ::UnityEngine::UIElements::ITextHandle* arg, ::System::Single arg)
		{
			((::System::Void(*)(TextParams*, ::UnityEngine::UIElements::ITextHandle*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWTEXT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawTextNative(TextParams* arg, ::UnityEngine::UIElements::ITextHandle* arg, ::System::Single arg)
		{
			((::System::Void(*)(TextParams*, ::UnityEngine::UIElements::ITextHandle*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWTEXTNATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawTextCore(TextParams* arg, ::UnityEngine::UIElements::ITextHandle* arg, ::System::Single arg)
		{
			((::System::Void(*)(TextParams*, ::UnityEngine::UIElements::ITextHandle*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWTEXTCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawRectangle(RectangleParams* arg)
		{
			((::System::Void(*)(RectangleParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWRECTANGLE_OFFSET))(arg, nullptr);
		}

		::System::Void DrawBorder(BorderParams* arg)
		{
			((::System::Void(*)(BorderParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWBORDER_OFFSET))(arg, nullptr);
		}

		::System::Void DrawImmediate(::System::Action* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWIMMEDIATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_visualElement()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GET_VISUALELEMENT_OFFSET))(nullptr);
		}

		::System::Void DrawVisualElementBackground()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWVISUALELEMENTBACKGROUND_OFFSET))(nullptr);
		}

		::System::Void DrawVisualElementBorder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWVISUALELEMENTBORDER_OFFSET))(nullptr);
		}

		::System::Void ApplyVisualElementClipping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_APPLYVISUALELEMENTCLIPPING_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* AdjustSpriteWinding(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_ADJUSTSPRITEWINDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawSprite(RectangleParams* arg)
		{
			((::System::Void(*)(RectangleParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWSPRITE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyInset(RectangleParams&* arg, ::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(RectangleParams&*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_APPLYINSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawVectorImage(RectangleParams* arg)
		{
			((::System::Void(*)(RectangleParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_DRAWVECTORIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_RESET_OFFSET))(nullptr);
		}

		::System::Void ValidateMeshWriteData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_VALIDATEMESHWRITEDATA_OFFSET))(nullptr);
		}

		::System::Void GenerateStencilClipEntryForRoundedRectBackground()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GENERATESTENCILCLIPENTRYFORROUNDEDRECTBACKGROUND_OFFSET))(nullptr);
		}

		::System::Void GenerateStencilClipEntryForSVGBackground()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_UIRSTYLEPAINTER_GENERATESTENCILCLIPENTRYFORSVGBACKGROUND_OFFSET))(nullptr);
		}

	};
}

