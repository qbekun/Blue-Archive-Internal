#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CD4150)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CD4160)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4170)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidStageRewardDBSchema_TypeDefinitionIndex = 19837;

	class WorldRaidStageRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x20

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

