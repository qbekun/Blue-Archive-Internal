#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RenderMode; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class AdditionalCanvasShaderChannels; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Rect&; }
namespace UnityEngine { class Vector2&; }

#define UNITYENGINE_CANVAS_ADD_PREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0xA4553B0)
#define UNITYENGINE_CANVAS_REMOVE_PREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0xA455460)
#define UNITYENGINE_CANVAS_ADD_WILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0xA455510)
#define UNITYENGINE_CANVAS_REMOVE_WILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0xA4555D0)
#define UNITYENGINE_CANVAS_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0xA455690)
#define UNITYENGINE_CANVAS_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0xA4556D0)
#define UNITYENGINE_CANVAS_GET_ISROOTCANVAS_OFFSET UNITYSDK_OFFSET(0xA455710)
#define UNITYENGINE_CANVAS_GET_PIXELRECT_OFFSET UNITYSDK_OFFSET(0xA455750)
#define UNITYENGINE_CANVAS_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xA4557E0)
#define UNITYENGINE_CANVAS_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xA455820)
#define UNITYENGINE_CANVAS_GET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0xA455870)
#define UNITYENGINE_CANVAS_SET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0xA4558B0)
#define UNITYENGINE_CANVAS_GET_OVERRIDEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0xA455900)
#define UNITYENGINE_CANVAS_SET_OVERRIDEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0xA455940)
#define UNITYENGINE_CANVAS_GET_VERTEXCOLORALWAYSGAMMASPACE_OFFSET UNITYSDK_OFFSET(0xA455980)
#define UNITYENGINE_CANVAS_SET_VERTEXCOLORALWAYSGAMMASPACE_OFFSET UNITYSDK_OFFSET(0xA4559C0)
#define UNITYENGINE_CANVAS_GET_PIXELPERFECT_OFFSET UNITYSDK_OFFSET(0xA455A00)
#define UNITYENGINE_CANVAS_SET_PIXELPERFECT_OFFSET UNITYSDK_OFFSET(0xA455A40)
#define UNITYENGINE_CANVAS_GET_PLANEDISTANCE_OFFSET UNITYSDK_OFFSET(0xA455A80)
#define UNITYENGINE_CANVAS_SET_PLANEDISTANCE_OFFSET UNITYSDK_OFFSET(0xA455AC0)
#define UNITYENGINE_CANVAS_GET_RENDERORDER_OFFSET UNITYSDK_OFFSET(0xA455B10)
#define UNITYENGINE_CANVAS_GET_OVERRIDESORTING_OFFSET UNITYSDK_OFFSET(0xA455B50)
#define UNITYENGINE_CANVAS_SET_OVERRIDESORTING_OFFSET UNITYSDK_OFFSET(0xA455B90)
#define UNITYENGINE_CANVAS_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA455BD0)
#define UNITYENGINE_CANVAS_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA455C10)
#define UNITYENGINE_CANVAS_GET_TARGETDISPLAY_OFFSET UNITYSDK_OFFSET(0xA455C50)
#define UNITYENGINE_CANVAS_SET_TARGETDISPLAY_OFFSET UNITYSDK_OFFSET(0xA455C90)
#define UNITYENGINE_CANVAS_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xA455CD0)
#define UNITYENGINE_CANVAS_SET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xA455D10)
#define UNITYENGINE_CANVAS_GET_CACHEDSORTINGLAYERVALUE_OFFSET UNITYSDK_OFFSET(0xA455D50)
#define UNITYENGINE_CANVAS_GET_ADDITIONALSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0xA455D90)
#define UNITYENGINE_CANVAS_SET_ADDITIONALSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0xA455DD0)
#define UNITYENGINE_CANVAS_GET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0xA455E10)
#define UNITYENGINE_CANVAS_SET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0xA455E50)
#define UNITYENGINE_CANVAS_GET_ROOTCANVAS_OFFSET UNITYSDK_OFFSET(0xA455E90)
#define UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_OFFSET UNITYSDK_OFFSET(0xA455ED0)
#define UNITYENGINE_CANVAS_GET_EXTERNBEGINRENDEROVERLAYS_OFFSET UNITYSDK_OFFSET(0xA455F60)
#define UNITYENGINE_CANVAS_SET_EXTERNBEGINRENDEROVERLAYS_OFFSET UNITYSDK_OFFSET(0xA455FA0)
#define UNITYENGINE_CANVAS_GET_EXTERNRENDEROVERLAYSBEFORE_OFFSET UNITYSDK_OFFSET(0xA455FF0)
#define UNITYENGINE_CANVAS_SET_EXTERNRENDEROVERLAYSBEFORE_OFFSET UNITYSDK_OFFSET(0xA456030)
#define UNITYENGINE_CANVAS_GET_EXTERNENDRENDEROVERLAYS_OFFSET UNITYSDK_OFFSET(0xA456080)
#define UNITYENGINE_CANVAS_SET_EXTERNENDRENDEROVERLAYS_OFFSET UNITYSDK_OFFSET(0xA4560C0)
#define UNITYENGINE_CANVAS_SETEXTERNALCANVASENABLED_OFFSET UNITYSDK_OFFSET(0xA456110)
#define UNITYENGINE_CANVAS_GET_WORLDCAMERA_OFFSET UNITYSDK_OFFSET(0xA456150)
#define UNITYENGINE_CANVAS_SET_WORLDCAMERA_OFFSET UNITYSDK_OFFSET(0xA456190)
#define UNITYENGINE_CANVAS_GET_NORMALIZEDSORTINGGRIDSIZE_OFFSET UNITYSDK_OFFSET(0xA4561D0)
#define UNITYENGINE_CANVAS_SET_NORMALIZEDSORTINGGRIDSIZE_OFFSET UNITYSDK_OFFSET(0xA456210)
#define UNITYENGINE_CANVAS_GET_SORTINGGRIDNORMALIZEDSIZE_OFFSET UNITYSDK_OFFSET(0xA456260)
#define UNITYENGINE_CANVAS_SET_SORTINGGRIDNORMALIZEDSIZE_OFFSET UNITYSDK_OFFSET(0xA4562A0)
#define UNITYENGINE_CANVAS_GETDEFAULTCANVASTEXTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA4562E0)
#define UNITYENGINE_CANVAS_GETDEFAULTCANVASMATERIAL_OFFSET UNITYSDK_OFFSET(0xA456320)
#define UNITYENGINE_CANVAS_GETETC1SUPPORTEDCANVASMATERIAL_OFFSET UNITYSDK_OFFSET(0xA456360)
#define UNITYENGINE_CANVAS_UPDATECANVASRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA4563A0)
#define UNITYENGINE_CANVAS_FORCEUPDATECANVASES_OFFSET UNITYSDK_OFFSET(0xA4563E0)
#define UNITYENGINE_CANVAS_SENDPREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0xA456470)
#define UNITYENGINE_CANVAS_SENDWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0xA4564C0)
#define UNITYENGINE_CANVAS_BEGINRENDEREXTRAOVERLAYS_OFFSET UNITYSDK_OFFSET(0xA456510)
#define UNITYENGINE_CANVAS_RENDEREXTRAOVERLAYSBEFORE_OFFSET UNITYSDK_OFFSET(0xA456570)
#define UNITYENGINE_CANVAS_ENDRENDEREXTRAOVERLAYS_OFFSET UNITYSDK_OFFSET(0xA4565D0)
#define UNITYENGINE_CANVAS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA456630)
#define UNITYENGINE_CANVAS_GET_PIXELRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA4557A0)
#define UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA455F20)

