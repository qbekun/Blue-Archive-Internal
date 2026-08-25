#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class UIKeyboardShortcut_CustomKeyGroup;
namespace MX::SaveData { class CustomKeySaveData; }
namespace MX::Data { class KeyMappingData; }

#define UIPOPUP_OPTION_CUSTOMKEY_LIST_GET_KEYMAPPINGDATA_OFFSET UNITYSDK_OFFSET(0x2195770)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x21957F0)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2195E30)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2195E60)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_UPDATE_OFFSET UNITYSDK_OFFSET(0x2195EC0)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2196490)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2193F10)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x21966A0)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_SET_OFFSET UNITYSDK_OFFSET(0x2195740)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_CHANGEKEY_OFFSET UNITYSDK_OFFSET(0x2196830)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCLICKSTARTCHANGEKEY_OFFSET UNITYSDK_OFFSET(0x21968C0)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCLICKENDCHANGEKEY_OFFSET UNITYSDK_OFFSET(0x21969D0)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCLICKSTARTCHANGEADDEDKEY_OFFSET UNITYSDK_OFFSET(0x2196A10)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCLICKENDCHANGEADDEDKEY_OFFSET UNITYSDK_OFFSET(0x2196990)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCHANGEKEY_OFFSET UNITYSDK_OFFSET(0x2196960)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCHANGEADDEDKEY_OFFSET UNITYSDK_OFFSET(0x2196AB0)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCLICK_OFFSET UNITYSDK_OFFSET(0x2196AE0)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x2196B60)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_UPDATECHANGEKEY_OFFSET UNITYSDK_OFFSET(0x2195ED0)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x2193AF0)
#define UIPOPUP_OPTION_CUSTOMKEY_LIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x2196BB0)

	inline static constexpr unsigned int UIPopup_Option_CustomKey_List_TypeDefinitionIndex = 4116;

	class UIPopup_Option_CustomKey_List : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* _cannotChangeLabel; // 0x18
		MXButton* _changeKeyButton; // 0x20
		MXButton* _changeAddedKeyButton; // 0x28
		MXButton* _endChangeKeyButton; // 0x30
		MXButton* _endChangeAddedKeyButton; // 0x38
		::UnityEngine::GameObject* _selectChangeKey; // 0x40
		::UnityEngine::GameObject* _selectChangeAddedKey; // 0x48
		UIKeyboardShortcut_CustomKeyGroup* _customKeyGroup; // 0x50
		Il2CppObject* _onClick; // 0x0
		Il2CppObject* _onChange; // 0x8
		::System::Boolean _isChangeModeKey; // 0x58
		::System::Boolean _isChangeModeAddedKey; // 0x59
		::System::Boolean _enableCustomMapping; // 0x5A
		::MX::SaveData::CustomKeySaveData* _customKeySaveData; // 0x60
		Il2CppObject* _keys; // 0x68
		::System::String* _keymappingId; // 0x70
		::MX::Data::KeyMappingData* _keyMappingData; // 0x78

		::MX::Data::KeyMappingData* get_KeyMappingData()
		{
			return ((::MX::Data::KeyMappingData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_GET_KEYMAPPINGDATA_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_INITIALIZE_OFFSET))(str, nullptr);
		}

		::System::Void Set(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_SET_OFFSET))(str, nullptr);
		}

		::System::Void ChangeKey(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_CHANGEKEY_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickStartChangeKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCLICKSTARTCHANGEKEY_OFFSET))(nullptr);
		}

		::System::Void OnClickEndChangeKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCLICKENDCHANGEKEY_OFFSET))(nullptr);
		}

		::System::Void OnClickStartChangeAddedKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCLICKSTARTCHANGEADDEDKEY_OFFSET))(nullptr);
		}

		::System::Void OnClickEndChangeAddedKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCLICKENDCHANGEADDEDKEY_OFFSET))(nullptr);
		}

		::System::Void OnChangeKey(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCHANGEKEY_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeAddedKey(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCHANGEADDEDKEY_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCLICK_OFFSET))(str, nullptr);
		}

		::System::Void OnChange(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_ONCHANGE_OFFSET))(str, arg, nullptr);
		}

		::System::Void UpdateChangeKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_UPDATECHANGEKEY_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_LIST_.CTOR_OFFSET))(nullptr);
		}

	};

