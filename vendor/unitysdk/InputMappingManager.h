#pragma once
#include "unitysdk.h"

namespace UnityEngine { class KeyCode; }
namespace MX::Controller { class InputModeType; }
class PCKeyMappingSO;
class MXUIKeyShortcut;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace FlatData { class DisplayGroupType; }
class UIBase;
class MXToggle;
class MXUIKeyMapping;
class PopupData;

#define INPUTMAPPINGMANAGER_GET_INPUTMODETYPE_OFFSET UNITYSDK_OFFSET(0x20ED460)
#define INPUTMAPPINGMANAGER_SET_INPUTMODETYPE_OFFSET UNITYSDK_OFFSET(0x20ED470)
#define INPUTMAPPINGMANAGER_GET_VISIBLEICONBYOPTION_OFFSET UNITYSDK_OFFSET(0x20ED490)
#define INPUTMAPPINGMANAGER_SET_VISIBLEICONBYOPTION_OFFSET UNITYSDK_OFFSET(0x20ED4A0)
#define INPUTMAPPINGMANAGER_GET_ISYOSTARUIACTIVE_OFFSET UNITYSDK_OFFSET(0x20ED4C0)
#define INPUTMAPPINGMANAGER_SET_ISYOSTARUIACTIVE_OFFSET UNITYSDK_OFFSET(0x20ED4D0)
#define INPUTMAPPINGMANAGER_KEYMAPPINGCORRESPONDEDTYPES_OFFSET UNITYSDK_OFFSET(0x20ED530)
#define INPUTMAPPINGMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x20ED7C0)
#define INPUTMAPPINGMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x20ED7D0)
#define INPUTMAPPINGMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x20EDD00)
#define INPUTMAPPINGMANAGER_GETPCKEYMAPPINGSO_OFFSET UNITYSDK_OFFSET(0x20EDE50)
#define INPUTMAPPINGMANAGER_GETPCKEYMAPPINGSTRUCT_OFFSET UNITYSDK_OFFSET(0x20EDF10)
#define INPUTMAPPINGMANAGER_GETICON_OFFSET UNITYSDK_OFFSET(0x20EDFD0)
#define INPUTMAPPINGMANAGER_GETMOVEKEY_OFFSET UNITYSDK_OFFSET(0x20EE0D0)
#define INPUTMAPPINGMANAGER_UPDATEINPUTMODETYPE_OFFSET UNITYSDK_OFFSET(0x20ED810)
#define INPUTMAPPINGMANAGER_UPDATECHANGESCREENMODE_OFFSET UNITYSDK_OFFSET(0x20EDA00)
#define INPUTMAPPINGMANAGER_SETDEVICE_OFFSET UNITYSDK_OFFSET(0x20EE240)
#define INPUTMAPPINGMANAGER_SETACTIVECURSOR_OFFSET UNITYSDK_OFFSET(0x20EE5E0)
#define INPUTMAPPINGMANAGER_GETREMOVEKEYWORDS_OFFSET UNITYSDK_OFFSET(0x20EE610)
#define INPUTMAPPINGMANAGER_ISINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x20EE500)
#define INPUTMAPPINGMANAGER_ONENDOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x20EE7E0)
#define INPUTMAPPINGMANAGER_HAVEKEYMAPPINGICONINTUTORIALTOGGLE_OFFSET UNITYSDK_OFFSET(0x20EF820)
#define INPUTMAPPINGMANAGER_HAVEKEYMAPPINGICONINTUTORIALBUTTON_OFFSET UNITYSDK_OFFSET(0x20EF880)
#define INPUTMAPPINGMANAGER_GETTUTORIALKEYMAPPING_OFFSET UNITYSDK_OFFSET(0x20EFB20)
#define INPUTMAPPINGMANAGER_GETTUTORIALKEYMAPPING_OFFSET UNITYSDK_OFFSET(0x20EFB40)
#define INPUTMAPPINGMANAGER_SETKEYMAPPINGPOPUP_OFFSET UNITYSDK_OFFSET(0x20EE880)
#define INPUTMAPPINGMANAGER_ISMOVEKEYUP_OFFSET UNITYSDK_OFFSET(0x20F0110)
#define INPUTMAPPINGMANAGER_GETLASTDIRKEYS_OFFSET UNITYSDK_OFFSET(0x20F0270)
#define INPUTMAPPINGMANAGER_RESOLVEAXISLASTINPUTWIN_OFFSET UNITYSDK_OFFSET(0x20F0320)
#define INPUTMAPPINGMANAGER_RETRIEVEKEYINPUTDIRECTION_OFFSET UNITYSDK_OFFSET(0x20F03E0)
#define INPUTMAPPINGMANAGER_RETRIEVEKEYINPUTDIRECTION_OFFSET UNITYSDK_OFFSET(0x20F0860)
#define INPUTMAPPINGMANAGER_RETRIEVEKEYINPUTDIRECTION_OFFSET UNITYSDK_OFFSET(0x20F0960)
#define INPUTMAPPINGMANAGER_RETRIEVEKEYINPUTDIRECTION_BATTLE_OFFSET UNITYSDK_OFFSET(0x20F0BD0)
#define INPUTMAPPINGMANAGER_SETMOVEKEYS_OFFSET UNITYSDK_OFFSET(0x20F1130)
#define INPUTMAPPINGMANAGER_ISPRESSEDMOVEKEYSINBATTLE_OFFSET UNITYSDK_OFFSET(0x20F1900)
#define INPUTMAPPINGMANAGER_SETCANCELABLESKILLCARD_TUTORIAL_OFFSET UNITYSDK_OFFSET(0x20F1A80)
#define INPUTMAPPINGMANAGER_CACHEYOSTARBGPANEL_OFFSET UNITYSDK_OFFSET(0x20F1B30)
#define INPUTMAPPINGMANAGER_CHECKBLOCKEDKEYMAPPING_OFFSET UNITYSDK_OFFSET(0x20F1DA0)
#define INPUTMAPPINGMANAGER_SETYOSTARUIACTIVE_OFFSET UNITYSDK_OFFSET(0x20F1E10)
#define INPUTMAPPINGMANAGER_SETBLOCKKEYMAPPING_OFFSET UNITYSDK_OFFSET(0x20F1EE0)
#define INPUTMAPPINGMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20F1EF0)
#define INPUTMAPPINGMANAGER__GETPCKEYMAPPINGSO_B__35_0_OFFSET UNITYSDK_OFFSET(0x20F2640)
#define INPUTMAPPINGMANAGER__SETKEYMAPPINGPOPUP_G__CHECKNAME|50_0_OFFSET UNITYSDK_OFFSET(0x20EFE30)
#define INPUTMAPPINGMANAGER__SETKEYMAPPINGPOPUP_G__CHECKTARGET|50_1_OFFSET UNITYSDK_OFFSET(0x20EFCC0)
#define INPUTMAPPINGMANAGER__SETKEYMAPPINGPOPUP_G__ADDTABEXCEPTION|50_2_OFFSET UNITYSDK_OFFSET(0x20F0000)
#define INPUTMAPPINGMANAGER__RETRIEVEKEYINPUTDIRECTION_BATTLE_B__57_0_OFFSET UNITYSDK_OFFSET(0x20F2660)

	inline static constexpr unsigned int InputMappingManager_TypeDefinitionIndex = 3815;

	class InputMappingManager : public ::ToyWebViewShared::Messages::NotifyPaintView
	{
	public:
		::UnityEngine::KeyCode* ChangeScreenModeKey1; // 0x20
		::Il2CppArray<::System::Object*>* ChangeScreenModeKey2; // 0x28
		Il2CppObject* OnChangedInputModeType; // 0x30
		::MX::Controller::InputModeType* _inputModeType; // 0x38
		Il2CppObject* _mappingAddComponent; // 0x40
		Il2CppObject* _exceptCheckUIs; // 0x48
		Il2CppObject* OnChangedKeyCode; // 0x50
		Il2CppObject* _moveKeys; // 0x58
		Il2CppObject* _moveKeysInBattle; // 0x60
		Il2CppObject* _lastDirKeys; // 0x68
		::Il2CppArray<::System::Object*>* _lastDirKeysInBattle; // 0x70
		Il2CppObject* OnVisibleIconByOption; // 0x78
		::System::Action* OnUpdate; // 0x80
		PCKeyMappingSO* PCKeyMappingSO; // 0x88
		::System::Boolean _visibleIconByOption; // 0x90
		MXUIKeyShortcut* MXUIKeyShortcut; // 0x98
		Il2CppObject* removeKeyWords; // 0xA0
		::UnityEngine::GameObject* yostarBgPanel; // 0xA8
		::System::Action* OnYostarUIActive; // 0xB0
		::System::Action* OnYostarUIInactive; // 0xB8
		::System::Boolean _isYostarUIActive; // 0xC0
		::System::Boolean IsBlockingKeyMappingByUGUI; // 0xC1

		::MX::Controller::InputModeType* get_InputModeType()
		{
			return ((::MX::Controller::InputModeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_GET_INPUTMODETYPE_OFFSET))(nullptr);
		}

		::System::Void set_InputModeType(::MX::Controller::InputModeType* arg)
		{
			((::System::Void(*)(::MX::Controller::InputModeType*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_SET_INPUTMODETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_VisibleIconByOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_GET_VISIBLEICONBYOPTION_OFFSET))(nullptr);
		}

		::System::Void set_VisibleIconByOption(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_SET_VISIBLEICONBYOPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsYostarUIActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_GET_ISYOSTARUIACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_IsYostarUIActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_SET_ISYOSTARUIACTIVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* KeyMappingCorrespondedTypes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_KEYMAPPINGCORRESPONDEDTYPES_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void GetPCKeyMappingSO()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_GETPCKEYMAPPINGSO_OFFSET))(nullptr);
		}

		::System::Boolean GetPCKeyMappingStruct(::System::String* str, KeyMappingStruct&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, KeyMappingStruct&*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_GETPCKEYMAPPINGSTRUCT_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetIcon(::UnityEngine::Transform* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_GETICON_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::KeyCode* GetMoveKey(::FlatData::DisplayGroupType* arg, ::System::Int32 arg2)
		{
			return ((::UnityEngine::KeyCode*(*)(::FlatData::DisplayGroupType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_GETMOVEKEY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateInputModeType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_UPDATEINPUTMODETYPE_OFFSET))(nullptr);
		}

		::System::Void UpdateChangeScreenMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_UPDATECHANGESCREENMODE_OFFSET))(nullptr);
		}

		::System::Void SetDevice(::MX::Controller::InputModeType* arg)
		{
			((::System::Void(*)(::MX::Controller::InputModeType*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_SETDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveCursor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_SETACTIVECURSOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRemoveKeyWords()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_GETREMOVEKEYWORDS_OFFSET))(nullptr);
		}

		::System::Boolean IsInputType(::MX::Controller::InputModeType* arg)
		{
			return ((::System::Boolean(*)(::MX::Controller::InputModeType*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_ISINPUTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndOpenAnimation(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_ONENDOPENANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HaveKeyMappingIconInTutorialToggle(MXToggle* arg)
		{
			return ((::System::Boolean(*)(MXToggle*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_HAVEKEYMAPPINGICONINTUTORIALTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HaveKeyMappingIconInTutorialButton(::UnityEngine::GameObject* arg, ::System::Int32 arg2, ::UnityEngine::GameObject* arg3)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_HAVEKEYMAPPINGICONINTUTORIALBUTTON_OFFSET))(arg, arg2, arg3, nullptr);
		}

		MXUIKeyMapping* GetTutorialKeyMapping(::UnityEngine::GameObject* arg)
		{
			return ((MXUIKeyMapping*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_GETTUTORIALKEYMAPPING_OFFSET))(arg, nullptr);
		}

		MXUIKeyMapping* GetTutorialKeyMapping(::UnityEngine::GameObject* arg, MXUIKeyMapping* arg2, ::System::Boolean arg3)
		{
			return ((MXUIKeyMapping*(*)(::UnityEngine::GameObject*, MXUIKeyMapping*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_GETTUTORIALKEYMAPPING_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetKeymappingPopup(UIBase* arg, MXUIKeyMapping&* arg2)
		{
			((::System::Void(*)(UIBase*, MXUIKeyMapping&*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_SETKEYMAPPINGPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMovekeyUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_ISMOVEKEYUP_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetLastDirKeys(::FlatData::DisplayGroupType* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::FlatData::DisplayGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_GETLASTDIRKEYS_OFFSET))(arg, nullptr);
		}

		::System::Single ResolveAxisLastInputWin(::UnityEngine::KeyCode* arg, ::UnityEngine::KeyCode* arg2, ::System::Single arg3, ::System::Single arg4, ::UnityEngine::KeyCode&* arg5, bool&* arg6)
		{
			return ((::System::Single(*)(::UnityEngine::KeyCode*, ::UnityEngine::KeyCode*, ::System::Single, ::System::Single, ::UnityEngine::KeyCode&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_RESOLVEAXISLASTINPUTWIN_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean RetrieveKeyInputDirection(::FlatData::DisplayGroupType* arg, ::UnityEngine::Vector2&* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::DisplayGroupType*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_RETRIEVEKEYINPUTDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean RetrieveKeyInputDirection(::FlatData::DisplayGroupType* arg, ::System::String* str, ::UnityEngine::Vector2&* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::DisplayGroupType*, ::System::String*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_RETRIEVEKEYINPUTDIRECTION_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean RetrieveKeyInputDirection(::FlatData::DisplayGroupType* arg, Il2CppObject* arg2, ::System::Boolean arg3, ::UnityEngine::Vector2&* arg4)
		{
			return ((::System::Boolean(*)(::FlatData::DisplayGroupType*, Il2CppObject*, ::System::Boolean, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_RETRIEVEKEYINPUTDIRECTION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean RetrieveKeyInputDirection_Battle(::UnityEngine::Vector2&* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_RETRIEVEKEYINPUTDIRECTION_BATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetMoveKeys()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_SETMOVEKEYS_OFFSET))(nullptr);
		}

		::System::Boolean IsPressedMoveKeysInBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_ISPRESSEDMOVEKEYSINBATTLE_OFFSET))(nullptr);
		}

		::System::Void SetCancelableSkillCard_Tutorial(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_SETCANCELABLESKILLCARD_TUTORIAL_OFFSET))(arg, nullptr);
		}

		::System::Void CacheYostarBgPanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_CACHEYOSTARBGPANEL_OFFSET))(nullptr);
		}

		::System::Boolean CheckBlockedKeyMapping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_CHECKBLOCKEDKEYMAPPING_OFFSET))(nullptr);
		}

		::System::Void SetYostarUIActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_SETYOSTARUIACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetBlockKeyMapping(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_SETBLOCKKEYMAPPING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _GetPCKeyMappingSO_b__35_0(PCKeyMappingSO* arg)
		{
			((::System::Void(*)(PCKeyMappingSO*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER__GETPCKEYMAPPINGSO_B__35_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetKeymappingPopup_g__CheckName|50_0(::System::String* str, ::UnityEngine::Transform* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER__SETKEYMAPPINGPOPUP_G__CHECKNAME|50_0_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::GameObject* _SetKeymappingPopup_g__CheckTarget|50_1(UIBase* arg, PopupData* arg2, ::UnityEngine::GameObject* arg3)
		{
			return ((::UnityEngine::GameObject*(*)(UIBase*, PopupData*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER__SETKEYMAPPINGPOPUP_G__CHECKTARGET|50_1_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _SetKeymappingPopup_g__AddTabException|50_2(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER__SETKEYMAPPINGPOPUP_G__ADDTABEXCEPTION|50_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean _RetrieveKeyInputDirection_Battle_b__57_0(UIBase* arg)
		{
			return ((::System::Boolean(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTMAPPINGMANAGER__RETRIEVEKEYINPUTDIRECTION_BATTLE_B__57_0_OFFSET))(arg, nullptr);
		}

	};

