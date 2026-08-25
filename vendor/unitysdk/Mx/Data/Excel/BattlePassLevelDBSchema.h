#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BATTLEPASSLEVELDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19E69A0)
#define MX_DATA_EXCEL_BATTLEPASSLEVELDBSCHEMA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19E69B0)
#define MX_DATA_EXCEL_BATTLEPASSLEVELDBSCHEMA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19E69C0)
#define MX_DATA_EXCEL_BATTLEPASSLEVELDBSCHEMA_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E69D0)
#define MX_DATA_EXCEL_BATTLEPASSLEVELDBSCHEMA_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E69E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassLevelDBSchema_TypeDefinitionIndex = 16756;

	class BattlePassLevelDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _BattlePassId_k__BackingField; // 0x20
		::System::Int64 _Level_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELDBSCHEMA_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Level()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELDBSCHEMA_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELDBSCHEMA_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELDBSCHEMA_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

	};
}

