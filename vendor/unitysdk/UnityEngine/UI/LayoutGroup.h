#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectOffset; }
namespace UnityEngine { class TextAnchor; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class DrivenRectTransformTracker; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_OFFSET UNITYSDK_OFFSET(0xA469A00)
#define UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_OFFSET UNITYSDK_OFFSET(0xA469A10)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_CHILDALIGNMENT_OFFSET UNITYSDK_OFFSET(0xA469A60)
#define UNITYENGINE_UI_LAYOUTGROUP_SET_CHILDALIGNMENT_OFFSET UNITYSDK_OFFSET(0xA469A70)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA4667B0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_RECTCHILDREN_OFFSET UNITYSDK_OFFSET(0xA469AC0)
#define UNITYENGINE_UI_LAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA4660E0)
#define UNITYENGINE_UI_LAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0xA469AD0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0xA469AE0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0xA469AF0)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0xA469B00)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0xA469B10)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA469B20)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0xA469B30)
#define UNITYENGINE_UI_LAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_LAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_LAYOUTGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA465D40)
#define UNITYENGINE_UI_LAYOUTGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA469B40)
#define UNITYENGINE_UI_LAYOUTGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA469C80)
#define UNITYENGINE_UI_LAYOUTGROUP_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA469CF0)
#define UNITYENGINE_UI_LAYOUTGROUP_GETTOTALMINSIZE_OFFSET UNITYSDK_OFFSET(0xA468CD0)
#define UNITYENGINE_UI_LAYOUTGROUP_GETTOTALPREFERREDSIZE_OFFSET UNITYSDK_OFFSET(0xA468BD0)
#define UNITYENGINE_UI_LAYOUTGROUP_GETTOTALFLEXIBLESIZE_OFFSET UNITYSDK_OFFSET(0xA468C50)
#define UNITYENGINE_UI_LAYOUTGROUP_GETSTARTOFFSET_OFFSET UNITYSDK_OFFSET(0xA4670F0)
#define UNITYENGINE_UI_LAYOUTGROUP_GETALIGNMENTONAXIS_OFFSET UNITYSDK_OFFSET(0xA4685F0)
#define UNITYENGINE_UI_LAYOUTGROUP_SETLAYOUTINPUTFORAXIS_OFFSET UNITYSDK_OFFSET(0xA4664E0)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_OFFSET UNITYSDK_OFFSET(0xA469D00)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_OFFSET UNITYSDK_OFFSET(0xA4688F0)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_OFFSET UNITYSDK_OFFSET(0xA4672C0)
#define UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_OFFSET UNITYSDK_OFFSET(0xA468640)
#define UNITYENGINE_UI_LAYOUTGROUP_GET_ISROOTLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0xA469D80)
#define UNITYENGINE_UI_LAYOUTGROUP_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xA469EA0)
#define UNITYENGINE_UI_LAYOUTGROUP_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0xA469ED0)
#define UNITYENGINE_UI_LAYOUTGROUP_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_LAYOUTGROUP_SETDIRTY_OFFSET UNITYSDK_OFFSET(0xA469B60)
#define UNITYENGINE_UI_LAYOUTGROUP_DELAYEDSETDIRTY_OFFSET UNITYSDK_OFFSET(0xA469EE0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutGroup_TypeDefinitionIndex = 34816;

	class LayoutGroup : public Il2CppObject
	{
	public:
		::UnityEngine::RectOffset* m_Padding; // 0x18
		::UnityEngine::TextAnchor* m_ChildAlignment; // 0x20
		::UnityEngine::RectTransform* m_Rect; // 0x28
		::UnityEngine::DrivenRectTransformTracker* m_Tracker; // 0x30
		::UnityEngine::Vector2* m_TotalMinSize; // 0x34
		::UnityEngine::Vector2* m_TotalPreferredSize; // 0x3C
		::UnityEngine::Vector2* m_TotalFlexibleSize; // 0x44
		Il2CppObject* m_RectChildren; // 0x50

		::UnityEngine::RectOffset* get_padding()
		{
			return (return (::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_PADDING_OFFSET))(nullptr);
		}

		::System::Void set_padding(::UnityEngine::RectOffset* arg)
		{
			((::System::Void(*)(::UnityEngine::RectOffset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SET_PADDING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextAnchor* get_childAlignment()
		{
			return (return (::UnityEngine::TextAnchor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_CHILDALIGNMENT_OFFSET))(nullptr);
		}

		::System::Void set_childAlignment(::UnityEngine::TextAnchor* arg)
		{
			((::System::Void(*)(::UnityEngine::TextAnchor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SET_CHILDALIGNMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_RECTTRANSFORM_OFFSET))(nullptr);
		}

		Il2CppObject* get_rectChildren()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_RECTCHILDREN_OFFSET))(nullptr);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(nullptr);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(nullptr);
		}

		::System::Single get_minWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_MINWIDTH_OFFSET))(nullptr);
		}

		::System::Single get_preferredWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_PREFERREDWIDTH_OFFSET))(nullptr);
		}

		::System::Single get_flexibleWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_FLEXIBLEWIDTH_OFFSET))(nullptr);
		}

		::System::Single get_minHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_MINHEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_preferredHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_PREFERREDHEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_flexibleHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_FLEXIBLEHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_layoutPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_LAYOUTPRIORITY_OFFSET))(nullptr);
		}

		::System::Void SetLayoutHorizontal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET))(nullptr);
		}

		::System::Void SetLayoutVertical()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(nullptr);
		}

		::System::Single GetTotalMinSize(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETTOTALMINSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single GetTotalPreferredSize(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETTOTALPREFERREDSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single GetTotalFlexibleSize(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETTOTALFLEXIBLESIZE_OFFSET))(arg, nullptr);
		}

		::System::Single GetStartOffset(::System::Int32 arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETSTARTOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetAlignmentOnAxis(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GETALIGNMENTONAXIS_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayoutInputForAxis(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETLAYOUTINPUTFORAXIS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetChildAlongAxis(::UnityEngine::RectTransform* arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetChildAlongAxisWithScale(::UnityEngine::RectTransform* arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Int32, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetChildAlongAxis(::UnityEngine::RectTransform* arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Int32, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXIS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetChildAlongAxisWithScale(::UnityEngine::RectTransform* arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETCHILDALONGAXISWITHSCALE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_isRootLayoutGroup()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_GET_ISROOTLAYOUTGROUP_OFFSET))(nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		::System::Void OnTransformChildrenChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_ONTRANSFORMCHILDRENCHANGED_OFFSET))(nullptr);
		}

		::System::Void SetProperty(Il2CppObject&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETPROPERTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_SETDIRTY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DelayedSetDirty(::UnityEngine::RectTransform* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP_DELAYEDSETDIRTY_OFFSET))(arg, nullptr);
		}

	};
}

