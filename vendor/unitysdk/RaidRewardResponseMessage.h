#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDREWARDRESPONSEMESSAGE_GET_BESTRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1F91160)
#define RAIDREWARDRESPONSEMESSAGE_SET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1F91170)
#define RAIDREWARDRESPONSEMESSAGE_SET_RANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1F91180)
#define RAIDREWARDRESPONSEMESSAGE_SET_BESTRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1F91190)
#define RAIDREWARDRESPONSEMESSAGE_GET_RANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1F911A0)
#define RAIDREWARDRESPONSEMESSAGE_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1F911B0)
#define RAIDREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F911C0)

	inline static constexpr unsigned int RaidRewardResponseMessage_TypeDefinitionIndex = 2717;

	class RaidRewardResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _RewardParcelInfos_k__BackingField; // 0x20
		::System::Int64 _RankingPoint_k__BackingField; // 0x28
		::System::Int64 _BestRankingPoint_k__BackingField; // 0x30

		::System::Int64 get_BestRankingPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDRESPONSEMESSAGE_GET_BESTRANKINGPOINT_OFFSET))(nullptr);
		}

		::System::Void set_RewardParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDRESPONSEMESSAGE_SET_REWARDPARCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void set_RankingPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDRESPONSEMESSAGE_SET_RANKINGPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void set_BestRankingPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDRESPONSEMESSAGE_SET_BESTRANKINGPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankingPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDRESPONSEMESSAGE_GET_RANKINGPOINT_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDRESPONSEMESSAGE_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

