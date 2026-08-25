#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace RuntimeInspectorNamespace { class IListViewAdapter; }
namespace UnityEngine { class Vector2; }

#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_GET_VIEWPORTWIDTH_OFFSET UNITYSDK_OFFSET(0x9586940)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_UPDATEITEMSINTHELIST_OFFSET UNITYSDK_OFFSET(0x9586950)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9586EF0)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_CREATEITEMSBETWEENINDICES_OFFSET UNITYSDK_OFFSET(0x9586D00)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x9587160)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_UPDATELIST_OFFSET UNITYSDK_OFFSET(0x9587170)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_START_OFFSET UNITYSDK_OFFSET(0x95872F0)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_UPDATEITEMCONTENTSBETWEENINDICES_OFFSET UNITYSDK_OFFSET(0x9586DF0)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_RESETLIST_OFFSET UNITYSDK_OFFSET(0x95873A0)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_DESTROYITEMSBETWEENINDICES_OFFSET UNITYSDK_OFFSET(0x9586D40)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW__START_B__16_0_OFFSET UNITYSDK_OFFSET(0x9587570)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_CREATEITEMATINDEX_OFFSET UNITYSDK_OFFSET(0x9586FC0)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_GET_VIEWPORTHEIGHT_OFFSET UNITYSDK_OFFSET(0x9587580)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_SETADAPTER_OFFSET UNITYSDK_OFFSET(0x9587590)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x9587650)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int RecycledListView_TypeDefinitionIndex = 35720;

	class RecycledListView : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* viewportTransform; // 0x18
		::UnityEngine::RectTransform* contentTransform; // 0x20
		::System::Single itemHeight; // 0x28
		::System::Single _1OverItemHeight; // 0x2C
		::System::Single m_viewportWidth; // 0x30
		::System::Single m_viewportHeight; // 0x34
		Il2CppObject* items; // 0x38
		Il2CppObject* pooledItems; // 0x40
		::RuntimeInspectorNamespace::IListViewAdapter* adapter; // 0x48
		::System::Boolean isDirty; // 0x50
		::System::Int32 currentTopIndex; // 0x54
		::System::Int32 currentBottomIndex; // 0x58

		::System::Single get_ViewportWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_GET_VIEWPORTWIDTH_OFFSET))(nullptr);
		}

		::System::Void UpdateItemsInTheList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_UPDATEITEMSINTHELIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CreateItemsBetweenIndices(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_CREATEITEMSBETWEENINDICES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		::System::Void UpdateList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_UPDATELIST_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_START_OFFSET))(nullptr);
		}

		::System::Void UpdateItemContentsBetweenIndices(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_UPDATEITEMCONTENTSBETWEENINDICES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResetList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_RESETLIST_OFFSET))(nullptr);
		}

		::System::Void DestroyItemsBetweenIndices(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_DESTROYITEMSBETWEENINDICES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _Start_b__16_0(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW__START_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Void CreateItemAtIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_CREATEITEMATINDEX_OFFSET))(arg, nullptr);
		}

		::System::Single get_ViewportHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_GET_VIEWPORTHEIGHT_OFFSET))(nullptr);
		}

		::System::Void SetAdapter(::RuntimeInspectorNamespace::IListViewAdapter* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::IListViewAdapter*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_SETADAPTER_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTVIEW_UPDATE_OFFSET))(nullptr);
		}

	};
}

