#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class ObjectReferencePicker; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Button; }
namespace RuntimeInspectorNamespace { class RecycledListView; }
namespace RuntimeInspectorNamespace { class ObjectReferencePickerItem; }
namespace UnityEngine { class Canvas; }
namespace RuntimeInspectorNamespace { class RecycledListItem; }
namespace UnityEngine { class Transform; }

#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95840D0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_SHOW_OFFSET UNITYSDK_OFFSET(0x956F330)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.CREATEITEM_OFFSET UNITYSDK_OFFSET(0x9584600)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x95847F0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.ONITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x9584940)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_REFRESHSKIN_OFFSET UNITYSDK_OFFSET(0x9584CA0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER__GENERATEREFERENCEITEMS_B__38_0_OFFSET UNITYSDK_OFFSET(0x9584EC0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9584F20)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_CANCEL_OFFSET UNITYSDK_OFFSET(0x95850C0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.SETITEMCONTENT_OFFSET UNITYSDK_OFFSET(0x9585300)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_ONSEARCHTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0x9585600)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER__AWAKE_B__33_0_OFFSET UNITYSDK_OFFSET(0x95857E0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_GENERATEREFERENCEITEMS_OFFSET UNITYSDK_OFFSET(0x95841A0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_CLOSE_OFFSET UNITYSDK_OFFSET(0x95851C0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.GET_COUNT_OFFSET UNITYSDK_OFFSET(0x95858D0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x956EF50)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.GET_ITEMHEIGHT_OFFSET UNITYSDK_OFFSET(0x9585910)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ObjectReferencePicker_TypeDefinitionIndex = 35713;

	class ObjectReferencePicker : public Il2CppObject
	{
	public:
		::System::String* SPRITE_ATLAS_PREFIX; // 0x0
		::RuntimeInspectorNamespace::ObjectReferencePicker* m_instance; // 0x0
		ReferenceCallback* onReferenceChanged; // 0x28
		ReferenceCallback* onSelectionConfirmed; // 0x30
		NameGetter* referenceNameGetter; // 0x38
		NameGetter* referenceDisplayNameGetter; // 0x40
		::UnityEngine::UI::Image* panel; // 0x48
		::UnityEngine::UI::Image* scrollbar; // 0x50
		::UnityEngine::UI::InputField* searchBar; // 0x58
		::UnityEngine::UI::Image* searchIcon; // 0x60
		::UnityEngine::UI::Image* searchBarBackground; // 0x68
		::UnityEngine::UI::Text* selectPromptText; // 0x70
		::UnityEngine::UI::LayoutElement* searchBarLayoutElement; // 0x78
		::UnityEngine::UI::LayoutElement* buttonsLayoutElement; // 0x80
		::UnityEngine::UI::Button* cancelButton; // 0x88
		::UnityEngine::UI::Button* okButton; // 0x90
		::RuntimeInspectorNamespace::RecycledListView* listView; // 0x98
		::UnityEngine::UI::Image* listViewBackground; // 0xA0
		::RuntimeInspectorNamespace::ObjectReferencePickerItem* referenceItemPrefab; // 0xA8
		::UnityEngine::Canvas* referenceCanvas; // 0xB0
		Il2CppObject* references; // 0xB8
		Il2CppObject* filteredReferences; // 0xC0
		::System::Object* initialValue; // 0xC8
		::System::Object* currentlySelectedObject; // 0xD0
		::RuntimeInspectorNamespace::ObjectReferencePickerItem* currentlySelectedItem; // 0xD8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Show(ReferenceCallback* arg, ReferenceCallback* arg, NameGetter* arg, NameGetter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Object* arg, ::System::Boolean arg, ::System::String* str, ::UnityEngine::Canvas* arg)
		{
			((::System::Void(*)(ReferenceCallback*, ReferenceCallback*, NameGetter*, NameGetter*, ::Il2CppArray<::System::Object*>*, ::System::Object*, ::System::Boolean, ::System::String*, ::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_SHOW_OFFSET))(arg, arg, arg, arg, arg, arg, arg, str, arg, nullptr);
		}

		::RuntimeInspectorNamespace::RecycledListItem* RuntimeInspectorNamespace.IListViewAdapter.CreateItem(::UnityEngine::Transform* arg)
		{
			return (return (::RuntimeInspectorNamespace::RecycledListItem*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.CREATEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyInstance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_DESTROYINSTANCE_OFFSET))(nullptr);
		}

		::System::Void RuntimeInspectorNamespace.IListViewAdapter.OnItemClicked(::RuntimeInspectorNamespace::RecycledListItem* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RecycledListItem*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.ONITEMCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSkin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_REFRESHSKIN_OFFSET))(nullptr);
		}

		::System::Int32 _GenerateReferenceItems_b__38_0(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER__GENERATEREFERENCEITEMS_B__38_0_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_CANCEL_OFFSET))(nullptr);
		}

		::System::Void RuntimeInspectorNamespace.IListViewAdapter.SetItemContent(::RuntimeInspectorNamespace::RecycledListItem* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RecycledListItem*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.SETITEMCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnSearchTextChanged(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_ONSEARCHTEXTCHANGED_OFFSET))(str, nullptr);
		}

		::System::Void _Awake_b__33_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER__AWAKE_B__33_0_OFFSET))(nullptr);
		}

		::System::Void GenerateReferenceItems(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_GENERATEREFERENCEITEMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_CLOSE_OFFSET))(nullptr);
		}

		::System::Int32 RuntimeInspectorNamespace.IListViewAdapter.get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.GET_COUNT_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::ObjectReferencePicker* get_Instance()
		{
			return (return (::RuntimeInspectorNamespace::ObjectReferencePicker*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Single RuntimeInspectorNamespace.IListViewAdapter.get_ItemHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKER_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.GET_ITEMHEIGHT_OFFSET))(nullptr);
		}

	};
}

