#pragma once
#include "unitysdk.h"

namespace FlatData { class EchelonType; }
namespace FlatData { class EchelonExtensionType; }
class SecureLong;
namespace MX::NetworkProtocol { class EchelonListResponse; }
namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace MX::Data { class StoryStrategyStageInfo; }
namespace MX::NetworkProtocol { class EchelonPresetListResponse; }
namespace MX::Logic::Data { class BattleSetting; }
namespace MX::GameLogic::DBModel { class EchelonPresetDB; }
namespace MX::GameLogic::DBModel { class EchelonPresetGroupDB; }
class EchelonObject;
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }

#define ECHELONLISTOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EE3240)
#define ECHELONLISTOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EE32D0)
#define ECHELONLISTOBJECT_GET_CURRENTLIST_OFFSET UNITYSDK_OFFSET(0x1EE3350)
#define ECHELONLISTOBJECT_GET_PRESETGROUPDBSBYEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1EE34F0)
#define ECHELONLISTOBJECT_SET_PRESETGROUPDBSBYEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1EE3500)
#define ECHELONLISTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EE3510)
#define ECHELONLISTOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EE35E0)
#define ECHELONLISTOBJECT_ANYONECONTAINSTARGETCHARACTER_OFFSET UNITYSDK_OFFSET(0x1EE46B0)
#define ECHELONLISTOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1EE4970)
#define ECHELONLISTOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1EE4A10)
#define ECHELONLISTOBJECT_SETFIXEDECHELONOBJECT_OFFSET UNITYSDK_OFFSET(0x1EE4FC0)
#define ECHELONLISTOBJECT_SETFIXEDECHELONOBJECT_OFFSET UNITYSDK_OFFSET(0x1EE55E0)
#define ECHELONLISTOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1EE56E0)
#define ECHELONLISTOBJECT_SAVERECENTBATTLEECHELON_OFFSET UNITYSDK_OFFSET(0x1EE5820)
#define ECHELONLISTOBJECT_CHANGEPRESETDB_OFFSET UNITYSDK_OFFSET(0x1EE59A0)
#define ECHELONLISTOBJECT_CHANGEPRESETGROUPDB_OFFSET UNITYSDK_OFFSET(0x1EE5AD0)
#define ECHELONLISTOBJECT_GETPRESETGROUPDBLABEL_OFFSET UNITYSDK_OFFSET(0x1EE5BF0)
#define ECHELONLISTOBJECT_GETPRESETDBLABEL_OFFSET UNITYSDK_OFFSET(0x1EE5D30)
#define ECHELONLISTOBJECT_GETECHELONPRESETDB_OFFSET UNITYSDK_OFFSET(0x1EE6030)
#define ECHELONLISTOBJECT_GETECHELON_OFFSET UNITYSDK_OFFSET(0x1EE61A0)
#define ECHELONLISTOBJECT_TRYGETECHELON_OFFSET UNITYSDK_OFFSET(0x1EE6280)
#define ECHELONLISTOBJECT_GETFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x1EE63C0)
#define ECHELONLISTOBJECT_GETECHELONNAME_OFFSET UNITYSDK_OFFSET(0x1EE6430)
#define ECHELONLISTOBJECT_MAKEHPINFOS_OFFSET UNITYSDK_OFFSET(0x1EE6680)
#define ECHELONLISTOBJECT_SETASSISTCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0x1EE6800)
#define ECHELONLISTOBJECT_GETLISTWITHOUTEMPTY_OFFSET UNITYSDK_OFFSET(0x1EE69C0)
#define ECHELONLISTOBJECT_CHECKANDOPENPRESETPOPUP_OFFSET UNITYSDK_OFFSET(0x1EE6D50)
#define ECHELONLISTOBJECT_CHECKANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1EE74E0)
#define ECHELONLISTOBJECT_CHECKANDEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EE6E20)
#define ECHELONLISTOBJECT_REMOVEOVERLAPPINGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1EE75E0)
#define ECHELONLISTOBJECT_CREATEECHELONIDSLOT_OFFSET UNITYSDK_OFFSET(0x1EE76A0)
#define ECHELONLISTOBJECT__SYNC_B__15_0_OFFSET UNITYSDK_OFFSET(0x1EE7700)

	inline static constexpr unsigned int EchelonListObject_TypeDefinitionIndex = 1867;

	class EchelonListObject : public Il2CppObject
	{
	public:
		Il2CppObject* container; // 0x10
		Il2CppObject* fixedEchelons; // 0x18
		Il2CppObject* _PresetGroupDBsByExtensionType_k__BackingField; // 0x20

		Il2CppObject* get_Item(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2)
		{
			return ((Il2CppObject*(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_GET_ITEM_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_Item(::FlatData::EchelonType* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_GET_ITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CurrentList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_GET_CURRENTLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_PresetGroupDBsByExtensionType()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_GET_PRESETGROUPDBSBYEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_PresetGroupDBsByExtensionType(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_SET_PRESETGROUPDBSBYEXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean AnyoneContainsTargetCharacter(SecureLong* arg)
		{
			return ((::System::Boolean(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_ANYONECONTAINSTARGETCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::EchelonListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EchelonListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void SetFixedEchelonObject(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_SETFIXEDECHELONOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetFixedEchelonObject(::MX::Data::StoryStrategyStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::StoryStrategyStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_SETFIXEDECHELONOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::EchelonPresetListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EchelonPresetListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void SaveRecentBattleEchelon(::FlatData::EchelonType* arg, ::MX::Logic::Data::BattleSetting* arg2)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_SAVERECENTBATTLEECHELON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ChangePresetDB(::MX::GameLogic::DBModel::EchelonPresetDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_CHANGEPRESETDB_OFFSET))(arg, nullptr);
		}

		::System::Void ChangePresetGroupDB(::MX::GameLogic::DBModel::EchelonPresetGroupDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetGroupDB*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_CHANGEPRESETGROUPDB_OFFSET))(arg, nullptr);
		}

		::System::String* GetPresetGroupDBLabel(::FlatData::EchelonExtensionType* arg, ::System::Int32 arg2)
		{
			return ((::System::String*(*)(::FlatData::EchelonExtensionType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_GETPRESETGROUPDBLABEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetPresetDBLabel(::FlatData::EchelonExtensionType* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::String*(*)(::FlatData::EchelonExtensionType*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_GETPRESETDBLABEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::EchelonPresetDB* GetEchelonPresetDB(::FlatData::EchelonExtensionType* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::MX::GameLogic::DBModel::EchelonPresetDB*(*)(::FlatData::EchelonExtensionType*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_GETECHELONPRESETDB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		EchelonObject* GetEchelon(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2, ::System::Int64 arg3)
		{
			return ((EchelonObject*(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_GETECHELON_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryGetEchelon(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2, ::System::Int64 arg3, EchelonObject&* arg4)
		{
			return ((::System::Boolean(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int64, EchelonObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_TRYGETECHELON_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		EchelonObject* GetFixedEchelon(::System::Int64 arg)
		{
			return ((EchelonObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_GETFIXEDECHELON_OFFSET))(arg, nullptr);
		}

		::System::String* GetEchelonName(::FlatData::EchelonType* arg)
		{
			return ((::System::String*(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_GETECHELONNAME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* MakeHpInfos(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			return ((Il2CppObject*(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_MAKEHPINFOS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetAssistCharacterInfo(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2, ::System::Int64 arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::MX::GameLogic::DBModel::AssistCharacterDB* arg6)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int64, ::System::Int32, ::System::Int32, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_SETASSISTCHARACTERINFO_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		Il2CppObject* GetListWithoutEmpty()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_GETLISTWITHOUTEMPTY_OFFSET))(nullptr);
		}

		::System::Void CheckAndOpenPresetPopup(::MX::GameLogic::DBModel::RaidTeamSettingDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_CHECKANDOPENPRESETPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void CheckAndApply(::MX::GameLogic::DBModel::RaidTeamSettingDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_CHECKANDAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void CheckAndExecute(::MX::GameLogic::DBModel::RaidTeamSettingDB* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_CHECKANDEXECUTE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* RemoveOverlappingCharacters(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_REMOVEOVERLAPPINGCHARACTERS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateEchelonIdSlot(::FlatData::EchelonExtensionType* arg, ::System::Boolean arg2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::FlatData::EchelonExtensionType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT_CREATEECHELONIDSLOT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _Sync_b__15_0(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONLISTOBJECT__SYNC_B__15_0_OFFSET))(arg, nullptr);
		}

	};