namespace UnityEngine
{
	inline static constexpr unsigned int Canvas_TypeDefinitionIndex = 37683;

	class Canvas : public Il2CppObject
	{
	public:
		WillRenderCanvases* preWillRenderCanvases; // 0x0
		WillRenderCanvases* willRenderCanvases; // 0x8
		Il2CppObject* _externBeginRenderOverlays_k__BackingField; // 0x10
		Il2CppObject* _externRenderOverlaysBefore_k__BackingField; // 0x18
		Il2CppObject* _externEndRenderOverlays_k__BackingField; // 0x20

		::System::Void add_preWillRenderCanvases(WillRenderCanvases* arg)
		{
			((::System::Void(*)(WillRenderCanvases*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_ADD_PREWILLRENDERCANVASES_OFFSET))(arg, nullptr);
		}

		::System::Void remove_preWillRenderCanvases(WillRenderCanvases* arg)
		{
			((::System::Void(*)(WillRenderCanvases*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_REMOVE_PREWILLRENDERCANVASES_OFFSET))(arg, nullptr);
		}

		::System::Void add_willRenderCanvases(WillRenderCanvases* arg)
		{
			((::System::Void(*)(WillRenderCanvases*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_ADD_WILLRENDERCANVASES_OFFSET))(arg, nullptr);
		}

		::System::Void remove_willRenderCanvases(WillRenderCanvases* arg)
		{
			((::System::Void(*)(WillRenderCanvases*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_REMOVE_WILLRENDERCANVASES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderMode* get_renderMode()
		{
			return (return (::UnityEngine::RenderMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERMODE_OFFSET))(nullptr);
		}

		::System::Void set_renderMode(::UnityEngine::RenderMode* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_RENDERMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isRootCanvas()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_ISROOTCANVAS_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_pixelRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PIXELRECT_OFFSET))(nullptr);
		}

		::System::Single get_scaleFactor()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SCALEFACTOR_OFFSET))(nullptr);
		}

		::System::Void set_scaleFactor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SCALEFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_referencePixelsPerUnit()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_REFERENCEPIXELSPERUNIT_OFFSET))(nullptr);
		}

