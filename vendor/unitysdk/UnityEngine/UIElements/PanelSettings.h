#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ThemeStyleSheet; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UIElements { class PanelScaleMode; }
namespace UnityEngine { class Vector2Int; }
namespace UnityEngine::UIElements { class PanelScreenMatchMode; }
namespace UnityEngine { class Color; }
namespace UnityEngine::UIElements { class UIDocumentList; }
namespace UnityEngine::UIElements { class DynamicAtlasSettings; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::UIElements { class PanelTextSettings; }
namespace UnityEngine { class Rect; }
namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class BaseRuntimePanel; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class UIDocument; }

#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_THEMESTYLESHEET_OFFSET UNITYSDK_OFFSET(0xA400E40)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_THEMESTYLESHEET_OFFSET UNITYSDK_OFFSET(0xA400E50)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA401050)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA401060)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_SCALEMODE_OFFSET UNITYSDK_OFFSET(0xA401100)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_SCALEMODE_OFFSET UNITYSDK_OFFSET(0xA401110)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xA401120)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xA401130)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_REFERENCEDPI_OFFSET UNITYSDK_OFFSET(0xA401140)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_REFERENCEDPI_OFFSET UNITYSDK_OFFSET(0xA401150)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_FALLBACKDPI_OFFSET UNITYSDK_OFFSET(0xA401190)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_FALLBACKDPI_OFFSET UNITYSDK_OFFSET(0xA4011A0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_REFERENCERESOLUTION_OFFSET UNITYSDK_OFFSET(0xA4011E0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_REFERENCERESOLUTION_OFFSET UNITYSDK_OFFSET(0xA4011F0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_SCREENMATCHMODE_OFFSET UNITYSDK_OFFSET(0xA401200)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_SCREENMATCHMODE_OFFSET UNITYSDK_OFFSET(0xA401210)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_MATCH_OFFSET UNITYSDK_OFFSET(0xA401220)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_MATCH_OFFSET UNITYSDK_OFFSET(0xA401230)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA401240)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA401250)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_APPLYSORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA4012A0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_TARGETDISPLAY_OFFSET UNITYSDK_OFFSET(0xA401320)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_TARGETDISPLAY_OFFSET UNITYSDK_OFFSET(0xA401330)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_CLEARDEPTHSTENCIL_OFFSET UNITYSDK_OFFSET(0xA4013A0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_CLEARDEPTHSTENCIL_OFFSET UNITYSDK_OFFSET(0xA4013B0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_DEPTHCLEARVALUE_OFFSET UNITYSDK_OFFSET(0xA4013C0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_CLEARCOLOR_OFFSET UNITYSDK_OFFSET(0xA4013D0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_CLEARCOLOR_OFFSET UNITYSDK_OFFSET(0xA4013E0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_COLORCLEARVALUE_OFFSET UNITYSDK_OFFSET(0xA4013F0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_COLORCLEARVALUE_OFFSET UNITYSDK_OFFSET(0xA401400)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_PANEL_OFFSET UNITYSDK_OFFSET(0xA401410)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_VISUALTREE_OFFSET UNITYSDK_OFFSET(0xA4015F0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_DYNAMICATLASSETTINGS_OFFSET UNITYSDK_OFFSET(0xA401630)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_DYNAMICATLASSETTINGS_OFFSET UNITYSDK_OFFSET(0xA401640)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA401650)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_RESET_OFFSET UNITYSDK_OFFSET(0xA4017D0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA4017E0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA401AB0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_DISPOSEPANEL_OFFSET UNITYSDK_OFFSET(0xA401BB0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_SCREENDPI_OFFSET UNITYSDK_OFFSET(0xA401C30)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_SCREENDPI_OFFSET UNITYSDK_OFFSET(0xA401C40)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_UPDATESCREENDPI_OFFSET UNITYSDK_OFFSET(0xA4018C0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_APPLYTHEMESTYLESHEET_OFFSET UNITYSDK_OFFSET(0xA400E80)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_INITIALIZESHADERS_OFFSET UNITYSDK_OFFSET(0xA4018E0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_APPLYPANELSETTINGS_OFFSET UNITYSDK_OFFSET(0xA401C60)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_SETSCREENTOPANELSPACEFUNCTION_OFFSET UNITYSDK_OFFSET(0xA402810)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_RESOLVESCALE_OFFSET UNITYSDK_OFFSET(0xA4026A0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_GETDISPLAYRECT_OFFSET UNITYSDK_OFFSET(0xA4024C0)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_ATTACHANDINSERTUIDOCUMENTTOVISUALTREE_OFFSET UNITYSDK_OFFSET(0xA402860)
#define UNITYENGINE_UIELEMENTS_PANELSETTINGS_DETACHUIDOCUMENT_OFFSET UNITYSDK_OFFSET(0xA402E20)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PanelSettings_TypeDefinitionIndex = 30565;

	class PanelSettings : public Il2CppObject
	{
	public:
		::System::Int32 k_DefaultSortingOrder; // 0x0
		::System::Single k_DefaultScaleValue; // 0x0
		::System::String* k_DefaultStyleSheetPath; // 0x0
		::UnityEngine::UIElements::ThemeStyleSheet* themeUss; // 0x18
		::UnityEngine::RenderTexture* m_TargetTexture; // 0x20
		::UnityEngine::UIElements::PanelScaleMode* m_ScaleMode; // 0x28
		::System::Single m_Scale; // 0x2C
		::System::Single DefaultDpi; // 0x0
		::System::Single m_ReferenceDpi; // 0x30
		::System::Single m_FallbackDpi; // 0x34
		::UnityEngine::Vector2Int* m_ReferenceResolution; // 0x38
		::UnityEngine::UIElements::PanelScreenMatchMode* m_ScreenMatchMode; // 0x40
		::System::Single m_Match; // 0x44
		::System::Single m_SortingOrder; // 0x48
		::System::Int32 m_TargetDisplay; // 0x4C
		::System::Boolean m_ClearDepthStencil; // 0x50
		::System::Boolean m_ClearColor; // 0x51
		::UnityEngine::Color* m_ColorClearValue; // 0x54
		RuntimePanelAccess* m_PanelAccess; // 0x68
		::UnityEngine::UIElements::UIDocumentList* m_AttachedUIDocumentsList; // 0x70
		::UnityEngine::UIElements::DynamicAtlasSettings* m_DynamicAtlasSettings; // 0x78
		::UnityEngine::Shader* m_AtlasBlitShader; // 0x80
		::UnityEngine::Shader* m_RuntimeShader; // 0x88
		::UnityEngine::Shader* m_RuntimeWorldShader; // 0x90
		::UnityEngine::UIElements::PanelTextSettings* textSettings; // 0x98
		::UnityEngine::Rect* m_TargetRect; // 0xA0
		::System::Single m_ResolvedScale; // 0xB0
		::UnityEngine::UIElements::StyleSheet* m_OldThemeUss; // 0xB8
		::System::Int32 m_EmptyPanelCounter; // 0xC0
		::System::Single _ScreenDPI_k__BackingField; // 0xC4
		Il2CppObject* m_AssignedScreenToPanel; // 0xC8

		::UnityEngine::UIElements::ThemeStyleSheet* get_themeStyleSheet()
		{
			return (return (::UnityEngine::UIElements::ThemeStyleSheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_THEMESTYLESHEET_OFFSET))(nullptr);
		}

		::System::Void set_themeStyleSheet(::UnityEngine::UIElements::ThemeStyleSheet* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ThemeStyleSheet*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_THEMESTYLESHEET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTexture* get_targetTexture()
		{
			return (return (::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_TARGETTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_targetTexture(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_TARGETTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::PanelScaleMode* get_scaleMode()
		{
			return (return (::UnityEngine::UIElements::PanelScaleMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_SCALEMODE_OFFSET))(nullptr);
		}

		::System::Void set_scaleMode(::UnityEngine::UIElements::PanelScaleMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PanelScaleMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_SCALEMODE_OFFSET))(arg, nullptr);
		}

		::System::Single get_scale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_SCALE_OFFSET))(nullptr);
		}

		::System::Void set_scale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_SCALE_OFFSET))(arg, nullptr);
		}

		::System::Single get_referenceDpi()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_REFERENCEDPI_OFFSET))(nullptr);
		}

		::System::Void set_referenceDpi(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_REFERENCEDPI_OFFSET))(arg, nullptr);
		}

		::System::Single get_fallbackDpi()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_FALLBACKDPI_OFFSET))(nullptr);
		}

		::System::Void set_fallbackDpi(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_FALLBACKDPI_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2Int* get_referenceResolution()
		{
			return (return (::UnityEngine::Vector2Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_REFERENCERESOLUTION_OFFSET))(nullptr);
		}

		::System::Void set_referenceResolution(::UnityEngine::Vector2Int* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_REFERENCERESOLUTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::PanelScreenMatchMode* get_screenMatchMode()
		{
			return (return (::UnityEngine::UIElements::PanelScreenMatchMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_SCREENMATCHMODE_OFFSET))(nullptr);
		}

		::System::Void set_screenMatchMode(::UnityEngine::UIElements::PanelScreenMatchMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PanelScreenMatchMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_SCREENMATCHMODE_OFFSET))(arg, nullptr);
		}

		::System::Single get_match()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_MATCH_OFFSET))(nullptr);
		}

		::System::Void set_match(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_MATCH_OFFSET))(arg, nullptr);
		}

		::System::Single get_sortingOrder()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void set_sortingOrder(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void ApplySortingOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_APPLYSORTINGORDER_OFFSET))(nullptr);
		}

		::System::Int32 get_targetDisplay()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_TARGETDISPLAY_OFFSET))(nullptr);
		}

		::System::Void set_targetDisplay(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_TARGETDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_clearDepthStencil()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_CLEARDEPTHSTENCIL_OFFSET))(nullptr);
		}

		::System::Void set_clearDepthStencil(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_CLEARDEPTHSTENCIL_OFFSET))(arg, nullptr);
		}

		::System::Single get_depthClearValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_DEPTHCLEARVALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_clearColor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_CLEARCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_clearColor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_CLEARCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_colorClearValue()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_COLORCLEARVALUE_OFFSET))(nullptr);
		}

		::System::Void set_colorClearValue(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_COLORCLEARVALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::BaseRuntimePanel* get_panel()
		{
			return (return (::UnityEngine::UIElements::BaseRuntimePanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_PANEL_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_visualTree()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_VISUALTREE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::DynamicAtlasSettings* get_dynamicAtlasSettings()
		{
			return (return (::UnityEngine::UIElements::DynamicAtlasSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_DYNAMICATLASSETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_dynamicAtlasSettings(::UnityEngine::UIElements::DynamicAtlasSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DynamicAtlasSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_DYNAMICATLASSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_RESET_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void DisposePanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_DISPOSEPANEL_OFFSET))(nullptr);
		}

		::System::Single get_ScreenDPI()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GET_SCREENDPI_OFFSET))(nullptr);
		}

		::System::Void set_ScreenDPI(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SET_SCREENDPI_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateScreenDPI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_UPDATESCREENDPI_OFFSET))(nullptr);
		}

		::System::Void ApplyThemeStyleSheet(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_APPLYTHEMESTYLESHEET_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeShaders()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_INITIALIZESHADERS_OFFSET))(nullptr);
		}

		::System::Void ApplyPanelSettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_APPLYPANELSETTINGS_OFFSET))(nullptr);
		}

		::System::Void SetScreenToPanelSpaceFunction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_SETSCREENTOPANELSPACEFUNCTION_OFFSET))(arg, nullptr);
		}

		::System::Single ResolveScale(::UnityEngine::Rect* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Rect*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_RESOLVESCALE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rect* GetDisplayRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_GETDISPLAYRECT_OFFSET))(nullptr);
		}

		::System::Void AttachAndInsertUIDocumentToVisualTree(::UnityEngine::UIElements::UIDocument* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIDocument*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_ATTACHANDINSERTUIDOCUMENTTOVISUALTREE_OFFSET))(arg, nullptr);
		}

		::System::Void DetachUIDocument(::UnityEngine::UIElements::UIDocument* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIDocument*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELSETTINGS_DETACHUIDOCUMENT_OFFSET))(arg, nullptr);
		}

	};
}

