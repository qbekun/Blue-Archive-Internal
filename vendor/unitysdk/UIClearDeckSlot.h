#pragma once
#include "unitysdk.h"

class ButtonActivator;
namespace UnityEngine { class Transform; }
namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }

#define UICLEARDECKSLOT_GET_RAIDTEAMSETTINGDB_OFFSET UNITYSDK_OFFSET(0x26FE5B0)
#define UICLEARDECKSLOT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x26FE5C0)
#define UICLEARDECKSLOT_ONCLICKOPENPRESET_OFFSET UNITYSDK_OFFSET(0x26FE6F0)
#define UICLEARDECKSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x26FE790)
#define UICLEARDECKSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FE880)
#define UICLEARDECKSLOT_SET_RAIDTEAMSETTINGDB_OFFSET UNITYSDK_OFFSET(0x26FE890)
#define UICLEARDECKSLOT_GET_ISEXTENTIONTYPE_OFFSET UNITYSDK_OFFSET(0x26FE8A0)
#define UICLEARDECKSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x26FE8B0)
#define UICLEARDECKSLOT_ONCLICKAPPLY_OFFSET UNITYSDK_OFFSET(0x26FEAC0)

	inline static constexpr unsigned int UIClearDeckSlot_TypeDefinitionIndex = 7063;

	class UIClearDeckSlot : public Il2CppObject
	{
	public:
		::System::Boolean isExtentionType; // 0x18
		::Il2CppArray<::System::Object*>* mainCards; // 0x20
		::Il2CppArray<::System::Object*>* supporterCards; // 0x28
		ButtonActivator* openPreset; // 0x30
		ButtonActivator* apply; // 0x38
		::UnityEngine::Transform* applyRoot; // 0x40
		::MX::GameLogic::DBModel::RaidTeamSettingDB* _RaidTeamSettingDB_k__BackingField; // 0x48

		::MX::GameLogic::DBModel::RaidTeamSettingDB* get_RaidTeamSettingDB()
		{
			return ((::MX::GameLogic::DBModel::RaidTeamSettingDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKSLOT_GET_RAIDTEAMSETTINGDB_OFFSET))(nullptr);
		}

		::System::Void SetEmpty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKSLOT_SETEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOpenPreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKSLOT_ONCLICKOPENPRESET_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Boolean arg, ::MX::GameLogic::DBModel::RaidTeamSettingDB* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKSLOT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RaidTeamSettingDB(::MX::GameLogic::DBModel::RaidTeamSettingDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKSLOT_SET_RAIDTEAMSETTINGDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsExtentionType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKSLOT_GET_ISEXTENTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickApply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKSLOT_ONCLICKAPPLY_OFFSET))(nullptr);
		}

	};

