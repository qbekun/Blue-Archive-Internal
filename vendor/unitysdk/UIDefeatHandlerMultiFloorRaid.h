#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Logic::Data { class BattleTypes; }

#define UIDEFEATHANDLERMULTIFLOORRAID_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C4030)
#define UIDEFEATHANDLERMULTIFLOORRAID_INITPOPUPLIST_OFFSET UNITYSDK_OFFSET(0x23C4040)
#define UIDEFEATHANDLERMULTIFLOORRAID_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C4050)
#define UIDEFEATHANDLERMULTIFLOORRAID_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0x23C4060)
#define UIDEFEATHANDLERMULTIFLOORRAID_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x23C4070)
#define UIDEFEATHANDLERMULTIFLOORRAID_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C4080)
#define UIDEFEATHANDLERMULTIFLOORRAID_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x23C4090)
#define UIDEFEATHANDLERMULTIFLOORRAID_HANDLETOLOBBY_OFFSET UNITYSDK_OFFSET(0x23C4140)
#define UIDEFEATHANDLERMULTIFLOORRAID_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x23C41D0)

	inline static constexpr unsigned int UIDefeatHandlerMultiFloorRaid_TypeDefinitionIndex = 5262;

	class UIDefeatHandlerMultiFloorRaid : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMULTIFLOORRAID_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitPopupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMULTIFLOORRAID_INITPOPUPLIST_OFFSET))(arg, nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMULTIFLOORRAID_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMULTIFLOORRAID_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMULTIFLOORRAID_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMULTIFLOORRAID_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMULTIFLOORRAID_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void HandleToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMULTIFLOORRAID_HANDLETOLOBBY_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMULTIFLOORRAID_REQUESTRESULT_OFFSET))(nullptr);
		}

	};

