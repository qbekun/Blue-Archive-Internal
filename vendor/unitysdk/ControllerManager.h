#pragma once
#include "unitysdk.h"

namespace MX::Controller { class ControllerKey; }
namespace UnityEngine { class Vector2; }
class ControllerMouse;
class ControllerIconTypeProvider;
namespace MX::Controller { class GameType; }
namespace UnityEngine::InputSystem { class Gamepad; }
class MXBattleTask;
class MXUIKeyMapping;
class UIBase;
namespace UnityEngine::InputSystem { class InputControl; }
class InputType;

#define CONTROLLERMANAGER_SET_ISDPADCURSORMOVEABLE_OFFSET UNITYSDK_OFFSET(0xC798C0)
#define CONTROLLERMANAGER_GET_ISDPADCURSORMOVEABLE_OFFSET UNITYSDK_OFFSET(0xC798D0)
#define CONTROLLERMANAGER_SET_ISSTICKCURSORMOVEABLE_OFFSET UNITYSDK_OFFSET(0xC798E0)
#define CONTROLLERMANAGER_GET_ISSTICKCURSORMOVEABLE_OFFSET UNITYSDK_OFFSET(0xC798F0)
#define CONTROLLERMANAGER_SET_ISCLICKABLE_OFFSET UNITYSDK_OFFSET(0xC79900)
#define CONTROLLERMANAGER_GET_ISCLICKABLE_OFFSET UNITYSDK_OFFSET(0xC79910)
#define CONTROLLERMANAGER_SET_ISESCABLE_OFFSET UNITYSDK_OFFSET(0xC79920)
#define CONTROLLERMANAGER_GET_ISESCABLE_OFFSET UNITYSDK_OFFSET(0xC79930)
#define CONTROLLERMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC79940)
#define CONTROLLERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC7A180)
#define CONTROLLERMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC7B6F0)
#define CONTROLLERMANAGER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0xC7B720)
#define CONTROLLERMANAGER_ONENDOPENANIMATION_OFFSET UNITYSDK_OFFSET(0xC7B730)
#define CONTROLLERMANAGER_ONAFTERPATCH_OFFSET UNITYSDK_OFFSET(0xC7B7E0)
#define CONTROLLERMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC7B9A0)
#define CONTROLLERMANAGER_SETDEVICE_GAMEMAIN_OFFSET UNITYSDK_OFFSET(0xC75530)
#define CONTROLLERMANAGER_SETDEVICE_OFFSET UNITYSDK_OFFSET(0xC7A1F0)
#define CONTROLLERMANAGER_MOVECURSOR_OFFSET UNITYSDK_OFFSET(0xC7B740)
#define CONTROLLERMANAGER_SETGAMETYPE_OFFSET UNITYSDK_OFFSET(0xC7BE50)
#define CONTROLLERMANAGER_GETANYKEYDOWN_OFFSET UNITYSDK_OFFSET(0xC7C100)
#define CONTROLLERMANAGER_SETCURRENTGAMEPAD_OFFSET UNITYSDK_OFFSET(0xC7BC10)
#define CONTROLLERMANAGER_ADDINPUTCONTROL_OFFSET UNITYSDK_OFFSET(0xC7C2D0)
#define CONTROLLERMANAGER_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONTROLLERMANAGER_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0xC7C560)
#define CONTROLLERMANAGER_GETKEYPRESS_OFFSET UNITYSDK_OFFSET(0xC7C7D0)
#define CONTROLLERMANAGER_GETKEYUP_OFFSET UNITYSDK_OFFSET(0xC7C930)
#define CONTROLLERMANAGER_ISGETKEYPRESSONEKEY_OFFSET UNITYSDK_OFFSET(0xC7CA70)
#define CONTROLLERMANAGER_ISCONNECTEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC7CAB0)
#define CONTROLLERMANAGER_ISGAMETYPE_OFFSET UNITYSDK_OFFSET(0xC7CAC0)
#define CONTROLLERMANAGER_ISVIBRATIONMODE_OFFSET UNITYSDK_OFFSET(0xC7CAD0)
#define CONTROLLERMANAGER_CLEARINPUT_OFFSET UNITYSDK_OFFSET(0xC7BB50)
#define CONTROLLERMANAGER_UPDATECONTROLLERPRESSED_OFFSET UNITYSDK_OFFSET(0xC7AAF0)
#define CONTROLLERMANAGER_UPDATESCROLL_OFFSET UNITYSDK_OFFSET(0xC7B0C0)
#define CONTROLLERMANAGER_GETOFFSETSCROLLSPEED_OFFSET UNITYSDK_OFFSET(0xC7CC20)
#define CONTROLLERMANAGER_UPDATEESC_OFFSET UNITYSDK_OFFSET(0xC7B650)
#define CONTROLLERMANAGER_SHOWSTEAMVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0xC7D050)
#define CONTROLLERMANAGER_STARTVIBRATION_OFFSET UNITYSDK_OFFSET(0xC7D2A0)
#define CONTROLLERMANAGER_VIBRATIONCOROUTINE_OFFSET UNITYSDK_OFFSET(0xC7D3B0)
#define CONTROLLERMANAGER_ENDVIBRATION_OFFSET UNITYSDK_OFFSET(0xC7D380)
#define CONTROLLERMANAGER_GETPRESSINPUTCONTROLS_OFFSET UNITYSDK_OFFSET(0xC7D440)
#define CONTROLLERMANAGER_GETUPINPUTCONTROLS_OFFSET UNITYSDK_OFFSET(0xC7D450)
#define CONTROLLERMANAGER_GETDOWNINPUTCONTROLS_OFFSET UNITYSDK_OFFSET(0xC7D460)
#define CONTROLLERMANAGER_STARTFOCUSCURSORCOROUTINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONTROLLERMANAGER_FOCUSCURSORCOROUTINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONTROLLERMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC7D470)
#define CONTROLLERMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xC7DAE0)

	inline static constexpr unsigned int ControllerManager_TypeDefinitionIndex = 9054;

	class ControllerManager : public ::ToyWebViewShared::Messages::NotifyLoadError
	{
	public:
		::MX::Controller::ControllerKey* EscButtonBattle; // 0x0
		::MX::Controller::ControllerKey* EscButtonNoneBattle; // 0x4
		::MX::Controller::ControllerKey* EscButton; // 0x8
		::MX::Controller::ControllerKey* MouseLeft; // 0xC
		::MX::Controller::ControllerKey* CursorHide; // 0x10
		::MX::Controller::ControllerKey* CameraAndCharacterMove; // 0x14
		::System::Int32 OffsetGameScreen; // 0x0
		::UnityEngine::Vector2* VibrationPower; // 0x18
		::System::Single VibrationSec; // 0x20
		::System::Single ControllerScrollWheelFactor; // 0x24
		::System::Single ZoomSensitivity; // 0x28
		::UnityEngine::Vector2* DpadMoveCheckRange; // 0x2C
		::System::Single ControllerCursorClickScale; // 0x34
		::System::String* StudentUIName; // 0x0
		::System::String* StudentCardObjectName; // 0x0
		::System::String* StudentSelectObjectName; // 0x0
		::System::String* StudentSelectMappingId; // 0x0
		::System::Int32 StudentSelectMappingStartDepth; // 0x0
		Il2CppObject* DpadPoints; // 0x20
		ControllerMouse* Mouse; // 0x28
		ControllerIconTypeProvider* IconTypeProvider; // 0x30
		::System::Int32 ESCButtonFrameCount; // 0x38
		::MX::Controller::GameType* _gameType; // 0x3C
		Il2CppObject* _controls; // 0x40
		Il2CppObject* _curPressInputControls; // 0x48
		Il2CppObject* _curDownInputControls; // 0x50
		Il2CppObject* _curUpInputControls; // 0x58
		::UnityEngine::InputSystem::Gamepad* _current; // 0x60
		::System::Boolean _isInitialized; // 0x68
		::System::Boolean _anyKeyDown; // 0x69
		::System::Boolean _isFocused; // 0x6A
		::System::Boolean _IsDpadCursorMoveable_k__BackingField; // 0x6B
		::System::Boolean _IsStickCursorMoveable_k__BackingField; // 0x6C
		::System::Boolean _IsClickable_k__BackingField; // 0x6D
		::System::Boolean _IsESCable_k__BackingField; // 0x6E
		::System::Int32 ControllerCursorSpeed; // 0x70
		::System::Boolean ControllerCusrorAutoFocus; // 0x74
		::System::Collections::IEnumerator* _virtualKeyboardCoroutine; // 0x78
		::System::Collections::IEnumerator* _vibrationCoroutine; // 0x80
		MXBattleTask* _battleTask; // 0x88
		Il2CppObject* _exceptSetScroll; // 0x90
		Il2CppObject* _fastScrollSpeedUIPaths; // 0x98

		::System::Void set_IsDpadCursorMoveable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_SET_ISDPADCURSORMOVEABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDpadCursorMoveable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_GET_ISDPADCURSORMOVEABLE_OFFSET))(nullptr);
		}

		::System::Void set_IsStickCursorMoveable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_SET_ISSTICKCURSORMOVEABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsStickCursorMoveable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_GET_ISSTICKCURSORMOVEABLE_OFFSET))(nullptr);
		}

		::System::Void set_IsClickable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_SET_ISCLICKABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsClickable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_GET_ISCLICKABLE_OFFSET))(nullptr);
		}

		::System::Void set_IsESCable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_SET_ISESCABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsESCable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_GET_ISESCABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnApplicationFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_ONAPPLICATIONFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndOpenAnimation(MXUIKeyMapping* arg, UIBase* arg2)
		{
			((::System::Void(*)(MXUIKeyMapping*, UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_ONENDOPENANIMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnAfterPatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_ONAFTERPATCH_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetDevice_GameMain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_SETDEVICE_GAMEMAIN_OFFSET))(nullptr);
		}

		::System::Void SetDevice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_SETDEVICE_OFFSET))(nullptr);
		}

		::System::Void MoveCursor(MXUIKeyMapping* arg)
		{
			((::System::Void(*)(MXUIKeyMapping*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_MOVECURSOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetGameType(::MX::Controller::GameType* arg)
		{
			((::System::Void(*)(::MX::Controller::GameType*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_SETGAMETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetAnyKeyDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_GETANYKEYDOWN_OFFSET))(nullptr);
		}

		::System::Void SetCurrentGamepad(::UnityEngine::InputSystem::Gamepad* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Gamepad*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_SETCURRENTGAMEPAD_OFFSET))(arg, nullptr);
		}

		::System::Void AddInputControl(::UnityEngine::InputSystem::InputControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_ADDINPUTCONTROL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetKeyDown(::MX::Controller::ControllerKey* arg)
		{
			return ((Il2CppObject*(*)(::MX::Controller::ControllerKey*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_GETKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyDown(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_GETKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyPress(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_GETKEYPRESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyUp(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_GETKEYUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGetKeyPressOneKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_ISGETKEYPRESSONEKEY_OFFSET))(nullptr);
		}

		::System::Boolean IsConnectedController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_ISCONNECTEDCONTROLLER_OFFSET))(nullptr);
		}

		::System::Boolean IsGameType(::MX::Controller::GameType* arg)
		{
			return ((::System::Boolean(*)(::MX::Controller::GameType*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_ISGAMETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVibrationMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_ISVIBRATIONMODE_OFFSET))(nullptr);
		}

		::System::Void ClearInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_CLEARINPUT_OFFSET))(nullptr);
		}

		::System::Void UpdateControllerPressed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_UPDATECONTROLLERPRESSED_OFFSET))(nullptr);
		}

		::System::Void UpdateScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_UPDATESCROLL_OFFSET))(nullptr);
		}

		::System::Single GetOffsetScrollSpeed(::System::String* str)
		{
			return ((::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_GETOFFSETSCROLLSPEED_OFFSET))(str, nullptr);
		}

		::System::Void UpdateESC()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_UPDATEESC_OFFSET))(nullptr);
		}

		::System::Boolean ShowSteamVirtualKeyboard(::System::String* str, ::System::UInt32 arg, ::System::String* str2, ::System::Boolean arg2, InputType* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt32, ::System::String*, ::System::Boolean, InputType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_SHOWSTEAMVIRTUALKEYBOARD_OFFSET))(str, arg, str2, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartVibration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_STARTVIBRATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* VibrationCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_VIBRATIONCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void EndVibration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_ENDVIBRATION_OFFSET))(nullptr);
		}

		Il2CppObject* GetPressInputControls()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_GETPRESSINPUTCONTROLS_OFFSET))(nullptr);
		}

		Il2CppObject* GetUpInputControls()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_GETUPINPUTCONTROLS_OFFSET))(nullptr);
		}

		Il2CppObject* GetDownInputControls()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_GETDOWNINPUTCONTROLS_OFFSET))(nullptr);
		}

		::System::Void StartFocusCursorCoroutine(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_STARTFOCUSCURSORCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* FocusCursorCoroutine(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_FOCUSCURSORCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};

