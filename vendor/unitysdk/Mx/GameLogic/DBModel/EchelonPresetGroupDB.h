#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonExtensionType; }
namespace MX::GameLogic::DBModel { class EchelonPresetGroupDB; }
namespace MX::GameLogic::DBModel { class EchelonPresetDB; }

#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xFF8210)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_SET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xFF8220)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xFF8230)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_SET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xFF8240)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_GET_GROUPLABEL_OFFSET UNITYSDK_OFFSET(0xFF8250)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_SET_GROUPLABEL_OFFSET UNITYSDK_OFFSET(0xFF8260)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_GET_PRESETDBS_OFFSET UNITYSDK_OFFSET(0xFF8270)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_SET_PRESETDBS_OFFSET UNITYSDK_OFFSET(0xFF8280)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFF8290)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF85B0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF8510)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xFF85C0)
#define MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xFF8630)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EchelonPresetGroupDB_TypeDefinitionIndex = 12585;

	class EchelonPresetGroupDB : public Il2CppObject
	{
	public:
		::System::Int32 _GroupIndex_k__BackingField; // 0x10
		::FlatData::EchelonExtensionType* _ExtensionType_k__BackingField; // 0x14
		::System::String* _GroupLabel_k__BackingField; // 0x18
		Il2CppObject* _PresetDBs_k__BackingField; // 0x20

		::System::Int32 get_GroupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_GET_GROUPINDEX_OFFSET))(nullptr);
		}

		::System::Void set_GroupIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_SET_GROUPINDEX_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonExtensionType* get_ExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_SET_EXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_GroupLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_GET_GROUPLABEL_OFFSET))(nullptr);
		}

		::System::Void set_GroupLabel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_SET_GROUPLABEL_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_PresetDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_GET_PRESETDBS_OFFSET))(nullptr);
		}

		::System::Void set_PresetDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_SET_PRESETDBS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EchelonPresetGroupDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::EchelonPresetGroupDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::FlatData::EchelonExtensionType* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::EchelonPresetDB* get_Item(::System::Int32 arg)
		{
			return ((::MX::GameLogic::DBModel::EchelonPresetDB*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::MX::GameLogic::DBModel::EchelonPresetDB* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::GameLogic::DBModel::EchelonPresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONPRESETGROUPDB_SET_ITEM_OFFSET))(arg, arg2, nullptr);
		}

	};
}

