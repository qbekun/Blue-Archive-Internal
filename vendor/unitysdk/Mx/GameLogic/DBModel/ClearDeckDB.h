#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace MX::GameLogic::DBModel { class EchelonPresetDB; }

#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_SET_LEADERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFECA50)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_SET_CLEARDECKCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xFECA60)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_GET_LEADERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFECA70)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_SET_MULLIGANUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xFECA80)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_GET_TSSINTERACTIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFECA90)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_SET_TSSINTERACTIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFECAA0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xFECAB0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_SET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xFECAC0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFECAD0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xFECAE0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xFECAF0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_TOECHELONPRESETDB_OFFSET UNITYSDK_OFFSET(0xFECB00)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_GET_CLEARDECKCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xFED520)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKDB_GET_MULLIGANUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xFED530)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ClearDeckDB_TypeDefinitionIndex = 12528;

	class ClearDeckDB : public Il2CppObject
	{
	public:
		Il2CppObject* _ClearDeckCharacterDBs_k__BackingField; // 0x10
		Il2CppObject* _MulliganUniqueIds_k__BackingField; // 0x18
		::System::Int64 _LeaderUniqueId_k__BackingField; // 0x20
		::System::Int64 _TSSInteractionUniqueId_k__BackingField; // 0x28
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x30
		::System::Int64 _EchelonExtensionType_k__BackingField; // 0x38

		::System::Void set_LeaderUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_SET_LEADERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClearDeckCharacterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_SET_CLEARDECKCHARACTERDBS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LeaderUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_GET_LEADERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_MulliganUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_SET_MULLIGANUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TSSInteractionUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_GET_TSSINTERACTIONUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_TSSInteractionUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_SET_TSSINTERACTIONUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonExtensionType(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_SET_ECHELONEXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonExtensionType()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EchelonPresetDB* ToEchelonPresetDB(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::MX::GameLogic::DBModel::EchelonPresetDB*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_TOECHELONPRESETDB_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_ClearDeckCharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_GET_CLEARDECKCHARACTERDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_MulliganUniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKDB_GET_MULLIGANUNIQUEIDS_OFFSET))(nullptr);
		}

	};
}

