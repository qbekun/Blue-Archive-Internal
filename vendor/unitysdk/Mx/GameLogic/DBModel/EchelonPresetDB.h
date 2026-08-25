#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonExtensionType; }
namespace MX::GameLogic::DBModel { class EchelonPresetDB; }
namespace MX::GameLogic::DBModel { class EchelonDB; }
class EchelonObject;
namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }

#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xFF88E0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xFF88F0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xFF8900)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xFF8910)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_LABEL_OFFSET UNITYSDK_OFFSET(0xFF8920)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_LABEL_OFFSET UNITYSDK_OFFSET(0xFF8930)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_LEADERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFF8940)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_LEADERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFF8950)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_TSSINTERACTIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFF8960)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_TSSINTERACTIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFF8970)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_STRIKERUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xFF8980)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_STRIKERUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xFF8990)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_SPECIALUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xFF89A0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_SPECIALUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xFF89B0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFF89C0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFF89D0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_MULLIGANUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xFF89E0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_MULLIGANUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xFF89F0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xFF8A00)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xFF8A10)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_STRIKERSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xFF8A20)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_SPECIALSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xFF8A40)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFF8790)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF8A60)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFED3E0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF8A70)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF9060)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_ISNOTEMPTY_OFFSET UNITYSDK_OFFSET(0xFFA2B0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_ISSAMEPRESET_OFFSET UNITYSDK_OFFSET(0xFFA4B0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_UPDATEPRESETDB_OFFSET UNITYSDK_OFFSET(0xFFA6C0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_UPDATEPRESETDB_OFFSET UNITYSDK_OFFSET(0xFFABC0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EchelonPresetDB_TypeDefinitionIndex = 12592;

	class EchelonPresetDB : public Il2CppObject
	{
	public:
		::System::Int32 _GroupIndex_k__BackingField; // 0x10
		::System::Int32 _Index_k__BackingField; // 0x14
		::System::String* _Label_k__BackingField; // 0x18
		::System::Int64 _LeaderUniqueId_k__BackingField; // 0x20
		::System::Int64 _TSSInteractionUniqueId_k__BackingField; // 0x28
		::Il2CppArray<::System::Object*>* _StrikerUniqueIds_k__BackingField; // 0x30
		::Il2CppArray<::System::Object*>* _SpecialUniqueIds_k__BackingField; // 0x38
		::Il2CppArray<::System::Object*>* _CombatStyleIndex_k__BackingField; // 0x40
		Il2CppObject* _MulliganUniqueIds_k__BackingField; // 0x48
		::FlatData::EchelonExtensionType* _ExtensionType_k__BackingField; // 0x50

		::System::Int32 get_GroupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_GROUPINDEX_OFFSET))(nullptr);
		}

		::System::Void set_GroupIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_GROUPINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::String* get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_LABEL_OFFSET))(nullptr);
		}

		::System::Void set_Label(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_LABEL_OFFSET))(str, nullptr);
		}

		::System::Int64 get_LeaderUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_LEADERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_LeaderUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_LEADERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TSSInteractionUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_TSSINTERACTIONUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_TSSInteractionUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_TSSINTERACTIONUNIQUEID_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_StrikerUniqueIds()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_STRIKERUNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void set_StrikerUniqueIds(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_STRIKERUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SpecialUniqueIds()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_SPECIALUNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void set_SpecialUniqueIds(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_SPECIALUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CombatStyleIndex()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_COMBATSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_CombatStyleIndex(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_COMBATSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MulliganUniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_MULLIGANUNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void set_MulliganUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_MULLIGANUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonExtensionType* get_ExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_SET_EXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StrikerSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_STRIKERSLOTCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_SpecialSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_GET_SPECIALSLOTCOUNT_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EchelonPresetDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::EchelonPresetDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::FlatData::EchelonExtensionType* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::FlatData::EchelonExtensionType* arg3, ::Il2CppArray<::System::Object*>* arg4, ::Il2CppArray<::System::Object*>* arg5, ::System::Int64 arg6, ::System::Int64 arg7, ::Il2CppArray<::System::Object*>* arg8, ::Il2CppArray<::System::Object*>* arg9)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::FlatData::EchelonExtensionType*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::MX::GameLogic::DBModel::EchelonDB* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::MX::GameLogic::DBModel::EchelonDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean IsNotEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_ISNOTEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean IsSamePreset(::MX::GameLogic::DBModel::EchelonPresetDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_ISSAMEPRESET_OFFSET))(arg, nullptr);
		}

		::System::Void UpdatePresetDB(EchelonObject* arg)
		{
			((::System::Void(*)(EchelonObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_UPDATEPRESETDB_OFFSET))(arg, nullptr);
		}

		::System::Void UpdatePresetDB(::MX::GameLogic::DBModel::RaidTeamSettingDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETDB_UPDATEPRESETDB_OFFSET))(arg, nullptr);
		}

	};
}

