#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19EB380)
#define MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_GET_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x19EB390)
#define MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19EB3A0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x19EB3B0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19EB3C0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_SET_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x19EB3D0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19EB3E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassRewardDBSchema_TypeDefinitionIndex = 16776;

	class BattlePassRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _RewardGroupId_k__BackingField; // 0x28
		::System::Int64 _Level_k__BackingField; // 0x30

		::System::Int64 get_Level()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_GET_REWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RewardGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_SET_REWARDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

