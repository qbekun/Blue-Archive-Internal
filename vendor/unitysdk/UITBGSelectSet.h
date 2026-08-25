#pragma once
#include "unitysdk.h"

namespace MX::TableBoard { class TBGEncounterDB; }
namespace MX::TableBoard { class TBGFacilityEncounterDB; }
namespace MX::TableBoard { class TBGBattleEncounterDB; }
namespace MX::TableBoard { class TBGRandomEncounterDB; }

#define UITBGSELECTSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xB5C830)
#define UITBGSELECTSET_START_OFFSET UNITYSDK_OFFSET(0xB5C840)
#define UITBGSELECTSET_SETFACILITYENCOUNTER_OFFSET UNITYSDK_OFFSET(0xB5CA00)
#define UITBGSELECTSET_SETBATTLEENCOUNTERDATA_OFFSET UNITYSDK_OFFSET(0xB5CBB0)
#define UITBGSELECTSET_SETRANDOMENCOUNTER_OFFSET UNITYSDK_OFFSET(0xB5CCE0)
#define UITBGSELECTSET_GET_SELECTINDEX_OFFSET UNITYSDK_OFFSET(0xB5CE10)
#define UITBGSELECTSET_ISENCOUNTERDBIDENTICAL_OFFSET UNITYSDK_OFFSET(0xB5CB30)
#define UITBGSELECTSET_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5CE20)

	inline static constexpr unsigned int UITBGSelectSet_TypeDefinitionIndex = 8411;

	class UITBGSelectSet : public Il2CppObject
	{
	public:
		Il2CppObject* SelectLabels; // 0x18
		::System::Int32 selectIndex; // 0x20
		::MX::TableBoard::TBGEncounterDB* encounterDBCache; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTSET_START_OFFSET))(nullptr);
		}

		::System::Void SetFacilityEncounter(::MX::TableBoard::TBGFacilityEncounterDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGFacilityEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTSET_SETFACILITYENCOUNTER_OFFSET))(arg, nullptr);
		}

		::System::Void SetBattleEncounterData(::MX::TableBoard::TBGBattleEncounterDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBattleEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTSET_SETBATTLEENCOUNTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetRandomEncounter(::MX::TableBoard::TBGRandomEncounterDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGRandomEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTSET_SETRANDOMENCOUNTER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTSET_GET_SELECTINDEX_OFFSET))(nullptr);
		}

		::System::Boolean IsEncounterDBIdentical(::MX::TableBoard::TBGEncounterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::TableBoard::TBGEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTSET_ISENCOUNTERDBIDENTICAL_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGSELECTSET_CLEAR_OFFSET))(nullptr);
		}

	};

