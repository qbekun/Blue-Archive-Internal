#pragma once
#include "unitysdk.h"

class UIDefeat;
namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::Logic::Data { class BattleTypes; }
namespace FlatData { class OperatorCondition; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIDEFEATHANDLER_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIDEFEATHANDLER_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIDEFEATHANDLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x23BE270)
#define UIDEFEATHANDLER_HANDLETOLOBBY_OFFSET UNITYSDK_OFFSET(0x23BE2C0)
#define UIDEFEATHANDLER_SET_ISNETWORKRESPONSERECEIVED_OFFSET UNITYSDK_OFFSET(0x23BE350)
#define UIDEFEATHANDLER_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIDEFEATHANDLER_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIDEFEATHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0x23BE360)
#define UIDEFEATHANDLER_GET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0x23BE380)
#define UIDEFEATHANDLER_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x23BE390)
#define UIDEFEATHANDLER_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIDEFEATHANDLER_SET_DEFEATUI_OFFSET UNITYSDK_OFFSET(0x23BE3A0)
#define UIDEFEATHANDLER_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIDEFEATHANDLER_GET_ISNETWORKRESPONSERECEIVED_OFFSET UNITYSDK_OFFSET(0x23BE3B0)
#define UIDEFEATHANDLER_HANDLERESULTRESPONSMESSAGEINTERNAL_OFFSET UNITYSDK_OFFSET(0x23BE3C0)
#define UIDEFEATHANDLER_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x23BE700)
#define UIDEFEATHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x23BE710)
#define UIDEFEATHANDLER_GET_DEFEATUI_OFFSET UNITYSDK_OFFSET(0x23BE720)
#define UIDEFEATHANDLER_INITPOPUPLIST_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UIDefeatHandler_TypeDefinitionIndex = 5250;

	class UIDefeatHandler : public Il2CppObject
	{
	public:
		UIDefeat* _DefeatUI_k__BackingField; // 0x10
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x18
		::System::Boolean _IsNetworkResponseReceived_k__BackingField; // 0x20

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIDefeat* arg, ::MX::Logic::Battles::Summary::BattleSummary* arg2)
		{
			((::System::Void(*)(UIDefeat*, ::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HandleToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_HANDLETOLOBBY_OFFSET))(nullptr);
		}

		::System::Void set_IsNetworkResponseReceived(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_SET_ISNETWORKRESPONSERECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_DETACHLISTENER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_RELEASE_OFFSET))(nullptr);
		}

		::FlatData::OperatorCondition* get_OperatorCondition()
		{
			return ((::FlatData::OperatorCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_GET_OPERATORCONDITION_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void set_DefeatUI(UIDefeat* arg)
		{
			((::System::Void(*)(UIDefeat*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_SET_DEFEATUI_OFFSET))(arg, nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNetworkResponseReceived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_GET_ISNETWORKRESPONSERECEIVED_OFFSET))(nullptr);
		}

		::System::Void HandleResultResponsMessageInternal(Il2CppObject* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_HANDLERESULTRESPONSMESSAGEINTERNAL_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_.CTOR_OFFSET))(nullptr);
		}

		UIDefeat* get_DefeatUI()
		{
			return ((UIDefeat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_GET_DEFEATUI_OFFSET))(nullptr);
		}

		::System::Void InitPopupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLER_INITPOPUPLIST_OFFSET))(arg, nullptr);
		}

	};

