#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }

#define CLEARDECKGROUPDECKINFO_GET_RAIDTEAMSETTINGDB_OFFSET UNITYSDK_OFFSET(0x26FDC60)
#define CLEARDECKGROUPDECKINFO_SET_ISFINAL_OFFSET UNITYSDK_OFFSET(0x26FDC70)
#define CLEARDECKGROUPDECKINFO_SET_TRYNUMBER_OFFSET UNITYSDK_OFFSET(0x26FDC80)
#define CLEARDECKGROUPDECKINFO_GET_ISFINAL_OFFSET UNITYSDK_OFFSET(0x26FDC90)
#define CLEARDECKGROUPDECKINFO_SET_RAIDTEAMSETTINGDB_OFFSET UNITYSDK_OFFSET(0x26FDCA0)
#define CLEARDECKGROUPDECKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FDCB0)
#define CLEARDECKGROUPDECKINFO_GET_TRYNUMBER_OFFSET UNITYSDK_OFFSET(0x26FDCC0)

	inline static constexpr unsigned int ClearDeckGroupDeckInfo_TypeDefinitionIndex = 7059;

	class ClearDeckGroupDeckInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::RaidTeamSettingDB* _RaidTeamSettingDB_k__BackingField; // 0x10
		::System::Int32 _TryNumber_k__BackingField; // 0x18
		::System::Boolean _IsFinal_k__BackingField; // 0x1C

		::MX::GameLogic::DBModel::RaidTeamSettingDB* get_RaidTeamSettingDB()
		{
			return ((::MX::GameLogic::DBModel::RaidTeamSettingDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKGROUPDECKINFO_GET_RAIDTEAMSETTINGDB_OFFSET))(nullptr);
		}

		::System::Void set_IsFinal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKGROUPDECKINFO_SET_ISFINAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_TryNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKGROUPDECKINFO_SET_TRYNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFinal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKGROUPDECKINFO_GET_ISFINAL_OFFSET))(nullptr);
		}

		::System::Void set_RaidTeamSettingDB(::MX::GameLogic::DBModel::RaidTeamSettingDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKGROUPDECKINFO_SET_RAIDTEAMSETTINGDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKGROUPDECKINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_TryNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKGROUPDECKINFO_GET_TRYNUMBER_OFFSET))(nullptr);
		}

	};

