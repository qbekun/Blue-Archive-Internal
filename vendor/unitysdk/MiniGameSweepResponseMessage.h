#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define MINIGAMESWEEPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB12830)
#define MINIGAMESWEEPRESPONSEMESSAGE_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB12890)
#define MINIGAMESWEEPRESPONSEMESSAGE_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0xB128A0)
#define MINIGAMESWEEPRESPONSEMESSAGE_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0xB128B0)
#define MINIGAMESWEEPRESPONSEMESSAGE_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB128C0)
#define MINIGAMESWEEPRESPONSEMESSAGE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xB128D0)
#define MINIGAMESWEEPRESPONSEMESSAGE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xB128E0)

	inline static constexpr unsigned int MiniGameSweepResponseMessage_TypeDefinitionIndex = 8214;

	class MiniGameSweepResponseMessage : public Il2CppObject
	{
	public:
		::System::Int64 _StageId_k__BackingField; // 0x20
		Il2CppObject* _Rewards_k__BackingField; // 0x28
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x30

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2, ::MX::GameLogic::Parcel::ParcelResultDB* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, ::MX::GameLogic::Parcel::ParcelResultDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESWEEPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESWEEPRESPONSEMESSAGE_GET_STAGEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESWEEPRESPONSEMESSAGE_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESWEEPRESPONSEMESSAGE_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESWEEPRESPONSEMESSAGE_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESWEEPRESPONSEMESSAGE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESWEEPRESPONSEMESSAGE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};

