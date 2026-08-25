#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace MX::GameLogic::DBModel { class DetailedAccountInfoDB; }
namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }

#define UIUSERINFOTAB_RECORD_SETMYDATA_OFFSET UNITYSDK_OFFSET(0x257EAC0)
#define UIUSERINFOTAB_RECORD_SETDATA_OFFSET UNITYSDK_OFFSET(0x257F910)
#define UIUSERINFOTAB_RECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x257FF40)
#define UIUSERINFOTAB_RECORD_SETMULTIFLOORRAIDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x257F7D0)

	inline static constexpr unsigned int UIUserInfoTab_Record_TypeDefinitionIndex = 6206;

	class UIUserInfoTab_Record : public Il2CppObject
	{
	public:
		UILabel* normalStageRecord; // 0x18
		UILabel* hardStageRecord; // 0x20
		UITexture* raidRankingIcon; // 0x28
		UILabel* raidRankingLabel; // 0x30
		UITexture* eliminateRaidRankingIcon; // 0x38
		UILabel* eliminateRaidRankingLabel; // 0x40
		UITexture* arenaRankingIcon; // 0x48
		UILabel* arenaRankingLabel; // 0x50
		UILabel* multiFloorRaidClearedDifficultyLabel; // 0x58
		UILabel* studentCount; // 0x60

		::System::Void SetMyData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_RECORD_SETMYDATA_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::DetailedAccountInfoDB* arg, ::MX::GameLogic::DBModel::AccountAttachmentDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::DetailedAccountInfoDB*, ::MX::GameLogic::DBModel::AccountAttachmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_RECORD_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_RECORD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetMultiFloorRaidDifficulty(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_RECORD_SETMULTIFLOORRAIDDIFFICULTY_OFFSET))(arg, nullptr);
		}

	};

