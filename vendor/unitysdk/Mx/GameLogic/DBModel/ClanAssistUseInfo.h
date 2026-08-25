#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace MX::GameLogic::DBModel { class AssistRelation; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }

#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_CHARACTERACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFEBA80)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_CHARACTERACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFEBA90)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xFEBAA0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xFEBAB0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xFEBAC0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xFEBAD0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xFEBAE0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xFEBAF0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_ASSISTRELATION_OFFSET UNITYSDK_OFFSET(0xFEBB00)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_ASSISTRELATION_OFFSET UNITYSDK_OFFSET(0xFEBB10)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_ECHELONSLOTTYPE_OFFSET UNITYSDK_OFFSET(0xFEBB20)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_ECHELONSLOTTYPE_OFFSET UNITYSDK_OFFSET(0xFEBB30)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_ECHELONSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xFEBB40)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_ECHELONSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xFEBB50)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFEBB60)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFEBB70)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_DECODEDSHARDID_OFFSET UNITYSDK_OFFSET(0xFEBB80)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_DECODEDCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xFEBB90)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_ISMULLIGAN_OFFSET UNITYSDK_OFFSET(0xFEBBA0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_ISMULLIGAN_OFFSET UNITYSDK_OFFSET(0xFEBBB0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_ISTSAINTERACTION_OFFSET UNITYSDK_OFFSET(0xFEBBC0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_ISTSAINTERACTION_OFFSET UNITYSDK_OFFSET(0xFEBBD0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEBBE0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEBBF0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEBC90)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEBD20)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ClanAssistUseInfo_TypeDefinitionIndex = 12522;

	class ClanAssistUseInfo : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterAccountId_k__BackingField; // 0x10
		::System::Int64 _CharacterDBId_k__BackingField; // 0x18
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x20
		::System::Int32 _SlotNumber_k__BackingField; // 0x24
		::MX::GameLogic::DBModel::AssistRelation* _AssistRelation_k__BackingField; // 0x28
		::System::Int32 _EchelonSlotType_k__BackingField; // 0x2C
		::System::Int32 _EchelonSlotIndex_k__BackingField; // 0x30
		::System::Int32 _CombatStyleIndex_k__BackingField; // 0x34
		::System::Boolean _IsMulligan_k__BackingField; // 0x38
		::System::Boolean _IsTSAInteraction_k__BackingField; // 0x39

		::System::Int64 get_CharacterAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_CHARACTERACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_CHARACTERACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_CHARACTERDBID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_CHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_SlotNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_SLOTNUMBER_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AssistRelation* get_AssistRelation()
		{
			return ((::MX::GameLogic::DBModel::AssistRelation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_ASSISTRELATION_OFFSET))(nullptr);
		}

		::System::Void set_AssistRelation(::MX::GameLogic::DBModel::AssistRelation* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistRelation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_ASSISTRELATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EchelonSlotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_ECHELONSLOTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonSlotType(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_ECHELONSLOTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EchelonSlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_ECHELONSLOTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_EchelonSlotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_ECHELONSLOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CombatStyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_COMBATSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_CombatStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_COMBATSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DecodedShardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_DECODEDSHARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_DecodedCharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_DECODEDCHARACTERDBID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMulligan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_ISMULLIGAN_OFFSET))(nullptr);
		}

		::System::Void set_IsMulligan(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_ISMULLIGAN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTSAInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_GET_ISTSAINTERACTION_OFFSET))(nullptr);
		}

		::System::Void set_IsTSAInteraction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_SET_ISTSAINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::FlatData::EchelonType* arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::MX::GameLogic::DBModel::AssistRelation* arg7, ::System::Boolean arg8, ::System::Boolean arg9, ::System::Int32 arg10)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::FlatData::EchelonType*, ::System::Int32, ::System::Int32, ::System::Int32, ::MX::GameLogic::DBModel::AssistRelation*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::AssistCharacterDB* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTUSEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

