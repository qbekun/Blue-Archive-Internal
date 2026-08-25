#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }

#define WORLDRAIDRETRYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAF10)

	inline static constexpr unsigned int WorldRaidRetryInfo_TypeDefinitionIndex = 1912;

	class WorldRaidRetryInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::WorldRaidLocalBossDB* BossDB; // 0x10
		::System::Int64 PhaseId; // 0x18
		::System::Int32 EchelonNumber; // 0x20
		::System::Boolean IsPractice; // 0x24
		::System::Boolean IsTicket; // 0x25
		Il2CppObject* AssistUseInfos; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDRETRYINFO_.CTOR_OFFSET))(nullptr);
		}

	};

