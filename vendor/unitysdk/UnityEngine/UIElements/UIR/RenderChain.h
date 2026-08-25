#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class RenderChainCommand; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UIElements::UIR { class ChainBuilderStats; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::UIR::Implementation { class UIRTextUpdatePainter; }
namespace UnityEngine::UIElements { class TextureRegistry; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class BaseVisualElementPanel; }
namespace UnityEngine::UIElements::UIR { class UIRenderDevice; }
namespace UnityEngine::UIElements { class AtlasBase; }
namespace UnityEngine::UIElements::UIR { class VectorImageManager; }
namespace UnityEngine::UIElements::UIR { class UIRVEShaderInfoAllocator; }
namespace UnityEngine::UIElements::UIR::Implementation { class UIRStylePainter; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::UIElements { class BaseRuntimePanel; }
namespace UnityEngine::UIElements::UIR { class RenderChain; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UIElements { class TextureId; }

#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA439430)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4396E0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0xA439BB0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_DESTRUCTOR_OFFSET UNITYSDK_OFFSET(0xA43A300)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA43AA50)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA43AA60)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA43AA70)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA43AAE0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_PROCESSCHANGES_OFFSET UNITYSDK_OFFSET(0xA43AB20)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_RENDER_OFFSET UNITYSDK_OFFSET(0xA43B620)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_PROCESSTEXTREGEN_OFFSET UNITYSDK_OFFSET(0xA43B3B0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONCHILDADDED_OFFSET UNITYSDK_OFFSET(0xA43CB40)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONCHILDRENREORDERED_OFFSET UNITYSDK_OFFSET(0xA43CF30)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONCHILDREMOVING_OFFSET UNITYSDK_OFFSET(0xA43D0F0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_STOPTRACKINGGROUPTRANSFORMELEMENT_OFFSET UNITYSDK_OFFSET(0xA43D1F0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONRENDERHINTSCHANGED_OFFSET UNITYSDK_OFFSET(0xA43D240)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONCLIPPINGCHANGED_OFFSET UNITYSDK_OFFSET(0xA43CCF0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONOPACITYCHANGED_OFFSET UNITYSDK_OFFSET(0xA43CDB0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONCOLORCHANGED_OFFSET UNITYSDK_OFFSET(0xA43D550)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONTRANSFORMORSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA43D5E0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONVISUALSCHANGED_OFFSET UNITYSDK_OFFSET(0xA43CE70)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_PANEL_OFFSET UNITYSDK_OFFSET(0xA43D680)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_PANEL_OFFSET UNITYSDK_OFFSET(0xA43D690)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0xA43D6B0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0xA43D6C0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_ATLAS_OFFSET UNITYSDK_OFFSET(0xA43D6E0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_ATLAS_OFFSET UNITYSDK_OFFSET(0xA43D6F0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_VECTORIMAGEMANAGER_OFFSET UNITYSDK_OFFSET(0xA43D710)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_VECTORIMAGEMANAGER_OFFSET UNITYSDK_OFFSET(0xA43D720)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_PAINTER_OFFSET UNITYSDK_OFFSET(0xA43D740)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_PAINTER_OFFSET UNITYSDK_OFFSET(0xA43D750)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_DRAWSTATS_OFFSET UNITYSDK_OFFSET(0xA43D770)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_DRAWSTATS_OFFSET UNITYSDK_OFFSET(0xA43D780)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_DRAWINCAMERAS_OFFSET UNITYSDK_OFFSET(0xA43D790)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_DRAWINCAMERAS_OFFSET UNITYSDK_OFFSET(0xA43D7A0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_DEFAULTSHADER_OFFSET UNITYSDK_OFFSET(0xA43D7B0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_DEFAULTWORLDSPACESHADER_OFFSET UNITYSDK_OFFSET(0xA43D870)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GETSTANDARDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA43BA50)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GETSTANDARDWORLDSPACEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA43D930)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ENSUREFITSDEPTH_OFFSET UNITYSDK_OFFSET(0xA43DA30)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_CHILDWILLBEREMOVED_OFFSET UNITYSDK_OFFSET(0xA43DB90)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ALLOCCOMMAND_OFFSET UNITYSDK_OFFSET(0xA43DC40)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_FREECOMMAND_OFFSET UNITYSDK_OFFSET(0xA43DCA0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONRENDERCOMMANDADDED_OFFSET UNITYSDK_OFFSET(0xA43DD40)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONRENDERCOMMANDSREMOVED_OFFSET UNITYSDK_OFFSET(0xA43DDE0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ADDTEXTELEMENT_OFFSET UNITYSDK_OFFSET(0xA43DE20)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_REMOVETEXTELEMENT_OFFSET UNITYSDK_OFFSET(0xA43DEA0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONGROUPTRANSFORMELEMENTCHANGEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA43DFA0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ACCESSRENDERNODEDATA_OFFSET UNITYSDK_OFFSET(0xA43E0F0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONRENDERNODEEXECUTE_OFFSET UNITYSDK_OFFSET(0xA43E300)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONREGISTERINTERMEDIATERENDERERS_OFFSET UNITYSDK_OFFSET(0xA43E440)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONREGISTERINTERMEDIATERENDERERMAT_OFFSET UNITYSDK_OFFSET(0xA43E9E0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_REPAINTTEXTUREDELEMENTS_OFFSET UNITYSDK_OFFSET(0xA43EE90)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONFONTRESET_OFFSET UNITYSDK_OFFSET(0xA43EF90)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_APPENDTEXTURE_OFFSET UNITYSDK_OFFSET(0xA43EFA0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_RESETTEXTURES_OFFSET UNITYSDK_OFFSET(0xA43A7E0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_DRAWSTATS_OFFSET UNITYSDK_OFFSET(0xA43BB50)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GETFIRSTELEMENTINPANEL_OFFSET UNITYSDK_OFFSET(0xA43A790)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int RenderChain_TypeDefinitionIndex = 30732;