		::System::Void set_referencePixelsPerUnit(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_REFERENCEPIXELSPERUNIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_overridePixelPerfect()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_OVERRIDEPIXELPERFECT_OFFSET))(nullptr);
		}

		::System::Void set_overridePixelPerfect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_OVERRIDEPIXELPERFECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_vertexColorAlwaysGammaSpace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_VERTEXCOLORALWAYSGAMMASPACE_OFFSET))(nullptr);
		}

		::System::Void set_vertexColorAlwaysGammaSpace(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_VERTEXCOLORALWAYSGAMMASPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_pixelPerfect()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PIXELPERFECT_OFFSET))(nullptr);
		}

		::System::Void set_pixelPerfect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_PIXELPERFECT_OFFSET))(arg, nullptr);
		}

		::System::Single get_planeDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PLANEDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_planeDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_PLANEDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_renderOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERORDER_OFFSET))(nullptr);
		}

		::System::Boolean get_overrideSorting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_OVERRIDESORTING_OFFSET))(nullptr);
		}

		::System::Void set_overrideSorting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_OVERRIDESORTING_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_sortingOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void set_sortingOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_targetDisplay()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_TARGETDISPLAY_OFFSET))(nullptr);
		}

		::System::Void set_targetDisplay(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_TARGETDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_sortingLayerID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGLAYERID_OFFSET))(nullptr);
		}

		::System::Void set_sortingLayerID(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGLAYERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_cachedSortingLayerValue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_CACHEDSORTINGLAYERVALUE_OFFSET))(nullptr);
		}

		::UnityEngine::AdditionalCanvasShaderChannels* get_additionalShaderChannels()
		{
			return (return (::UnityEngine::AdditionalCanvasShaderChannels*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_ADDITIONALSHADERCHANNELS_OFFSET))(nullptr);
		}

		::System::Void set_additionalShaderChannels(::UnityEngine::AdditionalCanvasShaderChannels* arg)
		{
			((::System::Void(*)(::UnityEngine::AdditionalCanvasShaderChannels*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_ADDITIONALSHADERCHANNELS_OFFSET))(arg, nullptr);
		}

		::System::String* get_sortingLayerName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGLAYERNAME_OFFSET))(nullptr);
		}

		::System::Void set_sortingLayerName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGLAYERNAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::Canvas* get_rootCanvas()
		{
			return (return (::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_ROOTCANVAS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_renderingDisplaySize()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_OFFSET))(nullptr);
		}

		Il2CppObject* get_externBeginRenderOverlays()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_EXTERNBEGINRENDEROVERLAYS_OFFSET))(nullptr);
		}

		::System::Void set_externBeginRenderOverlays(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_EXTERNBEGINRENDEROVERLAYS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_externRenderOverlaysBefore()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_EXTERNRENDEROVERLAYSBEFORE_OFFSET))(nullptr);
		}

		::System::Void set_externRenderOverlaysBefore(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_EXTERNRENDEROVERLAYSBEFORE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_externEndRenderOverlays()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_EXTERNENDRENDEROVERLAYS_OFFSET))(nullptr);
		}

		::System::Void set_externEndRenderOverlays(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_EXTERNENDRENDEROVERLAYS_OFFSET))(arg, nullptr);
		}

		::System::Void SetExternalCanvasEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SETEXTERNALCANVASENABLED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Camera* get_worldCamera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_WORLDCAMERA_OFFSET))(nullptr);
		}

		::System::Void set_worldCamera(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_WORLDCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Single get_normalizedSortingGridSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_NORMALIZEDSORTINGGRIDSIZE_OFFSET))(nullptr);
		}

		::System::Void set_normalizedSortingGridSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_NORMALIZEDSORTINGGRIDSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_sortingGridNormalizedSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGGRIDNORMALIZEDSIZE_OFFSET))(nullptr);
		}

		::System::Void set_sortingGridNormalizedSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGGRIDNORMALIZEDSIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* GetDefaultCanvasTextMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GETDEFAULTCANVASTEXTMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetDefaultCanvasMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GETDEFAULTCANVASMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetETC1SupportedCanvasMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GETETC1SUPPORTEDCANVASMATERIAL_OFFSET))(nullptr);
		}

		::System::Void UpdateCanvasRectTransform(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_UPDATECANVASRECTTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void ForceUpdateCanvases()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_FORCEUPDATECANVASES_OFFSET))(nullptr);
		}

		::System::Void SendPreWillRenderCanvases()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SENDPREWILLRENDERCANVASES_OFFSET))(nullptr);
		}

		::System::Void SendWillRenderCanvases()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SENDWILLRENDERCANVASES_OFFSET))(nullptr);
		}

		::System::Void BeginRenderExtraOverlays(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_BEGINRENDEREXTRAOVERLAYS_OFFSET))(arg, nullptr);
		}

		::System::Void RenderExtraOverlaysBefore(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_RENDEREXTRAOVERLAYSBEFORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndRenderExtraOverlays(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_ENDRENDEREXTRAOVERLAYS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void get_pixelRect_Injected(::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PIXELRECT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_renderingDisplaySize_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

