#pragma once
#include "unitysdk.h"

class UIInput;
class UILabel;
class MXButton;
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define CLANCREATEPOPUP__ONCLICKCREATE_B__11_0_OFFSET UNITYSDK_OFFSET(0x23304A0)
#define CLANCREATEPOPUP_ERRORCLANCREATE_OFFSET UNITYSDK_OFFSET(0x2330520)
#define CLANCREATEPOPUP_HANDLECLANCREATERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2330580)
#define CLANCREATEPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2330700)
#define CLANCREATEPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2330AE0)
#define CLANCREATEPOPUP_CLANCREATEPOPUPOPEN_OFFSET UNITYSDK_OFFSET(0x2330BE0)
#define CLANCREATEPOPUP_ONCHANGECLANCREATEINPUT_OFFSET UNITYSDK_OFFSET(0x2330C10)
#define CLANCREATEPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2330C70)
#define CLANCREATEPOPUP_ONCLICKCREATE_OFFSET UNITYSDK_OFFSET(0x2330C80)
#define CLANCREATEPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2331360)
#define CLANCREATEPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2331390)

	inline static constexpr unsigned int ClanCreatePopup_TypeDefinitionIndex = 4945;

	class ClanCreatePopup : public Il2CppObject
	{
	public:
		UIInput* createClanNameInput; // 0x18
		UILabel* createClanNameInputPlaceholder; // 0x20
		UILabel* createClanGem; // 0x28
		MXButton* cancelButton; // 0x30
		MXButton* createButton; // 0x38
		::System::Int64 cost; // 0x40

		::Cysharp::Threading::Tasks::UniTask* _OnClickCreate_b__11_0()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATEPOPUP__ONCLICKCREATE_B__11_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorClanCreate(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCREATEPOPUP_ERRORCLANCREATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleClanCreateResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCREATEPOPUP_HANDLECLANCREATERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATEPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATEPOPUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ClanCreatePopupOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATEPOPUP_CLANCREATEPOPUPOPEN_OFFSET))(nullptr);
		}

		::System::Void OnChangeClanCreateInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATEPOPUP_ONCHANGECLANCREATEINPUT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATEPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickCreate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATEPOPUP_ONCLICKCREATE_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATEPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATEPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

	};

