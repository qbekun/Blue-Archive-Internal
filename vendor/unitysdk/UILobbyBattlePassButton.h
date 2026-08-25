#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class UILabel;
class UISprite;
namespace MX::NetworkProtocol { class BattlePassCheckResponse; }
namespace Cysharp::Threading::Tasks { class UniTask; }
class BattlePassTask;

#define UILOBBYBATTLEPASSBUTTON_UPDATEBUTTONREDDOT_OFFSET UNITYSDK_OFFSET(0x266B520)
#define UILOBBYBATTLEPASSBUTTON_CHECKEXPIRATION_OFFSET UNITYSDK_OFFSET(0x266B630)
#define UILOBBYBATTLEPASSBUTTON_SETICONTEXTURE_OFFSET UNITYSDK_OFFSET(0x266B9B0)
#define UILOBBYBATTLEPASSBUTTON_GET_TASK_OFFSET UNITYSDK_OFFSET(0x266B5F0)
#define UILOBBYBATTLEPASSBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x266BB30)
#define UILOBBYBATTLEPASSBUTTON_ONCLICKBATTLEPASS_OFFSET UNITYSDK_OFFSET(0x266BB40)
#define UILOBBYBATTLEPASSBUTTON_GET_DEBUG_SHOWBATTLEPASSBUTTON_OFFSET UNITYSDK_OFFSET(0x266BBF0)
#define UILOBBYBATTLEPASSBUTTON_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x266B6A0)
#define UILOBBYBATTLEPASSBUTTON_ADDONCLICK_OFFSET UNITYSDK_OFFSET(0x266BC00)
#define UILOBBYBATTLEPASSBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x266BD20)

	inline static constexpr unsigned int UILobbyBattlePassButton_TypeDefinitionIndex = 6688;

	class UILobbyBattlePassButton : public Il2CppObject
	{
	public:
		MXButton* Button; // 0x18
		UITexture* ButtonSprite; // 0x20
		UILabel* RemainingTimeLabel; // 0x28
		UISprite* RedDotSprite; // 0x30

		::System::Void UpdateButtonRedDot(::MX::NetworkProtocol::BattlePassCheckResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::BattlePassCheckResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBATTLEPASSBUTTON_UPDATEBUTTONREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckExpiration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBATTLEPASSBUTTON_CHECKEXPIRATION_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* SetIconTexture()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBATTLEPASSBUTTON_SETICONTEXTURE_OFFSET))(nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBATTLEPASSBUTTON_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBATTLEPASSBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickBattlePass()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBATTLEPASSBUTTON_ONCLICKBATTLEPASS_OFFSET))(nullptr);
		}

		::System::Boolean get_DEBUG_ShowBattlePassButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBATTLEPASSBUTTON_GET_DEBUG_SHOWBATTLEPASSBUTTON_OFFSET))(nullptr);
		}

		::System::Void UpdateStatus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBATTLEPASSBUTTON_UPDATESTATUS_OFFSET))(nullptr);
		}

		::System::Void AddOnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBATTLEPASSBUTTON_ADDONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBATTLEPASSBUTTON_ONENABLE_OFFSET))(nullptr);
		}

	};

