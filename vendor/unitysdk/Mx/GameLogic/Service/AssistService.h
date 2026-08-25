#pragma once
#include "../../../unitysdk.h"

namespace MX::Data { class AssistData; }
namespace MX::Data { class AssistSlotInfo; }
namespace MX::GameLogic::DBModel { class ClanAssistSlotDB; }
namespace FlatData { class EchelonType; }

#define MX_GAMELOGIC_SERVICE_ASSISTSERVICE_GETASSISTCUMULATIVEREWARD_OFFSET UNITYSDK_OFFSET(0xF573F0)
#define MX_GAMELOGIC_SERVICE_ASSISTSERVICE_GETASSISTCUMULATIVEREWARD_OFFSET UNITYSDK_OFFSET(0xF57420)
#define MX_GAMELOGIC_SERVICE_ASSISTSERVICE_GETASSISTRENTREWARD_OFFSET UNITYSDK_OFFSET(0xF579C0)
#define MX_GAMELOGIC_SERVICE_ASSISTSERVICE_GETASSISTRENTREWARD_OFFSET UNITYSDK_OFFSET(0xF579F0)
#define MX_GAMELOGIC_SERVICE_ASSISTSERVICE_ENCODEASSISTCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xF57ED0)
#define MX_GAMELOGIC_SERVICE_ASSISTSERVICE_DECODESHARDIDFROMASSISTCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xF57EE0)
#define MX_GAMELOGIC_SERVICE_ASSISTSERVICE_DECODECHARACTERDBIDFROMASSISTCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xF57EF0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int AssistService_TypeDefinitionIndex = 12226;

	class AssistService : public Il2CppObject
	{
	public:
		Il2CppObject* GetAssistCumulativeReward(::MX::Data::AssistData* arg, ::MX::Data::AssistSlotInfo* arg2, ::MX::GameLogic::DBModel::ClanAssistSlotDB* arg3, ::System::DateTime* arg4)
		{
			return ((Il2CppObject*(*)(::MX::Data::AssistData*, ::MX::Data::AssistSlotInfo*, ::MX::GameLogic::DBModel::ClanAssistSlotDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ASSISTSERVICE_GETASSISTCUMULATIVEREWARD_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* GetAssistCumulativeReward(::MX::Data::AssistData* arg, ::MX::Data::AssistSlotInfo* arg2, ::System::DateTime* arg3, ::FlatData::EchelonType* arg4, ::System::Int64 arg5, ::System::DateTime* arg6)
		{
			return ((Il2CppObject*(*)(::MX::Data::AssistData*, ::MX::Data::AssistSlotInfo*, ::System::DateTime*, ::FlatData::EchelonType*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ASSISTSERVICE_GETASSISTCUMULATIVEREWARD_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		Il2CppObject* GetAssistRentReward(::MX::Data::AssistData* arg, ::MX::Data::AssistSlotInfo* arg2, ::MX::GameLogic::DBModel::ClanAssistSlotDB* arg3)
		{
			return ((Il2CppObject*(*)(::MX::Data::AssistData*, ::MX::Data::AssistSlotInfo*, ::MX::GameLogic::DBModel::ClanAssistSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ASSISTSERVICE_GETASSISTRENTREWARD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetAssistRentReward(::MX::Data::AssistData* arg, ::MX::Data::AssistSlotInfo* arg2, ::FlatData::EchelonType* arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			return ((Il2CppObject*(*)(::MX::Data::AssistData*, ::MX::Data::AssistSlotInfo*, ::FlatData::EchelonType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ASSISTSERVICE_GETASSISTRENTREWARD_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 EncodeAssistCharacterDBId(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ASSISTSERVICE_ENCODEASSISTCHARACTERDBID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 DecodeShardIdFromAssistCharacterDBId(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ASSISTSERVICE_DECODESHARDIDFROMASSISTCHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::System::Int64 DecodeCharacterDBIdFromAssistCharacterDBId(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ASSISTSERVICE_DECODECHARACTERDBIDFROMASSISTCHARACTERDBID_OFFSET))(arg, nullptr);
		}

	};
}

