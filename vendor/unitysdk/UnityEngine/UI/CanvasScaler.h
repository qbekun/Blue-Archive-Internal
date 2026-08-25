#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Canvas; }

#define UNITYENGINE_UI_CANVASSCALER_GET_PHYSICALUNIT_OFFSET UNITYSDK_OFFSET(0xA464D60)
#define UNITYENGINE_UI_CANVASSCALER_HANDLESCALEWITHSCREENSIZE_OFFSET UNITYSDK_OFFSET(0xA464D70)
#define UNITYENGINE_UI_CANVASSCALER_GET_SCREENMATCHMODE_OFFSET UNITYSDK_OFFSET(0xA4650C0)
#define UNITYENGINE_UI_CANVASSCALER_SET_DEFAULTSPRITEDPI_OFFSET UNITYSDK_OFFSET(0xA4650D0)
#define UNITYENGINE_UI_CANVASSCALER_GET_DEFAULTSPRITEDPI_OFFSET UNITYSDK_OFFSET(0xA4650F0)
#define UNITYENGINE_UI_CANVASSCALER_SETSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xA465040)
#define UNITYENGINE_UI_CANVASSCALER_GET_UISCALEMODE_OFFSET UNITYSDK_OFFSET(0xA465100)
#define UNITYENGINE_UI_CANVASSCALER_SET_FALLBACKSCREENDPI_OFFSET UNITYSDK_OFFSET(0xA465110)
#define UNITYENGINE_UI_CANVASSCALER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA465120)
#define UNITYENGINE_UI_CANVASSCALER_SET_DYNAMICPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0xA465160)
#define UNITYENGINE_UI_CANVASSCALER_SET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0xA465170)
#define UNITYENGINE_UI_CANVASSCALER_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xA465180)
#define UNITYENGINE_UI_CANVASSCALER_CANVAS_PREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0xA465190)
#define UNITYENGINE_UI_CANVASSCALER_GET_DYNAMICPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0xA4651B0)
#define UNITYENGINE_UI_CANVASSCALER_SET_REFERENCERESOLUTION_OFFSET UNITYSDK_OFFSET(0xA4651C0)
#define UNITYENGINE_UI_CANVASSCALER_SET_SCREENMATCHMODE_OFFSET UNITYSDK_OFFSET(0xA465240)
#define UNITYENGINE_UI_CANVASSCALER_SETREFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0xA465080)
#define UNITYENGINE_UI_CANVASSCALER_GET_FALLBACKSCREENDPI_OFFSET UNITYSDK_OFFSET(0xA465250)
#define UNITYENGINE_UI_CANVASSCALER_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xA465260)
#define UNITYENGINE_UI_CANVASSCALER_GET_MATCHWIDTHORHEIGHT_OFFSET UNITYSDK_OFFSET(0xA465280)
#define UNITYENGINE_UI_CANVASSCALER_GET_REFERENCERESOLUTION_OFFSET UNITYSDK_OFFSET(0xA465290)
#define UNITYENGINE_UI_CANVASSCALER_SET_UISCALEMODE_OFFSET UNITYSDK_OFFSET(0xA4652A0)
#define UNITYENGINE_UI_CANVASSCALER_HANDLE_OFFSET UNITYSDK_OFFSET(0xA4652B0)
#define UNITYENGINE_UI_CANVASSCALER_HANDLECONSTANTPHYSICALSIZE_OFFSET UNITYSDK_OFFSET(0xA465380)
#define UNITYENGINE_UI_CANVASSCALER_HANDLECONSTANTPIXELSIZE_OFFSET UNITYSDK_OFFSET(0xA465440)
#define UNITYENGINE_UI_CANVASSCALER_SET_PHYSICALUNIT_OFFSET UNITYSDK_OFFSET(0xA4654C0)
#define UNITYENGINE_UI_CANVASSCALER_GET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0xA4654D0)
#define UNITYENGINE_UI_CANVASSCALER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA4654E0)
#define UNITYENGINE_UI_CANVASSCALER_HANDLEWORLDCANVAS_OFFSET UNITYSDK_OFFSET(0xA4655A0)
#define UNITYENGINE_UI_CANVASSCALER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA465620)
#define UNITYENGINE_UI_CANVASSCALER_SET_MATCHWIDTHORHEIGHT_OFFSET UNITYSDK_OFFSET(0xA465730)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CanvasScaler_TypeDefinitionIndex = 34800;

	class CanvasScaler : public Il2CppObject
	{
	public:
		ScaleMode* m_UiScaleMode; // 0x18
		::System::Single m_ReferencePixelsPerUnit; // 0x1C
		::System::Single m_ScaleFactor; // 0x20
		::UnityEngine::Vector2* m_ReferenceResolution; // 0x24
		ScreenMatchMode* m_ScreenMatchMode; // 0x2C
		::System::Single m_MatchWidthOrHeight; // 0x30
		::System::Single kLogBase; // 0x0
		Unit* m_PhysicalUnit; // 0x34
		::System::Single m_FallbackScreenDPI; // 0x38
		::System::Single m_DefaultSpriteDPI; // 0x3C
		::System::Single m_DynamicPixelsPerUnit; // 0x40
		::UnityEngine::Canvas* m_Canvas; // 0x48
		::System::Single m_PrevScaleFactor; // 0x50
		::System::Single m_PrevReferencePixelsPerUnit; // 0x54
		::System::Boolean m_PresetInfoIsWorld; // 0x58

		Unit* get_physicalUnit()
		{
			return (return (Unit*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_PHYSICALUNIT_OFFSET))(nullptr);
		}

		::System::Void HandleScaleWithScreenSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_HANDLESCALEWITHSCREENSIZE_OFFSET))(nullptr);
		}

		ScreenMatchMode* get_screenMatchMode()
		{
			return (return (ScreenMatchMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_SCREENMATCHMODE_OFFSET))(nullptr);
		}

		::System::Void set_defaultSpriteDPI(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_DEFAULTSPRITEDPI_OFFSET))(arg, nullptr);
		}

		::System::Single get_defaultSpriteDPI()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_DEFAULTSPRITEDPI_OFFSET))(nullptr);
		}

		::System::Void SetScaleFactor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SETSCALEFACTOR_OFFSET))(arg, nullptr);
		}

		ScaleMode* get_uiScaleMode()
		{
			return (return (ScaleMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_UISCALEMODE_OFFSET))(nullptr);
		}

		::System::Void set_fallbackScreenDPI(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_FALLBACKSCREENDPI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_dynamicPixelsPerUnit(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_DYNAMICPIXELSPERUNIT_OFFSET))(arg, nullptr);
		}

		::System::Void set_referencePixelsPerUnit(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_REFERENCEPIXELSPERUNIT_OFFSET))(arg, nullptr);
		}

		::System::Single get_scaleFactor()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_SCALEFACTOR_OFFSET))(nullptr);
		}

		::System::Void Canvas_preWillRenderCanvases()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_CANVAS_PREWILLRENDERCANVASES_OFFSET))(nullptr);
		}

		::System::Single get_dynamicPixelsPerUnit()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_DYNAMICPIXELSPERUNIT_OFFSET))(nullptr);
		}

		::System::Void set_referenceResolution(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_REFERENCERESOLUTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_screenMatchMode(ScreenMatchMode* arg)
		{
			((::System::Void(*)(ScreenMatchMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_SCREENMATCHMODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetReferencePixelsPerUnit(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SETREFERENCEPIXELSPERUNIT_OFFSET))(arg, nullptr);
		}

		::System::Single get_fallbackScreenDPI()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_FALLBACKSCREENDPI_OFFSET))(nullptr);
		}

		::System::Void set_scaleFactor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_SCALEFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_matchWidthOrHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_MATCHWIDTHORHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_referenceResolution()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_REFERENCERESOLUTION_OFFSET))(nullptr);
		}

		::System::Void set_uiScaleMode(ScaleMode* arg)
		{
			((::System::Void(*)(ScaleMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_UISCALEMODE_OFFSET))(arg, nullptr);
		}

		::System::Void Handle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_HANDLE_OFFSET))(nullptr);
		}

		::System::Void HandleConstantPhysicalSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_HANDLECONSTANTPHYSICALSIZE_OFFSET))(nullptr);
		}

		::System::Void HandleConstantPixelSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_HANDLECONSTANTPIXELSIZE_OFFSET))(nullptr);
		}

		::System::Void set_physicalUnit(Unit* arg)
		{
			((::System::Void(*)(Unit*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_PHYSICALUNIT_OFFSET))(arg, nullptr);
		}

		::System::Single get_referencePixelsPerUnit()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_GET_REFERENCEPIXELSPERUNIT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void HandleWorldCanvas()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_HANDLEWORLDCANVAS_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_matchWidthOrHeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASSCALER_SET_MATCHWIDTHORHEIGHT_OFFSET))(arg, nullptr);
		}

	};
}

