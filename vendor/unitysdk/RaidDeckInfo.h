#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }

#define RAIDDECKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2785820)

	inline static constexpr unsigned int RaidDeckInfo_TypeDefinitionIndex = 7396;

	class RaidDeckInfo : public Il2CppObject
	{
	public:
		::System::Int64 TryNumber; // 0x10
		::System::Boolean IsFinalRound; // 0x18
		::MX::GameLogic::DBModel::RaidTeamSettingDB* RaidTeamSettingDB; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDECKINFO_.CTOR_OFFSET))(nullptr);
		}

	};

