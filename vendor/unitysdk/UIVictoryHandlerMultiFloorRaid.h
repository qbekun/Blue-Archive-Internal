#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Logic::Data { class BattleTypes; }

#define UIVICTORYHANDLERMULTIFLOORRAID_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0xBAA8F0)
#define UIVICTORYHANDLERMULTIFLOORRAID_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBAA900)
#define UIVICTORYHANDLERMULTIFLOORRAID_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xBAA910)
#define UIVICTORYHANDLERMULTIFLOORRAID_.CTOR_OFFSET UNITYSDK_OFFSET(0xBAA920)
#define UIVICTORYHANDLERMULTIFLOORRAID_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xBAA930)
#define UIVICTORYHANDLERMULTIFLOORRAID_HANDLETOLOBBY_OFFSET UNITYSDK_OFFSET(0xBAA950)
#define UIVICTORYHANDLERMULTIFLOORRAID_ADDMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0xBAA9E0)
#define UIVICTORYHANDLERMULTIFLOORRAID_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBAA9F0)
#define UIVICTORYHANDLERMULTIFLOORRAID_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xBAAA00)

	inline static constexpr unsigned int UIVictoryHandlerMultiFloorRaid_TypeDefinitionIndex = 8557;

	class UIVictoryHandlerMultiFloorRaid : public Il2CppObject
	{
	public:
		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMULTIFLOORRAID_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMULTIFLOORRAID_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMULTIFLOORRAID_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMULTIFLOORRAID_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMULTIFLOORRAID_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Void HandleToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMULTIFLOORRAID_HANDLETOLOBBY_OFFSET))(nullptr);
		}

		::System::Void AddMissionPopup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMULTIFLOORRAID_ADDMISSIONPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMULTIFLOORRAID_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMULTIFLOORRAID_HANDLECLOSE_OFFSET))(nullptr);
		}

	};

