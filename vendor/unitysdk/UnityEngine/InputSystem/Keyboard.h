#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class AnyKeyControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem { class Keyboard; }
namespace UnityEngine::InputSystem::Controls { class KeyControl; }
namespace UnityEngine::InputSystem::LowLevel { class IMECompositionString; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem { class Key; }

#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_IMESELECTED_OFFSET UNITYSDK_OFFSET(0x9EA84B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_MINUSKEY_OFFSET UNITYSDK_OFFSET(0x9EA84C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F8KEY_OFFSET UNITYSDK_OFFSET(0x9EA8550)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DOWNARROWKEY_OFFSET UNITYSDK_OFFSET(0x9EA8560)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ZKEY_OFFSET UNITYSDK_OFFSET(0x9EA8570)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM5KEY_OFFSET UNITYSDK_OFFSET(0x9EA8580)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9EA8590)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DKEY_OFFSET UNITYSDK_OFFSET(0x9EA8620)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTALTKEY_OFFSET UNITYSDK_OFFSET(0x9EA8630)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SETIMEENABLED_OFFSET UNITYSDK_OFFSET(0x9EA8640)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OKEY_OFFSET UNITYSDK_OFFSET(0x9EA86B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD8KEY_OFFSET UNITYSDK_OFFSET(0x9EA86C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTWINDOWSKEY_OFFSET UNITYSDK_OFFSET(0x9EA86D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ADD_ONIMECOMPOSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x9EA86E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_JKEY_OFFSET UNITYSDK_OFFSET(0x9EA87C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F9KEY_OFFSET UNITYSDK_OFFSET(0x9EA87D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTAPPLEKEY_OFFSET UNITYSDK_OFFSET(0x9EA87E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTARROWKEY_OFFSET UNITYSDK_OFFSET(0x9EA87F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTCOMMANDKEY_OFFSET UNITYSDK_OFFSET(0x9EA8800)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x9EA8810)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SKEY_OFFSET UNITYSDK_OFFSET(0x9EA8830)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_IMESELECTED_OFFSET UNITYSDK_OFFSET(0x9EA8840)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT5KEY_OFFSET UNITYSDK_OFFSET(0x9EA8860)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_HOMEKEY_OFFSET UNITYSDK_OFFSET(0x9EA8870)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMLOCKKEY_OFFSET UNITYSDK_OFFSET(0x9EA8880)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CKEY_OFFSET UNITYSDK_OFFSET(0x9EA8890)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_ALTKEY_OFFSET UNITYSDK_OFFSET(0x9EA88A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_REMOVE_ONIMECOMPOSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x9EA88C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CONTEXTMENUKEY_OFFSET UNITYSDK_OFFSET(0x9EA8910)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_EKEY_OFFSET UNITYSDK_OFFSET(0x9EA8920)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_XKEY_OFFSET UNITYSDK_OFFSET(0x9EA8930)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9EA8940)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONIMECOMPOSITIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9EAB3A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F4KEY_OFFSET UNITYSDK_OFFSET(0x9EAB450)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTSHIFTKEY_OFFSET UNITYSDK_OFFSET(0x9EAB460)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD9KEY_OFFSET UNITYSDK_OFFSET(0x9EAB470)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTMETAKEY_OFFSET UNITYSDK_OFFSET(0x9EAB480)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_COMMAKEY_OFFSET UNITYSDK_OFFSET(0x9EAB490)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SHIFTKEY_OFFSET UNITYSDK_OFFSET(0x9EAB4A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ENDKEY_OFFSET UNITYSDK_OFFSET(0x9EAB4B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F11KEY_OFFSET UNITYSDK_OFFSET(0x9EAB4C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKSLASHKEY_OFFSET UNITYSDK_OFFSET(0x9EAB4D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SETIMECURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x9EAB4E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F7KEY_OFFSET UNITYSDK_OFFSET(0x9EAB540)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LKEY_OFFSET UNITYSDK_OFFSET(0x9EAB550)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NKEY_OFFSET UNITYSDK_OFFSET(0x9EAB560)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ALLKEYS_OFFSET UNITYSDK_OFFSET(0x9EAB570)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ADD_ONTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x9EAB5C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD0KEY_OFFSET UNITYSDK_OFFSET(0x9EAB6A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAGEUPKEY_OFFSET UNITYSDK_OFFSET(0x9EAB6B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ENTERKEY_OFFSET UNITYSDK_OFFSET(0x9EAB6C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9EA84D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT9KEY_OFFSET UNITYSDK_OFFSET(0x9EAB6D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAGEDOWNKEY_OFFSET UNITYSDK_OFFSET(0x9EAB6E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_FKEY_OFFSET UNITYSDK_OFFSET(0x9EAB6F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ANYKEY_OFFSET UNITYSDK_OFFSET(0x9EAB700)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9EAB710)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM1KEY_OFFSET UNITYSDK_OFFSET(0x9EAB770)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KKEY_OFFSET UNITYSDK_OFFSET(0x9EAB780)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT7KEY_OFFSET UNITYSDK_OFFSET(0x9EAB790)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTARROWKEY_OFFSET UNITYSDK_OFFSET(0x9EAB7A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_REMOVE_ONTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x9EAB7B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x9EAB800)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x9EAB810)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_ANYKEY_OFFSET UNITYSDK_OFFSET(0x9EAB820)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_QKEY_OFFSET UNITYSDK_OFFSET(0x9EAB840)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTCOMMANDKEY_OFFSET UNITYSDK_OFFSET(0x9EAB850)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTAPPLEKEY_OFFSET UNITYSDK_OFFSET(0x9EAB860)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADMINUSKEY_OFFSET UNITYSDK_OFFSET(0x9EAB870)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM4KEY_OFFSET UNITYSDK_OFFSET(0x9EAB880)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_WKEY_OFFSET UNITYSDK_OFFSET(0x9EAB890)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTCTRLKEY_OFFSET UNITYSDK_OFFSET(0x9EAB8A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM2KEY_OFFSET UNITYSDK_OFFSET(0x9EAB8B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT3KEY_OFFSET UNITYSDK_OFFSET(0x9EAB8C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ESCAPEKEY_OFFSET UNITYSDK_OFFSET(0x9EAB8D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT0KEY_OFFSET UNITYSDK_OFFSET(0x9EAB8E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F2KEY_OFFSET UNITYSDK_OFFSET(0x9EAB8F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM3KEY_OFFSET UNITYSDK_OFFSET(0x9EAB900)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PRINTSCREENKEY_OFFSET UNITYSDK_OFFSET(0x9EAB910)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADENTERKEY_OFFSET UNITYSDK_OFFSET(0x9EAB920)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD2KEY_OFFSET UNITYSDK_OFFSET(0x9EAB930)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_AKEY_OFFSET UNITYSDK_OFFSET(0x9EAB940)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADDIVIDEKEY_OFFSET UNITYSDK_OFFSET(0x9EAB950)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTMETAKEY_OFFSET UNITYSDK_OFFSET(0x9EAB960)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTBRACKETKEY_OFFSET UNITYSDK_OFFSET(0x9EAB970)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKQUOTEKEY_OFFSET UNITYSDK_OFFSET(0x9EAB980)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKSPACEKEY_OFFSET UNITYSDK_OFFSET(0x9EAB990)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PKEY_OFFSET UNITYSDK_OFFSET(0x9EAB9A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT8KEY_OFFSET UNITYSDK_OFFSET(0x9EAB9B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD1KEY_OFFSET UNITYSDK_OFFSET(0x9EAB9C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_VKEY_OFFSET UNITYSDK_OFFSET(0x9EAB9D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_INSERTKEY_OFFSET UNITYSDK_OFFSET(0x9EAB9E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD3KEY_OFFSET UNITYSDK_OFFSET(0x9EAB9F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_QUOTEKEY_OFFSET UNITYSDK_OFFSET(0x9EABA00)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD4KEY_OFFSET UNITYSDK_OFFSET(0x9EABA10)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTWINDOWSKEY_OFFSET UNITYSDK_OFFSET(0x9EABA20)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_EQUALSKEY_OFFSET UNITYSDK_OFFSET(0x9EABA30)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTCTRLKEY_OFFSET UNITYSDK_OFFSET(0x9EABA40)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT1KEY_OFFSET UNITYSDK_OFFSET(0x9EABA50)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CTRLKEY_OFFSET UNITYSDK_OFFSET(0x9EABA60)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F1KEY_OFFSET UNITYSDK_OFFSET(0x9EABA70)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SLASHKEY_OFFSET UNITYSDK_OFFSET(0x9EABA80)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_HKEY_OFFSET UNITYSDK_OFFSET(0x9EABA90)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_KEYS_OFFSET UNITYSDK_OFFSET(0x9EABAA0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_KEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x9EABAC0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT2KEY_OFFSET UNITYSDK_OFFSET(0x9EABAE0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_FINDKEYONCURRENTKEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x9EABAF0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTALTKEY_OFFSET UNITYSDK_OFFSET(0x9EABBF0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADEQUALSKEY_OFFSET UNITYSDK_OFFSET(0x9EABC00)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTBRACKETKEY_OFFSET UNITYSDK_OFFSET(0x9EABC10)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RKEY_OFFSET UNITYSDK_OFFSET(0x9EABC20)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EABC30)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADMULTIPLYKEY_OFFSET UNITYSDK_OFFSET(0x9EABC40)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD6KEY_OFFSET UNITYSDK_OFFSET(0x9EABC50)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SPACEKEY_OFFSET UNITYSDK_OFFSET(0x9EABC60)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_IKEY_OFFSET UNITYSDK_OFFSET(0x9EABC70)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CAPSLOCKKEY_OFFSET UNITYSDK_OFFSET(0x9EABC80)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PERIODKEY_OFFSET UNITYSDK_OFFSET(0x9EABC90)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F5KEY_OFFSET UNITYSDK_OFFSET(0x9EABCA0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EABCB0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F10KEY_OFFSET UNITYSDK_OFFSET(0x9EABCF0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT4KEY_OFFSET UNITYSDK_OFFSET(0x9EABD00)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SEMICOLONKEY_OFFSET UNITYSDK_OFFSET(0x9EABD10)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTSHIFTKEY_OFFSET UNITYSDK_OFFSET(0x9EABD20)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_TABKEY_OFFSET UNITYSDK_OFFSET(0x9EABD30)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_REFRESHCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x9EABD40)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_YKEY_OFFSET UNITYSDK_OFFSET(0x9EABE00)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BKEY_OFFSET UNITYSDK_OFFSET(0x9EABE10)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_MKEY_OFFSET UNITYSDK_OFFSET(0x9EABE20)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAUSEKEY_OFFSET UNITYSDK_OFFSET(0x9EABE30)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EABE40)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F12KEY_OFFSET UNITYSDK_OFFSET(0x9EABE90)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADPERIODKEY_OFFSET UNITYSDK_OFFSET(0x9EABEA0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT6KEY_OFFSET UNITYSDK_OFFSET(0x9EABEB0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_TKEY_OFFSET UNITYSDK_OFFSET(0x9EABEC0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_UKEY_OFFSET UNITYSDK_OFFSET(0x9EABED0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_UPARROWKEY_OFFSET UNITYSDK_OFFSET(0x9EABEE0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x9EABEF0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ALTKEY_OFFSET UNITYSDK_OFFSET(0x9EABF70)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_GKEY_OFFSET UNITYSDK_OFFSET(0x9EABF80)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F6KEY_OFFSET UNITYSDK_OFFSET(0x9EABF90)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_CTRLKEY_OFFSET UNITYSDK_OFFSET(0x9EABFA0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_SHIFTKEY_OFFSET UNITYSDK_OFFSET(0x9EABFC0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F3KEY_OFFSET UNITYSDK_OFFSET(0x9EABFE0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD5KEY_OFFSET UNITYSDK_OFFSET(0x9EABFF0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SCROLLLOCKKEY_OFFSET UNITYSDK_OFFSET(0x9EAC000)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADPLUSKEY_OFFSET UNITYSDK_OFFSET(0x9EAC010)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD7KEY_OFFSET UNITYSDK_OFFSET(0x9EAC020)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Keyboard_TypeDefinitionIndex = 28491;

