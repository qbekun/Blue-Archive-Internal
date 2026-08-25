#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define WEEKDUNGEONBATTLERESULTRESPONSEMESSAGE_SET_REWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1FADC40)
#define WEEKDUNGEONBATTLERESULTRESPONSEMESSAGE_SET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1FADC50)
#define WEEKDUNGEONBATTLERESULTRESPONSEMESSAGE_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1FADC60)
#define WEEKDUNGEONBATTLERESULTRESPONSEMESSAGE_GET_REWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1FADC70)
#define WEEKDUNGEONBATTLERESULTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FADC80)

	inline static constexpr unsigned int WeekDungeonBattleResultResponseMessage_TypeDefinitionIndex = 2876;

	class WeekDungeonBattleResultResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _RewardParcelInfos_k__BackingField; // 0x20
		Il2CppObject* _RewardConfirmDatas_k__BackingField; // 0x28

		::System::Void set_RewardConfirmDatas(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONBATTLERESULTRESPONSEMESSAGE_SET_REWARDCONFIRMDATAS_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONBATTLERESULTRESPONSEMESSAGE_SET_REWARDPARCELINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONBATTLERESULTRESPONSEMESSAGE_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardConfirmDatas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONBATTLERESULTRESPONSEMESSAGE_GET_REWARDCONFIRMDATAS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONBATTLERESULTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

