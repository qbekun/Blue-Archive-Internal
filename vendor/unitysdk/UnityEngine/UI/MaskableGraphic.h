#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class RectMask2D; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ROOTCANVASRECT_OFFSET UNITYSDK_OFFSET(0xA46E340)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA46E6F0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ONCULLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xA46E8C0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_UNITYENGINE.UI.ICLIPPABLE.GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA46E8E0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_PARENTMASKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xA46E8F0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATEMASKING_OFFSET UNITYSDK_OFFSET(0xA46E900)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0xA46E990)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0xA46E9E0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0xA46EA10)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ISMASKINGGRAPHIC_OFFSET UNITYSDK_OFFSET(0xA46D9B0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA46EA20)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ISMASKINGGRAPHIC_OFFSET UNITYSDK_OFFSET(0xA46EA70)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_.CTOR_OFFSET UNITYSDK_OFFSET(0xA46EA80)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_MASKABLE_OFFSET UNITYSDK_OFFSET(0xA46EBC0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_UPDATECLIPPARENT_OFFSET UNITYSDK_OFFSET(0xA46E740)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SET_MASKABLE_OFFSET UNITYSDK_OFFSET(0xA46F090)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_UPDATECULL_OFFSET UNITYSDK_OFFSET(0xA46EFC0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA46F0D0)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ONCULLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xA46F200)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0xA46F210)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA46F270)
#define UNITYENGINE_UI_MASKABLEGRAPHIC_CULL_OFFSET UNITYSDK_OFFSET(0xA46F330)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MaskableGraphic_TypeDefinitionIndex = 34824;

	class MaskableGraphic : public Il2CppObject
	{
	public:
		::System::Boolean m_ShouldRecalculateStencil; // 0xA0
		::UnityEngine::Material* m_MaskMaterial; // 0xA8
		::UnityEngine::UI::RectMask2D* m_ParentMask; // 0xB0
		::System::Boolean m_Maskable; // 0xB8
		::System::Boolean m_IsMaskingGraphic; // 0xB9
		::System::Boolean m_IncludeForMasking; // 0xBA
		CullStateChangedEvent* m_OnCullStateChanged; // 0xC0
		::System::Boolean m_ShouldRecalculate; // 0xC8
		::System::Int32 m_StencilValue; // 0xCC
		::Il2CppArray<::System::Object*>* m_Corners; // 0xD0

		::UnityEngine::Rect* get_rootCanvasRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ROOTCANVASRECT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_onCullStateChanged(CullStateChangedEvent* arg)
		{
			((::System::Void(*)(CullStateChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ONCULLSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* UnityEngine.UI.IClippable.get_gameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_UNITYENGINE.UI.ICLIPPABLE.GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void ParentMaskStateChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_PARENTMASKSTATECHANGED_OFFSET))(nullptr);
		}

		::System::Void RecalculateMasking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATEMASKING_OFFSET))(nullptr);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_ONCANVASHIERARCHYCHANGED_OFFSET))(nullptr);
		}

		::System::Void SetClipSoftness(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPSOFTNESS_OFFSET))(arg, nullptr);
		}

		::System::Void RecalculateClipping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_RECALCULATECLIPPING_OFFSET))(nullptr);
		}

		::System::Void set_isMaskingGraphic(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SET_ISMASKINGGRAPHIC_OFFSET))(arg, nullptr);
		}

		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::System::Boolean get_isMaskingGraphic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ISMASKINGGRAPHIC_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_maskable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GET_MASKABLE_OFFSET))(nullptr);
		}

		::System::Void UpdateClipParent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_UPDATECLIPPARENT_OFFSET))(nullptr);
		}

		::System::Void set_maskable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SET_MASKABLE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCull(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_UPDATECULL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GETMODIFIEDMATERIAL_OFFSET))(arg, nullptr);
		}

		CullStateChangedEvent* get_onCullStateChanged()
		{
			return (return (CullStateChangedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_GET_ONCULLSTATECHANGED_OFFSET))(nullptr);
		}

		::System::Void SetClipRect(::UnityEngine::Rect* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_SETCLIPRECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Cull(::UnityEngine::Rect* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKABLEGRAPHIC_CULL_OFFSET))(arg, arg, nullptr);
		}

	};
}

