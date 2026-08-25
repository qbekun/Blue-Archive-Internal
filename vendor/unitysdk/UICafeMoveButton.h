#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class Animation; }
class UILabel;
class UISprite;
class UICafe;
namespace MX::GameLogic::DBModel { class CafeDB; }

#define UICAFEMOVEBUTTON_GETOTHERCAFEID_OFFSET UNITYSDK_OFFSET(0x2281790)
#define UICAFEMOVEBUTTON_REFRESH_OFFSET UNITYSDK_OFFSET(0x2280020)
#define UICAFEMOVEBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2281AA0)
#define UICAFEMOVEBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x2281C60)
#define UICAFEMOVEBUTTON_RESETCURRENTCAFE_OFFSET UNITYSDK_OFFSET(0x2280870)
#define UICAFEMOVEBUTTON_ONCLICKMOVE_OFFSET UNITYSDK_OFFSET(0x2281E60)
#define UICAFEMOVEBUTTON_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2282260)
#define UICAFEMOVEBUTTON__REFRESHREDDOT_B__18_0_OFFSET UNITYSDK_OFFSET(0x2282270)
#define UICAFEMOVEBUTTON_REFRESHREDDOT_OFFSET UNITYSDK_OFFSET(0x2281900)
#define UICAFEMOVEBUTTON_UPDATEMOVEBUTTONLABEL_OFFSET UNITYSDK_OFFSET(0x2281AC0)
#define UICAFEMOVEBUTTON_UNLOCKEDSECONDCAFE_OFFSET UNITYSDK_OFFSET(0x22817A0)
#define UICAFEMOVEBUTTON_ONCLICKDISABLED_OFFSET UNITYSDK_OFFSET(0x22822A0)
#define UICAFEMOVEBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2282A30)
#define UICAFEMOVEBUTTON_TOGGLEBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x2281890)

	inline static constexpr unsigned int UICafeMoveButton_TypeDefinitionIndex = 4667;

	class UICafeMoveButton : public Il2CppObject
	{
	public:
		MXButton* moveButton; // 0x18
		MXButton* moveDisabledButton; // 0x20
		::UnityEngine::Animation* moveUnlockAni; // 0x28
		UILabel* moveButtonCafeNameLabel; // 0x30
		UISprite* moveButtonRedDot; // 0x38
		UICafe* uiCafe; // 0x40
		::System::Int64 currentCafeID; // 0x48

		::System::Int64 GetOtherCafeID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON_GETOTHERCAFEID_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ResetCurrentCafe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON_RESETCURRENTCAFE_OFFSET))(nullptr);
		}

		::System::Void OnClickMove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON_ONCLICKMOVE_OFFSET))(nullptr);
		}

		::System::Void Initialize(UICafe* arg)
		{
			((::System::Void(*)(UICafe*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _RefreshRedDot_b__18_0(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON__REFRESHREDDOT_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON_REFRESHREDDOT_OFFSET))(nullptr);
		}

		::System::Void UpdateMoveButtonLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON_UPDATEMOVEBUTTONLABEL_OFFSET))(nullptr);
		}

		::System::Boolean UnlockedSecondCafe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON_UNLOCKEDSECONDCAFE_OFFSET))(nullptr);
		}

		::System::Void OnClickDisabled()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON_ONCLICKDISABLED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ToggleButtonState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEMOVEBUTTON_TOGGLEBUTTONSTATE_OFFSET))(nullptr);
		}

	};

