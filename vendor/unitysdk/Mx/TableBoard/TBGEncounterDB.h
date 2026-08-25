#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class ITBGEncounterInfo; }
namespace MX::TableBoard { class TBGEncounterState; }
namespace MX::TableBoard { class TBGEncounterDB; }
namespace MX::TableBoard { class TBGHexaObjectDB; }
namespace MX::Data { class ITBGObjectInfo; }
namespace FlatData { class TBGObjectType; }
namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::Core::Math { class IRandomService; }
namespace MX::Data { class ITBGEncounterRewardInfo; }

#define MX_TABLEBOARD_TBGENCOUNTERDB_GET_ENCOUNTERINFO_OFFSET UNITYSDK_OFFSET(0xEFF520)
#define MX_TABLEBOARD_TBGENCOUNTERDB_GET_ENCOUNTERREWARDRECEIVEINDEX_OFFSET UNITYSDK_OFFSET(0xEFF5B0)
#define MX_TABLEBOARD_TBGENCOUNTERDB_GET_ENCOUNTERSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TABLEBOARD_TBGENCOUNTERDB_GET_ENCOUNTERSTAGECODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TABLEBOARD_TBGENCOUNTERDB_GET_ENCOUNTERID_OFFSET UNITYSDK_OFFSET(0xEFF5E0)
#define MX_TABLEBOARD_TBGENCOUNTERDB_SET_ENCOUNTERID_OFFSET UNITYSDK_OFFSET(0xEFF5F0)
#define MX_TABLEBOARD_TBGENCOUNTERDB_GET_INVOKERSERVERID_OFFSET UNITYSDK_OFFSET(0xEFF600)
#define MX_TABLEBOARD_TBGENCOUNTERDB_SET_INVOKERSERVERID_OFFSET UNITYSDK_OFFSET(0xEFF610)
#define MX_TABLEBOARD_TBGENCOUNTERDB_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0xEFF620)
#define MX_TABLEBOARD_TBGENCOUNTERDB_SET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0xEFF630)
#define MX_TABLEBOARD_TBGENCOUNTERDB_GET_SHOULDDECREASEITEMEFFECTCOUNTER_OFFSET UNITYSDK_OFFSET(0xEFF640)
#define MX_TABLEBOARD_TBGENCOUNTERDB_SET_SHOULDDECREASEITEMEFFECTCOUNTER_OFFSET UNITYSDK_OFFSET(0xEFF650)
#define MX_TABLEBOARD_TBGENCOUNTERDB_GET_REWARDUNIQUEIDBYINDEX_OFFSET UNITYSDK_OFFSET(0xEFF660)
#define MX_TABLEBOARD_TBGENCOUNTERDB_SET_REWARDUNIQUEIDBYINDEX_OFFSET UNITYSDK_OFFSET(0xEFF670)
#define MX_TABLEBOARD_TBGENCOUNTERDB_CREATEENCOUNTERDB_OFFSET UNITYSDK_OFFSET(0xEFF680)
#define MX_TABLEBOARD_TBGENCOUNTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xEFF9C0)
#define MX_TABLEBOARD_TBGENCOUNTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xEFF9D0)
#define MX_TABLEBOARD_TBGENCOUNTERDB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TABLEBOARD_TBGENCOUNTERDB_PROCESSINPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TABLEBOARD_TBGENCOUNTERDB_GIVEENCOUNTERREWARD_OFFSET UNITYSDK_OFFSET(0xEFFA10)
#define MX_TABLEBOARD_TBGENCOUNTERDB_FINALIZE_OFFSET UNITYSDK_OFFSET(0xF00240)
#define MX_TABLEBOARD_TBGENCOUNTERDB_SETENCOUNTERREWARDS_OFFSET UNITYSDK_OFFSET(0xF00340)
#define MX_TABLEBOARD_TBGENCOUNTERDB_GETENCOUNTERRANDOMREWARDINFO_OFFSET UNITYSDK_OFFSET(0xF007B0)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGEncounterDB_TypeDefinitionIndex = 11185;

	class TBGEncounterDB : public Il2CppObject
	{
	public:
		::MX::Data::ITBGEncounterInfo* _encounterInfoCache; // 0x10
		::System::Int64 _EncounterId_k__BackingField; // 0x18
		::System::Int64 _InvokerServerId_k__BackingField; // 0x20
		::System::Int32 _ObjectType_k__BackingField; // 0x28
		::System::Boolean _ShouldDecreaseItemEffectCounter_k__BackingField; // 0x2C
		Il2CppObject* _RewardUniqueIdByIndex_k__BackingField; // 0x30

		::MX::Data::ITBGEncounterInfo* get_EncounterInfo()
		{
			return ((::MX::Data::ITBGEncounterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_GET_ENCOUNTERINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_EncounterRewardReceiveIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_GET_ENCOUNTERREWARDRECEIVEINDEX_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGEncounterState* get_EncounterState()
		{
			return ((::MX::TableBoard::TBGEncounterState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_GET_ENCOUNTERSTATE_OFFSET))(nullptr);
		}

		::System::Int32 get_EncounterStageCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_GET_ENCOUNTERSTAGECODE_OFFSET))(nullptr);
		}

		::System::Int64 get_EncounterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_GET_ENCOUNTERID_OFFSET))(nullptr);
		}

		::System::Void set_EncounterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_SET_ENCOUNTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_InvokerServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_GET_INVOKERSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_InvokerServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_SET_INVOKERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ObjectType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ObjectType(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_SET_OBJECTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShouldDecreaseItemEffectCounter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_GET_SHOULDDECREASEITEMEFFECTCOUNTER_OFFSET))(nullptr);
		}

		::System::Void set_ShouldDecreaseItemEffectCounter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_SET_SHOULDDECREASEITEMEFFECTCOUNTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardUniqueIdByIndex()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_GET_REWARDUNIQUEIDBYINDEX_OFFSET))(nullptr);
		}

		::System::Void set_RewardUniqueIdByIndex(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_SET_REWARDUNIQUEIDBYINDEX_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGEncounterDB* CreateEncounterDB(::MX::TableBoard::TBGHexaObjectDB* arg, ::MX::Data::ITBGObjectInfo* arg2)
		{
			return ((::MX::TableBoard::TBGEncounterDB*(*)(::MX::TableBoard::TBGHexaObjectDB*, ::MX::Data::ITBGObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_CREATEENCOUNTERDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::FlatData::TBGObjectType* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::FlatData::TBGObjectType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(::MX::TableBoard::TBGBoardSaveDB* arg, ::MX::TableBoard::TBGHexaObjectDB* arg2, ::MX::Data::ITBGObjectInfo* arg3)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::MX::TableBoard::TBGHexaObjectDB*, ::MX::Data::ITBGObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ProcessInput(::MX::Core::Math::IRandomService* arg, ::MX::TableBoard::TBGBoardSaveDB* arg2, ::System::Int32 arg3, ::System::String&* arg4)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::MX::TableBoard::TBGBoardSaveDB*, ::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_PROCESSINPUT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void GiveEncounterReward(::MX::TableBoard::TBGBoardSaveDB* arg, ::MX::TableBoard::TBGEncounterDB* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::MX::TableBoard::TBGEncounterDB*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_GIVEENCOUNTERREWARD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Finalize(::MX::TableBoard::TBGBoardSaveDB* arg, ::MX::TableBoard::TBGHexaObjectDB* arg2)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::MX::TableBoard::TBGHexaObjectDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_FINALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetEncounterRewards(::MX::Core::Math::IRandomService* arg, ::MX::TableBoard::TBGBoardSaveDB* arg2)
		{
			((::System::Void(*)(::MX::Core::Math::IRandomService*, ::MX::TableBoard::TBGBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_SETENCOUNTERREWARDS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Data::ITBGEncounterRewardInfo* GetEncounterRandomRewardInfo(::System::Int64 arg, ::MX::Core::Math::IRandomService* arg2, ::MX::TableBoard::TBGBoardSaveDB* arg3)
		{
			return ((::MX::Data::ITBGEncounterRewardInfo*(*)(::System::Int64, ::MX::Core::Math::IRandomService*, ::MX::TableBoard::TBGBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGENCOUNTERDB_GETENCOUNTERRANDOMREWARDINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

