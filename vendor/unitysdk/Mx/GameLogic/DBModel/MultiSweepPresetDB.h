#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_GET_PRESETID_OFFSET UNITYSDK_OFFSET(0x1005670)
#define MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_GET_STAGEIDS_OFFSET UNITYSDK_OFFSET(0x1005680)
#define MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_SET_PRESETID_OFFSET UNITYSDK_OFFSET(0x1005690)
#define MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_SET_STAGEIDS_OFFSET UNITYSDK_OFFSET(0x10056A0)
#define MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_SET_PARCELIDS_OFFSET UNITYSDK_OFFSET(0x10056B0)
#define MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_GET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0x10056C0)
#define MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10056D0)
#define MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_SET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0x10056E0)
#define MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_GET_PARCELIDS_OFFSET UNITYSDK_OFFSET(0x10056F0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MultiSweepPresetDB_TypeDefinitionIndex = 12669;

	class MultiSweepPresetDB : public Il2CppObject
	{
	public:
		::System::Int64 _PresetId_k__BackingField; // 0x10
		::System::String* _PresetName_k__BackingField; // 0x18
		Il2CppObject* _StageIds_k__BackingField; // 0x20
		Il2CppObject* _ParcelIds_k__BackingField; // 0x28

		::System::Int64 get_PresetId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_GET_PRESETID_OFFSET))(nullptr);
		}

		Il2CppObject* get_StageIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_GET_STAGEIDS_OFFSET))(nullptr);
		}

		::System::Void set_PresetId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_SET_PRESETID_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_SET_STAGEIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_SET_PARCELIDS_OFFSET))(arg, nullptr);
		}

		::System::String* get_PresetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_GET_PRESETNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PresetName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_SET_PRESETNAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_ParcelIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTISWEEPPRESETDB_GET_PARCELIDS_OFFSET))(nullptr);
		}

	};
}

