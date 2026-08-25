#pragma once
#include "unitysdk.h"

class UIVictory;
namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace FlatData { class ContentType; }
namespace MX::Logic::Data { class BattleTypes; }
namespace FlatData { class OperatorCondition; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIVICTORYHANDLER_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIVICTORYHANDLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB879E0)
#define UIVICTORYHANDLER_SET_ISNETWORKRESPONSERECEIVED_OFFSET UNITYSDK_OFFSET(0xB87A30)
#define UIVICTORYHANDLER_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xB87A40)
#define UIVICTORYHANDLER_HANDLERESULTRESPONSMESSAGEINTERNAL_OFFSET UNITYSDK_OFFSET(0xB87A50)
#define UIVICTORYHANDLER_ADDMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIVICTORYHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0xB87AA0)
#define UIVICTORYHANDLER_GET_VICTORYUI_OFFSET UNITYSDK_OFFSET(0xB87AC0)
#define UIVICTORYHANDLER_SET_VICTORYUI_OFFSET UNITYSDK_OFFSET(0xB87AD0)
#define UIVICTORYHANDLER_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIVICTORYHANDLER_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIVICTORYHANDLER_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xB87AE0)
#define UIVICTORYHANDLER_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xB87AF0)
#define UIVICTORYHANDLER_HANDLETOLOBBY_OFFSET UNITYSDK_OFFSET(0xB87B00)
#define UIVICTORYHANDLER_GET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0xB87B90)
#define UIVICTORYHANDLER_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIVICTORYHANDLER_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIVICTORYHANDLER_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIVICTORYHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB87BA0)
#define UIVICTORYHANDLER_GET_ISNETWORKRESPONSERECEIVED_OFFSET UNITYSDK_OFFSET(0xB87BB0)

	inline static constexpr unsigned int UIVictoryHandler_TypeDefinitionIndex = 8545;

	class UIVictoryHandler : public Il2CppObject
	{
	public:
		UIVictory* _VictoryUI_k__BackingField; // 0x10
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x18
		::System::Boolean _IsNetworkResponseReceived_k__BackingField; // 0x20

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIVictory* arg, ::MX::Logic::Battles::Summary::BattleSummary* arg2)
		{
			((::System::Void(*)(UIVictory*, ::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_IsNetworkResponseReceived(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_SET_ISNETWORKRESPONSERECEIVED_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void HandleResultResponsMessageInternal(Il2CppObject* arg, Il2CppObject* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_HANDLERESULTRESPONSMESSAGEINTERNAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddMissionPopup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_ADDMISSIONPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_RELEASE_OFFSET))(nullptr);
		}

		UIVictory* get_VictoryUI()
		{
			return ((UIVictory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_GET_VICTORYUI_OFFSET))(nullptr);
		}

		::System::Void set_VictoryUI(UIVictory* arg)
		{
			((::System::Void(*)(UIVictory*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_SET_VICTORYUI_OFFSET))(arg, nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_REQUESTRESULT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Void HandleToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_HANDLETOLOBBY_OFFSET))(nullptr);
		}

		::FlatData::OperatorCondition* get_OperatorCondition()
		{
			return ((::FlatData::OperatorCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_GET_OPERATORCONDITION_OFFSET))(nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNetworkResponseReceived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLER_GET_ISNETWORKRESPONSERECEIVED_OFFSET))(nullptr);
		}

	};

