#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class GuideMissionSeasonDB; }
namespace MX::Data { class GuideMissionSeasonInfo; }
class GuideMissionSeasonContent;

#define GUIDEMISSIONSEASONCONTENT_GET_ISCLEARALL_OFFSET UNITYSDK_OFFSET(0x1EB6880)
#define GUIDEMISSIONSEASONCONTENT_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x1EB6A10)
#define GUIDEMISSIONSEASONCONTENT_CHECKPRESEASONCLEAR_OFFSET UNITYSDK_OFFSET(0x1EB6A20)
#define GUIDEMISSIONSEASONCONTENT_SET_ISPRESEASONCLEAR_OFFSET UNITYSDK_OFFSET(0x1EB6E00)
#define GUIDEMISSIONSEASONCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6E10)
#define GUIDEMISSIONSEASONCONTENT_GET_NEEDSREFRESH_OFFSET UNITYSDK_OFFSET(0x1EB6E60)
#define GUIDEMISSIONSEASONCONTENT_SET_NEEDSREFRESH_OFFSET UNITYSDK_OFFSET(0x1EB6E70)
#define GUIDEMISSIONSEASONCONTENT_SET_SEASONDB_OFFSET UNITYSDK_OFFSET(0x1EB6E80)
#define GUIDEMISSIONSEASONCONTENT_SETDB_OFFSET UNITYSDK_OFFSET(0x1EB6E90)
#define GUIDEMISSIONSEASONCONTENT_GET_ISPRESEASONCLEAR_OFFSET UNITYSDK_OFFSET(0x1EB6ED0)
#define GUIDEMISSIONSEASONCONTENT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1EB6EC0)
#define GUIDEMISSIONSEASONCONTENT__CHECKPRESEASONCLEAR_B__20_0_OFFSET UNITYSDK_OFFSET(0x1EB6EE0)
#define GUIDEMISSIONSEASONCONTENT_GET_SEASONDB_OFFSET UNITYSDK_OFFSET(0x1EB6F20)

	inline static constexpr unsigned int GuideMissionSeasonContent_TypeDefinitionIndex = 1726;

	class GuideMissionSeasonContent : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::GuideMissionSeasonDB* _SeasonDB_k__BackingField; // 0x10
		::System::Boolean _IsPreseasonClear_k__BackingField; // 0x18
		::System::Boolean _NeedsRefresh_k__BackingField; // 0x19
		::MX::Data::GuideMissionSeasonInfo* _SeasonInfo_k__BackingField; // 0x20

		::System::Boolean get_IsClearAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONCONTENT_GET_ISCLEARALL_OFFSET))(nullptr);
		}

		::MX::Data::GuideMissionSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::GuideMissionSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONCONTENT_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Boolean CheckPreSeasonClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONCONTENT_CHECKPRESEASONCLEAR_OFFSET))(nullptr);
		}

		::System::Void set_IsPreseasonClear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONCONTENT_SET_ISPRESEASONCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::GuideMissionSeasonInfo* arg, ::MX::GameLogic::DBModel::GuideMissionSeasonDB* arg2)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::MX::GameLogic::DBModel::GuideMissionSeasonDB*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONCONTENT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_NeedsRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONCONTENT_GET_NEEDSREFRESH_OFFSET))(nullptr);
		}

		::System::Void set_NeedsRefresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONCONTENT_SET_NEEDSREFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonDB(::MX::GameLogic::DBModel::GuideMissionSeasonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GuideMissionSeasonDB*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONCONTENT_SET_SEASONDB_OFFSET))(arg, nullptr);
		}

		::System::Void SetDB(::MX::GameLogic::DBModel::GuideMissionSeasonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GuideMissionSeasonDB*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONCONTENT_SETDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPreseasonClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONCONTENT_GET_ISPRESEASONCLEAR_OFFSET))(nullptr);
		}

		::System::Void SetDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONCONTENT_SETDIRTY_OFFSET))(nullptr);
		}

		::System::Boolean _CheckPreSeasonClear_b__20_0(GuideMissionSeasonContent* arg)
		{
			return ((::System::Boolean(*)(GuideMissionSeasonContent*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONCONTENT__CHECKPRESEASONCLEAR_B__20_0_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::GuideMissionSeasonDB* get_SeasonDB()
		{
			return ((::MX::GameLogic::DBModel::GuideMissionSeasonDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONCONTENT_GET_SEASONDB_OFFSET))(nullptr);
		}

	};

