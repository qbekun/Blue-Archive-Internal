#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIGrid;
class ServerWaitingState;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_SERVERWAITINGCONNECTION_HANDLEDOWNLOADPROGRESSMESSAGE_OFFSET UNITYSDK_OFFSET(0xB70CA0)
#define UIPOPUP_SERVERWAITINGCONNECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0xB70F10)
#define UIPOPUP_SERVERWAITINGCONNECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xB71170)
#define UIPOPUP_SERVERWAITINGCONNECTION_SETDATA_OFFSET UNITYSDK_OFFSET(0xB71270)
#define UIPOPUP_SERVERWAITINGCONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xB71430)
#define UIPOPUP_SERVERWAITINGCONNECTION_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB71440)
#define UIPOPUP_SERVERWAITINGCONNECTION_CANCELSERVERWAITING_OFFSET UNITYSDK_OFFSET(0xB714D0)
#define UIPOPUP_SERVERWAITINGCONNECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB715B0)
#define UIPOPUP_SERVERWAITINGCONNECTION_CLOSEPOPUP_OFFSET UNITYSDK_OFFSET(0xB716D0)
#define UIPOPUP_SERVERWAITINGCONNECTION_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xB718F0)
#define UIPOPUP_SERVERWAITINGCONNECTION_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0xB71900)
#define UIPOPUP_SERVERWAITINGCONNECTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB71910)

	inline static constexpr unsigned int UIPopup_ServerWaitingConnection_TypeDefinitionIndex = 8468;

	class UIPopup_ServerWaitingConnection : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UILabel* waitingNumberLabel; // 0xE0
		MXButton* cancelButton; // 0xE8
		UILabel* patchSizeLabel; // 0xF0
		::UnityEngine::GameObject* downLoadLabelRoot; // 0xF8
		UIGrid* grid; // 0x100
		ServerWaitingState* serverWaitingState; // 0x108
		::System::Single KB; // 0x0
		::System::Single MB; // 0x0
		::System::String* download_CompleteText; // 0x110
		::System::String* downloadText; // 0x118

		::System::Boolean HandleDownloadProgressMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVERWAITINGCONNECTION_HANDLEDOWNLOADPROGRESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVERWAITINGCONNECTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVERWAITINGCONNECTION_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetData(ServerWaitingState* arg)
		{
			((::System::Void(*)(ServerWaitingState*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVERWAITINGCONNECTION_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVERWAITINGCONNECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVERWAITINGCONNECTION_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void CancelServerWaiting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVERWAITINGCONNECTION_CANCELSERVERWAITING_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVERWAITINGCONNECTION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ClosePopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVERWAITINGCONNECTION_CLOSEPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVERWAITINGCONNECTION_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVERWAITINGCONNECTION_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVERWAITINGCONNECTION_ONDISABLE_OFFSET))(nullptr);
		}

	};

