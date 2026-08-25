#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FAVORLEVELREWARDDBSCHEMA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B1B040)
#define MX_DATA_EXCEL_FAVORLEVELREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B050)
#define MX_DATA_EXCEL_FAVORLEVELREWARDDBSCHEMA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B1B060)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FavorLevelRewardDBSchema_TypeDefinitionIndex = 17955;

	class FavorLevelRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x20

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDDBSCHEMA_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDDBSCHEMA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

	};
}

