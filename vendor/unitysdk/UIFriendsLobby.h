#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIFRIENDSLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0x2572B10)
#define UIFRIENDSLOBBY___N__0_OFFSET UNITYSDK_OFFSET(0x2572EF0)
#define UIFRIENDSLOBBY_REFRESHDOT_OFFSET UNITYSDK_OFFSET(0x2572F00)
#define UIFRIENDSLOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2572F30)
#define UIFRIENDSLOBBY_ONCLICKFRIENDMANAGEBUTTON_OFFSET UNITYSDK_OFFSET(0x2572FC0)
#define UIFRIENDSLOBBY_ONCLICKIDCARD_OFFSET UNITYSDK_OFFSET(0x2573030)
#define UIFRIENDSLOBBY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25730A0)
#define UIFRIENDSLOBBY_ONCLICKASSISTMANAGEBUTTON_OFFSET UNITYSDK_OFFSET(0x25730E0)
#define UIFRIENDSLOBBY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2573150)
#define UIFRIENDSLOBBY_HANDLEFRIENDDBSSYNCNETWORKRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x25732C0)
#define UIFRIENDSLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2573350)

	inline static constexpr unsigned int UIFriendsLobby_TypeDefinitionIndex = 6160;

	class UIFriendsLobby : public Il2CppObject
	{
	public:
		MXButton* idCardButton; // 0xD8
		MXButton* friendManageButton; // 0xE0
		::UnityEngine::GameObject* friendReqReceiveNoti; // 0xE8
		MXButton* assistManageButton; // 0xF0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Void RefreshDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLOBBY_REFRESHDOT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnClickFriendManageButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLOBBY_ONCLICKFRIENDMANAGEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickIdCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLOBBY_ONCLICKIDCARD_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLOBBY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickAssistManageButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLOBBY_ONCLICKASSISTMANAGEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLOBBY_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean HandleFriendDBsSyncNetworkResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLOBBY_HANDLEFRIENDDBSSYNCNETWORKRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLOBBY_.CTOR_OFFSET))(nullptr);
		}

	};

