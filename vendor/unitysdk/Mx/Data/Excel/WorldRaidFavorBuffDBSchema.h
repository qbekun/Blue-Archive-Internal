#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFDBSCHEMA_GET_WORLDRAIDFAVORRANK_OFFSET UNITYSDK_OFFSET(0x1CCD080)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD090)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFDBSCHEMA_SET_WORLDRAIDFAVORRANK_OFFSET UNITYSDK_OFFSET(0x1CCD0A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidFavorBuffDBSchema_TypeDefinitionIndex = 19813;

	class WorldRaidFavorBuffDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _WorldRaidFavorRank_k__BackingField; // 0x20

		::System::Int64 get_WorldRaidFavorRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFDBSCHEMA_GET_WORLDRAIDFAVORRANK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_WorldRaidFavorRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFDBSCHEMA_SET_WORLDRAIDFAVORRANK_OFFSET))(arg, nullptr);
		}

	};
}

