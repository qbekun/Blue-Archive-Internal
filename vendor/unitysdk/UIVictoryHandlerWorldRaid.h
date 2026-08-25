#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }
class MXBattleTask;

#define UIVICTORYHANDLERWORLDRAID_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xBAD840)
#define UIVICTORYHANDLERWORLDRAID_HANDLETOLOBBY_OFFSET UNITYSDK_OFFSET(0xBAD850)
#define UIVICTORYHANDLERWORLDRAID_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xBAD9F0)
#define UIVICTORYHANDLERWORLDRAID__HANDLECLOSE_G__OPENWORLDRAIDLOBBY|8_0_OFFSET UNITYSDK_OFFSET(0xBADEE0)
#define UIVICTORYHANDLERWORLDRAID_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xBAE300)
#define UIVICTORYHANDLERWORLDRAID_GET_BATTLETASK_OFFSET UNITYSDK_OFFSET(0xBADE40)
#define UIVICTORYHANDLERWORLDRAID__HANDLETOLOBBY_G__SENDTOLOBBY|7_0_OFFSET UNITYSDK_OFFSET(0xBAE560)
#define UIVICTORYHANDLERWORLDRAID_.CTOR_OFFSET UNITYSDK_OFFSET(0xBAE620)

	inline static constexpr unsigned int UIVictoryHandlerWorldRaid_TypeDefinitionIndex = 8571;

	class UIVictoryHandlerWorldRaid : public Il2CppObject
	{
	public:
		::System::Int64 seasonId; // 0x28
		::System::Int64 phaseId; // 0x30

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWORLDRAID_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void HandleToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWORLDRAID_HANDLETOLOBBY_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWORLDRAID_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Void _HandleClose_g__OpenWorldRaidLobby|8_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWORLDRAID__HANDLECLOSE_G__OPENWORLDRAIDLOBBY|8_0_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWORLDRAID_HANDLECLOSE_OFFSET))(nullptr);
		}

		MXBattleTask* get_battleTask()
		{
			return ((MXBattleTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWORLDRAID_GET_BATTLETASK_OFFSET))(nullptr);
		}

		::System::Void _HandleToLobby_g__SendToLobby|7_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWORLDRAID__HANDLETOLOBBY_G__SENDTOLOBBY|7_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWORLDRAID_.CTOR_OFFSET))(nullptr);
		}

	};