	class Keyboard : public Il2CppObject
	{
	public:
		::System::Int32 KeyCount; // 0x0
		::UnityEngine::InputSystem::Controls::AnyKeyControl* _anyKey_k__BackingField; // 0x170
		::UnityEngine::InputSystem::Controls::ButtonControl* _shiftKey_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::ButtonControl* _ctrlKey_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::ButtonControl* _altKey_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::ButtonControl* _imeSelected_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Keyboard* _current_k__BackingField; // 0x0
		Il2CppObject* m_TextInputListeners; // 0x198
		::System::String* m_KeyboardLayoutName; // 0x1B0
		::Il2CppArray<::System::Object*>* m_Keys; // 0x1B8
		Il2CppObject* m_ImeCompositionListeners; // 0x1C0

		::UnityEngine::InputSystem::Controls::ButtonControl* get_imeSelected()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_IMESELECTED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_minusKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_MINUSKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f8Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F8KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_downArrowKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DOWNARROWKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_zKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ZKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem5Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM5KEY_OFFSET))(nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONREMOVED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_dKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightAltKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTALTKEY_OFFSET))(nullptr);
		}

		::System::Void SetIMEEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SETIMEENABLED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad8Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD8KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftWindowsKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTWINDOWSKEY_OFFSET))(nullptr);
		}

		::System::Void add_onIMECompositionChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ADD_ONIMECOMPOSITIONCHANGE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_jKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_JKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f9Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F9KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftAppleKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTAPPLEKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftArrowKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTARROWKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightCommandKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTCOMMANDKEY_OFFSET))(nullptr);
		}

		::System::String* get_keyboardLayout()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KEYBOARDLAYOUT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_sKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SKEY_OFFSET))(nullptr);
		}

		::System::Void set_imeSelected(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_IMESELECTED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit5Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT5KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_homeKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_HOMEKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numLockKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMLOCKKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_cKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CKEY_OFFSET))(nullptr);
		}

		::System::Void set_altKey(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_ALTKEY_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onIMECompositionChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_REMOVE_ONIMECOMPOSITIONCHANGE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_contextMenuKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CONTEXTMENUKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_eKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_EKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_xKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_XKEY_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void OnIMECompositionChanged(::UnityEngine::InputSystem::LowLevel::IMECompositionString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::IMECompositionString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONIMECOMPOSITIONCHANGED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f4Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F4KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftShiftKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTSHIFTKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad9Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD9KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightMetaKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTMETAKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_commaKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_COMMAKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_shiftKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SHIFTKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_endKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ENDKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f11Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F11KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_backslashKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKSLASHKEY_OFFSET))(nullptr);
		}

		::System::Void SetIMECursorPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SETIMECURSORPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f7Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F7KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_lKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_nKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NKEY_OFFSET))(nullptr);
		}

		Il2CppObject* get_allKeys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ALLKEYS_OFFSET))(nullptr);
		}

		::System::Void add_onTextInput(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ADD_ONTEXTINPUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad0Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD0KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_pageUpKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAGEUPKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_enterKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ENTERKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_Item(::UnityEngine::InputSystem::Key* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Key*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit9Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT9KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_pageDownKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAGEDOWNKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_fKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_FKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AnyKeyControl* get_anyKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::AnyKeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ANYKEY_OFFSET))(nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_MAKECURRENT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem1Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM1KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_kKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit7Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT7KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightArrowKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTARROWKEY_OFFSET))(nullptr);
		}

		::System::Void remove_onTextInput(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_REMOVE_ONTEXTINPUT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_keys()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KEYS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_deleteKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DELETEKEY_OFFSET))(nullptr);
		}

		::System::Void set_anyKey(::UnityEngine::InputSystem::Controls::AnyKeyControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AnyKeyControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_ANYKEY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_qKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_QKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftCommandKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTCOMMANDKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightAppleKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTAPPLEKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadMinusKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADMINUSKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem4Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM4KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_wKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_WKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftCtrlKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTCTRLKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem2Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM2KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit3Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT3KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_escapeKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ESCAPEKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit0Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT0KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f2Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F2KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem3Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM3KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_printScreenKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PRINTSCREENKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadEnterKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADENTERKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad2Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD2KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_aKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_AKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadDivideKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADDIVIDEKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftMetaKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTMETAKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightBracketKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTBRACKETKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_backquoteKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKQUOTEKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_backspaceKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKSPACEKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_pKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit8Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT8KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad1Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD1KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_vKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_VKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_insertKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_INSERTKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad3Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD3KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_quoteKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_QUOTEKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad4Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD4KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightWindowsKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTWINDOWSKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_equalsKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_EQUALSKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightCtrlKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTCTRLKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit1Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT1KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_ctrlKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CTRLKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f1Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F1KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_slashKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SLASHKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_hKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_HKEY_OFFSET))(nullptr);
		}

		::System::Void set_keys(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_KEYS_OFFSET))(arg, nullptr);
		}

		::System::Void set_keyboardLayout(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_KEYBOARDLAYOUT_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit2Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT2KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* FindKeyOnCurrentKeyboardLayout(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_FINDKEYONCURRENTKEYBOARDLAYOUT_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftAltKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTALTKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadEqualsKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADEQUALSKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftBracketKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTBRACKETKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadMultiplyKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADMULTIPLYKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad6Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD6KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_spaceKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SPACEKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_iKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_IKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_capsLockKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CAPSLOCKKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_periodKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PERIODKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f5Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F5KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Keyboard* get_current()
		{
			return (return (::UnityEngine::InputSystem::Keyboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CURRENT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f10Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F10KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit4Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT4KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_semicolonKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SEMICOLONKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightShiftKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTSHIFTKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_tabKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_TABKEY_OFFSET))(nullptr);
		}

		::System::Void RefreshConfiguration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_REFRESHCONFIGURATION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_yKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_YKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_bKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_mKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_MKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_pauseKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAUSEKEY_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::Keyboard* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Keyboard*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f12Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F12KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadPeriodKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADPERIODKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit6Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT6KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_tKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_TKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_uKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_UKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_upArrowKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_UPARROWKEY_OFFSET))(nullptr);
		}

		::System::Void OnTextInput(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONTEXTINPUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_altKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ALTKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_gKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_GKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f6Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F6KEY_OFFSET))(nullptr);
		}

		::System::Void set_ctrlKey(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_CTRLKEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_shiftKey(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_SHIFTKEY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f3Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F3KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad5Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD5KEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_scrollLockKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SCROLLLOCKKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadPlusKey()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADPLUSKEY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad7Key()
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD7KEY_OFFSET))(nullptr);
		}

	};
}

