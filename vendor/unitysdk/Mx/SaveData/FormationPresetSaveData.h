#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EchelonExtensionType; }
namespace MX::GameLogic::DBModel { class EchelonPresetDB&; }
namespace FlatData { class EchelonType; }
namespace MX::GameLogic::DBModel { class EchelonPresetDB; }

#define MX_SAVEDATA_FORMATIONPRESETSAVEDATA_TRYGETRECENTPRESETDB_OFFSET UNITYSDK_OFFSET(0x1D00AD0)
#define MX_SAVEDATA_FORMATIONPRESETSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D00B90)
#define MX_SAVEDATA_FORMATIONPRESETSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D00C80)
#define MX_SAVEDATA_FORMATIONPRESETSAVEDATA_SAVERECENTBATTLEECHELON_OFFSET UNITYSDK_OFFSET(0x1D01350)
#define MX_SAVEDATA_FORMATIONPRESETSAVEDATA_CHECKSAMEPRESETDB_OFFSET UNITYSDK_OFFSET(0x1D01650)
#define MX_SAVEDATA_FORMATIONPRESETSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D01BC0)
#define MX_SAVEDATA_FORMATIONPRESETSAVEDATA_GET_RECENTPRESETS_OFFSET UNITYSDK_OFFSET(0x1D01F50)
#define MX_SAVEDATA_FORMATIONPRESETSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D00C00)
#define MX_SAVEDATA_FORMATIONPRESETSAVEDATA_SET_RECENTPRESETS_OFFSET UNITYSDK_OFFSET(0x1D01F60)

namespace MX::SaveData
{
	inline static constexpr unsigned int FormationPresetSaveData_TypeDefinitionIndex = 19973;

	class FormationPresetSaveData : public Il2CppObject
	{
	public:
		::System::Int32 recentTabIndex; // 0x0
		Il2CppObject* _RecentPresets_k__BackingField; // 0x10

		::System::Boolean TryGetRecentPresetDB(::FlatData::EchelonExtensionType* arg, ::System::Int32 arg, ::MX::GameLogic::DBModel::EchelonPresetDB&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::EchelonExtensionType*, ::System::Int32, ::MX::GameLogic::DBModel::EchelonPresetDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONPRESETSAVEDATA_TRYGETRECENTPRESETDB_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONPRESETSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONPRESETSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void SaveRecentBattleEchelon(EchelonObject* arg, ::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(EchelonObject*, ::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONPRESETSAVEDATA_SAVERECENTBATTLEECHELON_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CheckSamePresetDB(::MX::GameLogic::DBModel::EchelonPresetDB* arg)
		{
			return (return (::System::Int32(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONPRESETSAVEDATA_CHECKSAMEPRESETDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONPRESETSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_RecentPresets()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONPRESETSAVEDATA_GET_RECENTPRESETS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONPRESETSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RecentPresets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONPRESETSAVEDATA_SET_RECENTPRESETS_OFFSET))(arg, nullptr);
		}

	};
}

