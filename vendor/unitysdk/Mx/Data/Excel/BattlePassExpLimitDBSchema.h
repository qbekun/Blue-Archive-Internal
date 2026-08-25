#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITDBSCHEMA_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E28F0)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19E2900)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITDBSCHEMA_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E2910)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassExpLimitDBSchema_TypeDefinitionIndex = 16735;

	class BattlePassExpLimitDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _BattlePassId_k__BackingField; // 0x20

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITDBSCHEMA_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITDBSCHEMA_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

	};
}

