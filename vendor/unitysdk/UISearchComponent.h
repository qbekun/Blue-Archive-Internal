#pragma once
#include "unitysdk.h"

class UIInput;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace Cysharp::Threading::Tasks { class UniTaskVoid; }

#define UISEARCHCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x26B1480)
#define UISEARCHCOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x26B1830)
#define UISEARCHCOMPONENT_ADD_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x26B19C0)
#define UISEARCHCOMPONENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x26B0520)
#define UISEARCHCOMPONENT_ADD_ONSEARCH_OFFSET UNITYSDK_OFFSET(0x26B0F70)
#define UISEARCHCOMPONENT_ONSEARCHCONFIRM_OFFSET UNITYSDK_OFFSET(0x26B1A60)
#define UISEARCHCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B1B30)
#define UISEARCHCOMPONENT__AWAKE_B__23_0_OFFSET UNITYSDK_OFFSET(0x26B1B90)
#define UISEARCHCOMPONENT_ONSEARCHWITHINTERVAL_OFFSET UNITYSDK_OFFSET(0x26B1CE0)
#define UISEARCHCOMPONENT__AWAKE_B__23_1_OFFSET UNITYSDK_OFFSET(0x26B1EF0)
#define UISEARCHCOMPONENT_ONSELECT_OFFSET UNITYSDK_OFFSET(0x26B1F00)
#define UISEARCHCOMPONENT_ONCHANGETEXT_OFFSET UNITYSDK_OFFSET(0x26B1BC0)
#define UISEARCHCOMPONENT_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x26B1A90)
#define UISEARCHCOMPONENT_SEARCHASYNC_OFFSET UNITYSDK_OFFSET(0x26B1E20)
#define UISEARCHCOMPONENT_REMOVE_ONSELECTINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x26B2060)
#define UISEARCHCOMPONENT_REMOVE_ONSEARCH_OFFSET UNITYSDK_OFFSET(0x26B0290)
#define UISEARCHCOMPONENT_ADD_ONSELECTINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x26B2100)
#define UISEARCHCOMPONENT_GET_SEARCHTEXT_OFFSET UNITYSDK_OFFSET(0x26AFFC0)
#define UISEARCHCOMPONENT_INVOKEONSEARCH_OFFSET UNITYSDK_OFFSET(0x26B2000)
#define UISEARCHCOMPONENT_REMOVE_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x26B21A0)
#define UISEARCHCOMPONENT_ADD_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x26B1010)
#define UISEARCHCOMPONENT_REMOVE_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x26B0330)

	inline static constexpr unsigned int UISearchComponent_TypeDefinitionIndex = 6897;

	class UISearchComponent : public Il2CppObject
	{
	public:
		Il2CppObject* OnSearch; // 0x18
		::System::Action* OnClear; // 0x20
		::System::Action* OnConfirm; // 0x28
		Il2CppObject* OnSelectInputField; // 0x30
		UIInput* searchInput; // 0x38
		MXButton* confirmButton; // 0x40
		MXButton* clearButton; // 0x48
		::UnityEngine::GameObject* placeHolder; // 0x50
		::System::Threading::CancellationTokenSource* _updateCancelToken; // 0x58
		::System::Boolean _useTextUpdateOptimize; // 0x60
		::System::Single _updateInterval; // 0x64
		::System::String* _previousText; // 0x68

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void add_OnConfirm(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_ADD_ONCONFIRM_OFFSET))(arg, nullptr);
		}

		::System::Void Clear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnSearch(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_ADD_ONSEARCH_OFFSET))(arg, nullptr);
		}

		::System::Void OnSearchConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_ONSEARCHCONFIRM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__23_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT__AWAKE_B__23_0_OFFSET))(nullptr);
		}

		::System::Void OnSearchWithInterval(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_ONSEARCHWITHINTERVAL_OFFSET))(str, nullptr);
		}

		::System::Void _Awake_b__23_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT__AWAKE_B__23_1_OFFSET))(nullptr);
		}

		::System::Void OnSelect(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_ONSELECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnChangeText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_ONCHANGETEXT_OFFSET))(str, nullptr);
		}

		::System::Void OnSubmit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_ONSUBMIT_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* SearchAsync(::System::Threading::CancellationToken* arg, ::System::String* str)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid*(*)(::System::Threading::CancellationToken*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_SEARCHASYNC_OFFSET))(arg, str, nullptr);
		}

		::System::Void remove_OnSelectInputField(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_REMOVE_ONSELECTINPUTFIELD_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnSearch(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_REMOVE_ONSEARCH_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnSelectInputField(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_ADD_ONSELECTINPUTFIELD_OFFSET))(arg, nullptr);
		}

		::System::String* get_SearchText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_GET_SEARCHTEXT_OFFSET))(nullptr);
		}

		::System::Void InvokeOnSearch(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_INVOKEONSEARCH_OFFSET))(str, nullptr);
		}

		::System::Void remove_OnConfirm(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_REMOVE_ONCONFIRM_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnClear(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_ADD_ONCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnClear(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISEARCHCOMPONENT_REMOVE_ONCLEAR_OFFSET))(arg, nullptr);
		}

	};

