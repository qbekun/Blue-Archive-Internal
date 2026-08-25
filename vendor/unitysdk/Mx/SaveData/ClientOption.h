#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class SkillCutIn; }
namespace MX::SaveData { class RaidRetryCutScene; }
namespace MX::SaveData { class ToggleValue; }
namespace MX::SaveData { class SupplyCard; }
namespace MX::SaveData { class MemoryLobbyAni; }
namespace MX::SaveData { class RandomLobby; }
namespace MX::SaveData { class LeftUIValue; }
namespace MX::SaveData { class ToggleValueReverse; }
namespace MX::SaveData { class CafeAllowCopyPresetCategory; }
namespace MX::SaveData { class CafeAllowCopyPresetSubCategory; }
namespace MX::SaveData { class ScenarioTextDisplaySpeed; }
namespace MX::SaveData { class ScenarioAutoWaitTime; }

#define MX_SAVEDATA_CLIENTOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D29E00)
#define MX_SAVEDATA_CLIENTOPTION_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D29E20)
#define MX_SAVEDATA_CLIENTOPTION_MAPPRESETTOCATEGORYENUM_OFFSET UNITYSDK_OFFSET(0x1D29E80)
#define MX_SAVEDATA_CLIENTOPTION_MAPCATEGORYENUMTOPRESET_OFFSET UNITYSDK_OFFSET(0x1D29FF0)
#define MX_SAVEDATA_CLIENTOPTION_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D2A0F0)
#define MX_SAVEDATA_CLIENTOPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1D2A100)

namespace MX::SaveData
{
	inline static constexpr unsigned int ClientOption_TypeDefinitionIndex = 20050;

	class ClientOption : public Il2CppObject
	{
	public:
		::MX::SaveData::SkillCutIn* SkillCutIn; // 0x10
		::MX::SaveData::RaidRetryCutScene* RaidRetryCutScene; // 0x14
		::MX::SaveData::ToggleValue* HideBuffIconsPassive; // 0x18
		::MX::SaveData::ToggleValue* HideBuffIconsSpecialStudentExtraPassive; // 0x1C
		::MX::SaveData::ToggleValue* EXSkillPinPointMyUnit; // 0x20
		::MX::SaveData::ToggleValue* EXSkillPinPointAllyEtc; // 0x24
		::MX::SaveData::SupplyCard* SupplyCard; // 0x28
		::MX::SaveData::MemoryLobbyAni* MemoryLobbyAni; // 0x2C
		::MX::SaveData::RandomLobby* RandomLobby; // 0x30
		::System::Boolean IsNotFirstOpen; // 0x34
		::System::Boolean IsNotFirst; // 0x35
		::MX::SaveData::ToggleValue* AllowSamePersonality; // 0x38
		::MX::SaveData::ToggleValue* NotificationApCharge; // 0x3C
		::MX::SaveData::ToggleValue* NotificationCafeCharge; // 0x40
		::MX::SaveData::ToggleValue* ArenaBattleSkip; // 0x44
		::MX::SaveData::ToggleValue* MemoryClearByUI; // 0x48
		::MX::SaveData::ToggleValue* VoiceSubtitle; // 0x4C
		::MX::SaveData::LeftUIValue* LeftUI; // 0x50
		::MX::SaveData::ToggleValueReverse* ArenaHideOtherUsernames; // 0x54
		::MX::SaveData::ToggleValue* ArenaHideMyUsername; // 0x58
		::MX::SaveData::CafeAllowCopyPresetCategory* CafeAllowCopyPresetCategory; // 0x5C
		::MX::SaveData::CafeAllowCopyPresetSubCategory* CafeAllowCopyPresetSubCategory; // 0x60
		::MX::SaveData::ToggleValue* AutoSelect; // 0x64
		::MX::SaveData::ToggleValue* AutoSkipReward; // 0x68
		::MX::SaveData::ToggleValue* AutoNextEpisode; // 0x6C
		::MX::SaveData::ScenarioTextDisplaySpeed* ScenarioTextDisplaySpeed; // 0x70
		::MX::SaveData::ScenarioAutoWaitTime* ScenarioAutoWaitTime; // 0x74

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTOPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTOPTION_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		Il2CppObject* MapPresetToCategoryEnum(CafeAllowCopyPreset* arg)
		{
			return (return (Il2CppObject*(*)(CafeAllowCopyPreset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTOPTION_MAPPRESETTOCATEGORYENUM_OFFSET))(arg, nullptr);
		}

		CafeAllowCopyPreset* MapCategoryEnumToPreset(::MX::SaveData::CafeAllowCopyPresetCategory* arg, ::MX::SaveData::CafeAllowCopyPresetSubCategory* arg)
		{
			return (return (CafeAllowCopyPreset*(*)(::MX::SaveData::CafeAllowCopyPresetCategory*, ::MX::SaveData::CafeAllowCopyPresetSubCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTOPTION_MAPCATEGORYENUMTOPRESET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTOPTION_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTOPTION_CLONE_OFFSET))(nullptr);
		}

	};
}

