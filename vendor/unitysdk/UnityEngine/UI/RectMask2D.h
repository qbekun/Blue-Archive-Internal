#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class RectangularVertexClipper; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Vector2Int; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::UI { class IClippable; }

#define UNITYENGINE_UI_RECTMASK2D_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA4724D0)
#define UNITYENGINE_UI_RECTMASK2D_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0xA4724F0)
#define UNITYENGINE_UI_RECTMASK2D_GET_PADDING_OFFSET UNITYSDK_OFFSET(0xA472640)
#define UNITYENGINE_UI_RECTMASK2D_SET_PADDING_OFFSET UNITYSDK_OFFSET(0xA472650)
#define UNITYENGINE_UI_RECTMASK2D_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0xA472660)
#define UNITYENGINE_UI_RECTMASK2D_GET_CANVASRECT_OFFSET UNITYSDK_OFFSET(0xA472690)
#define UNITYENGINE_UI_RECTMASK2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA4728A0)
#define UNITYENGINE_UI_RECTMASK2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA4728D0)
#define UNITYENGINE_UI_RECTMASK2D_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA472990)
#define UNITYENGINE_UI_RECTMASK2D_UPDATECLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0xA4729C0)
#define UNITYENGINE_UI_RECTMASK2D_ADDCLIPPABLE_OFFSET UNITYSDK_OFFSET(0xA472D70)
#define UNITYENGINE_UI_RECTMASK2D_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA4725E0)
#define UNITYENGINE_UI_RECTMASK2D_PERFORMCLIPPING_OFFSET UNITYSDK_OFFSET(0xA472E80)
#define UNITYENGINE_UI_RECTMASK2D_GET_ROOTCANVASRECT_OFFSET UNITYSDK_OFFSET(0xA473990)
#define UNITYENGINE_UI_RECTMASK2D_SET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0xA473D00)
#define UNITYENGINE_UI_RECTMASK2D_GET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0xA473D30)
#define UNITYENGINE_UI_RECTMASK2D_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0xA472750)
#define UNITYENGINE_UI_RECTMASK2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA473D40)
#define UNITYENGINE_UI_RECTMASK2D_REMOVECLIPPABLE_OFFSET UNITYSDK_OFFSET(0xA473ED0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RectMask2D_TypeDefinitionIndex = 34832;

	class RectMask2D : public Il2CppObject
	{
	public:
		::UnityEngine::UI::RectangularVertexClipper* m_VertexClipper; // 0x18
		::UnityEngine::RectTransform* m_RectTransform; // 0x20
		Il2CppObject* m_MaskableTargets; // 0x28
		Il2CppObject* m_ClipTargets; // 0x30
		::System::Boolean m_ShouldRecalculateClipRects; // 0x38
		Il2CppObject* m_Clippers; // 0x40
		::UnityEngine::Rect* m_LastClipRectCanvasSpace; // 0x48
		::System::Boolean m_ForceClip; // 0x58
		::UnityEngine::Vector4* m_Padding; // 0x5C
		::UnityEngine::Vector2Int* m_Softness; // 0x6C
		::UnityEngine::Canvas* m_Canvas; // 0x78
		::Il2CppArray<::System::Object*>* m_Corners; // 0x80

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ISRAYCASTLOCATIONVALID_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector4* get_padding()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_PADDING_OFFSET))(nullptr);
		}

		::System::Void set_padding(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_SET_PADDING_OFFSET))(arg, nullptr);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ONCANVASHIERARCHYCHANGED_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_canvasRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_CANVASRECT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::System::Void UpdateClipSoftness()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_UPDATECLIPSOFTNESS_OFFSET))(nullptr);
		}

		::System::Void AddClippable(::UnityEngine::UI::IClippable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::IClippable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ADDCLIPPABLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_RECTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void PerformClipping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_PERFORMCLIPPING_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_rootCanvasRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_ROOTCANVASRECT_OFFSET))(nullptr);
		}

		::System::Void set_softness(::UnityEngine::Vector2Int* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_SET_SOFTNESS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2Int* get_softness()
		{
			return (return (::UnityEngine::Vector2Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_SOFTNESS_OFFSET))(nullptr);
		}

		::UnityEngine::Canvas* get_Canvas()
		{
			return (return (::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_GET_CANVAS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RemoveClippable(::UnityEngine::UI::IClippable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::IClippable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_REMOVECLIPPABLE_OFFSET))(arg, nullptr);
		}

	};
}

