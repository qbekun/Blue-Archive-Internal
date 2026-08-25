#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SCHOOLDUNGEONBATTLERESULTRESPONSEMESSAGE_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1F9C6A0)
#define SCHOOLDUNGEONBATTLERESULTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9C6B0)
#define SCHOOLDUNGEONBATTLERESULTRESPONSEMESSAGE_SET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1F9C6F0)

	inline static constexpr unsigned int SchoolDungeonBattleResultResponseMessage_TypeDefinitionIndex = 2790;

	class SchoolDungeonBattleResultResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _RewardParcelInfos_k__BackingField; // 0x20

		Il2CppObject* get_RewardParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONBATTLERESULTRESPONSEMESSAGE_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONBATTLERESULTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_RewardParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONBATTLERESULTRESPONSEMESSAGE_SET_REWARDPARCELINFOS_OFFSET))(arg, nullptr);
		}

	};

