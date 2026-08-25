#pragma once
#include "unitysdk.h"

class UILabel;
namespace MX::TableBoard { class TBGBattleEncounterDB; }

#define UITBGBATTLEINFO_SETBATTLEENCOUNTERDATA_OFFSET UNITYSDK_OFFSET(0xB408D0)
#define UITBGBATTLEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB40C50)

	inline static constexpr unsigned int UITBGBattleInfo_TypeDefinitionIndex = 8331;

	class UITBGBattleInfo : public Il2CppObject
	{
	public:
		UILabel* TargetSuccessLabel; // 0x18
		UILabel* TargetGreatSuccessLabel; // 0x20
		UILabel* TargetRunawayLabel; // 0x28

		::System::Void SetBattleEncounterData(::MX::TableBoard::TBGBattleEncounterDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBattleEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLEINFO_SETBATTLEENCOUNTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBATTLEINFO_.CTOR_OFFSET))(nullptr);
		}

	};