	class RenderChain : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::UIR::RenderChainCommand* m_FirstCommand; // 0x10
		DepthOrderedDirtyTracking* m_DirtyTracker; // 0x18
		Il2CppObject* m_CommandPool; // 0x40
		Il2CppObject* m_TexturePool; // 0x48
		Il2CppObject* m_RenderNodesData; // 0x50
		::UnityEngine::Shader* m_DefaultShader; // 0x58
		::UnityEngine::Shader* m_DefaultWorldSpaceShader; // 0x60
		::UnityEngine::Material* m_DefaultMat; // 0x68
		::UnityEngine::Material* m_DefaultWorldSpaceMat; // 0x70
		::System::Boolean m_BlockDirtyRegistration; // 0x78
		::System::Int32 m_StaticIndex; // 0x7C
		::System::Int32 m_ActiveRenderNodes; // 0x80
		::System::Int32 m_CustomMaterialCommands; // 0x84
		::UnityEngine::UIElements::UIR::ChainBuilderStats* m_Stats; // 0x88
		::System::UInt32 m_StatsElementsAdded; // 0xE8
		::System::UInt32 m_StatsElementsRemoved; // 0xEC
		::UnityEngine::UIElements::VisualElement* m_FirstTextElement; // 0xF0
		::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter* m_TextUpdatePainter; // 0xF8
		::System::Int32 m_TextElementCount; // 0x100
		::System::Int32 m_DirtyTextStartIndex; // 0x104
		::System::Int32 m_DirtyTextRemaining; // 0x108
		::System::Boolean m_FontWasReset; // 0x10C
		Il2CppObject* m_LastGroupTransformElementScale; // 0x110
		::UnityEngine::UIElements::TextureRegistry* m_TextureRegistry; // 0x118
		::Unity::Profiling::ProfilerMarker* s_MarkerProcess; // 0x0
		::Unity::Profiling::ProfilerMarker* s_MarkerClipProcessing; // 0x8
		::Unity::Profiling::ProfilerMarker* s_MarkerOpacityProcessing; // 0x10
		::Unity::Profiling::ProfilerMarker* s_MarkerColorsProcessing; // 0x18
		::Unity::Profiling::ProfilerMarker* s_MarkerTransformProcessing; // 0x20
		::Unity::Profiling::ProfilerMarker* s_MarkerVisualsProcessing; // 0x28
		::Unity::Profiling::ProfilerMarker* s_MarkerTextRegen; // 0x30
		::System::Boolean _disposed_k__BackingField; // 0x120
		::System::Action* OnPreRender; // 0x38
		::UnityEngine::UIElements::BaseVisualElementPanel* _panel_k__BackingField; // 0x128
		::UnityEngine::UIElements::UIR::UIRenderDevice* _device_k__BackingField; // 0x130
		::UnityEngine::UIElements::AtlasBase* _atlas_k__BackingField; // 0x138
		::UnityEngine::UIElements::UIR::VectorImageManager* _vectorImageManager_k__BackingField; // 0x140
		::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* shaderInfoAllocator; // 0x148
		::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* _painter_k__BackingField; // 0x218
		::System::Boolean _drawStats_k__BackingField; // 0x220
		::System::Boolean _drawInCameras_k__BackingField; // 0x221

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::BaseVisualElementPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseVisualElementPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Constructor(::UnityEngine::UIElements::BaseVisualElementPanel* arg, ::UnityEngine::UIElements::UIR::UIRenderDevice* arg, ::UnityEngine::UIElements::AtlasBase* arg, ::UnityEngine::UIElements::UIR::VectorImageManager* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::UnityEngine::UIElements::AtlasBase*, ::UnityEngine::UIElements::UIR::VectorImageManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_CONSTRUCTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Destructor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_DESTRUCTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessChanges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_PROCESSCHANGES_OFFSET))(nullptr);
		}

		::System::Void Render()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_RENDER_OFFSET))(nullptr);
		}

		::System::Void ProcessTextRegen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_PROCESSTEXTREGEN_OFFSET))(arg, nullptr);
		}

		::System::Void UIEOnChildAdded(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONCHILDADDED_OFFSET))(arg, nullptr);
		}

		::System::Void UIEOnChildrenReordered(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONCHILDRENREORDERED_OFFSET))(arg, nullptr);
		}

		::System::Void UIEOnChildRemoving(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONCHILDREMOVING_OFFSET))(arg, nullptr);
		}

		::System::Void StopTrackingGroupTransformElement(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_STOPTRACKINGGROUPTRANSFORMELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void UIEOnRenderHintsChanged(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONRENDERHINTSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void UIEOnClippingChanged(::UnityEngine::UIElements::VisualElement* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONCLIPPINGCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UIEOnOpacityChanged(::UnityEngine::UIElements::VisualElement* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONOPACITYCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UIEOnColorChanged(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONCOLORCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void UIEOnTransformOrSizeChanged(::UnityEngine::UIElements::VisualElement* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONTRANSFORMORSIZECHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UIEOnVisualsChanged(::UnityEngine::UIElements::VisualElement* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_UIEONVISUALSCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::BaseVisualElementPanel* get_panel()
		{
			return (return (::UnityEngine::UIElements::BaseVisualElementPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_PANEL_OFFSET))(nullptr);
		}

		::System::Void set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseVisualElementPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_PANEL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::UIR::UIRenderDevice* get_device()
		{
			return (return (::UnityEngine::UIElements::UIR::UIRenderDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_DEVICE_OFFSET))(nullptr);
		}

		::System::Void set_device(::UnityEngine::UIElements::UIR::UIRenderDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::UIRenderDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_DEVICE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::AtlasBase* get_atlas()
		{
			return (return (::UnityEngine::UIElements::AtlasBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_ATLAS_OFFSET))(nullptr);
		}

		::System::Void set_atlas(::UnityEngine::UIElements::AtlasBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AtlasBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_ATLAS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::UIR::VectorImageManager* get_vectorImageManager()
		{
			return (return (::UnityEngine::UIElements::UIR::VectorImageManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_VECTORIMAGEMANAGER_OFFSET))(nullptr);
		}

		::System::Void set_vectorImageManager(::UnityEngine::UIElements::UIR::VectorImageManager* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::VectorImageManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_VECTORIMAGEMANAGER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* get_painter()
		{
			return (return (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_PAINTER_OFFSET))(nullptr);
		}

		::System::Void set_painter(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_PAINTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_drawStats()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_DRAWSTATS_OFFSET))(nullptr);
		}

		::System::Void set_drawStats(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_DRAWSTATS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_drawInCameras()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GET_DRAWINCAMERAS_OFFSET))(nullptr);
		}

		::System::Void set_drawInCameras(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_DRAWINCAMERAS_OFFSET))(arg, nullptr);
		}

		::System::Void set_defaultShader(::UnityEngine::Shader* arg)
		{
			((::System::Void(*)(::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_DEFAULTSHADER_OFFSET))(arg, nullptr);
		}

		::System::Void set_defaultWorldSpaceShader(::UnityEngine::Shader* arg)
		{
			((::System::Void(*)(::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_SET_DEFAULTWORLDSPACESHADER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* GetStandardMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GETSTANDARDMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetStandardWorldSpaceMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GETSTANDARDWORLDSPACEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void EnsureFitsDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ENSUREFITSDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void ChildWillBeRemoved(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_CHILDWILLBEREMOVED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::UIR::RenderChainCommand* AllocCommand()
		{
			return (return (::UnityEngine::UIElements::UIR::RenderChainCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ALLOCCOMMAND_OFFSET))(nullptr);
		}

		::System::Void FreeCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChainCommand*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_FREECOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void OnRenderCommandAdded(::UnityEngine::UIElements::UIR::RenderChainCommand* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChainCommand*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONRENDERCOMMANDADDED_OFFSET))(arg, nullptr);
		}

		::System::Void OnRenderCommandsRemoved(::UnityEngine::UIElements::UIR::RenderChainCommand* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChainCommand*, ::UnityEngine::UIElements::UIR::RenderChainCommand*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONRENDERCOMMANDSREMOVED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTextElement(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ADDTEXTELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveTextElement(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_REMOVETEXTELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnGroupTransformElementChangedTransform(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONGROUPTRANSFORMELEMENTCHANGEDTRANSFORM_OFFSET))(arg, nullptr);
		}

		RenderNodeData* AccessRenderNodeData(::System::Int32 arg)
		{
			return (return (RenderNodeData*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ACCESSRENDERNODEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnRenderNodeExecute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONRENDERNODEEXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void OnRegisterIntermediateRenderers(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONREGISTERINTERMEDIATERENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void OnRegisterIntermediateRendererMat(::UnityEngine::UIElements::BaseRuntimePanel* arg, ::UnityEngine::UIElements::UIR::RenderChain* arg, RenderNodeData&* arg, ::UnityEngine::Camera* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseRuntimePanel*, ::UnityEngine::UIElements::UIR::RenderChain*, RenderNodeData&*, ::UnityEngine::Camera*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONREGISTERINTERMEDIATERENDERERMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RepaintTexturedElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_REPAINTTEXTUREDELEMENTS_OFFSET))(nullptr);
		}

		::System::Void OnFontReset(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_ONFONTRESET_OFFSET))(arg, nullptr);
		}

		::System::Void AppendTexture(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Texture* arg, ::UnityEngine::UIElements::TextureId* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Texture*, ::UnityEngine::UIElements::TextureId*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_APPENDTEXTURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ResetTextures(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_RESETTEXTURES_OFFSET))(arg, nullptr);
		}

		::System::Void DrawStats()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_DRAWSTATS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* GetFirstElementInPanel(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAIN_GETFIRSTELEMENTINPANEL_OFFSET))(arg, nullptr);
		}

	};
}

