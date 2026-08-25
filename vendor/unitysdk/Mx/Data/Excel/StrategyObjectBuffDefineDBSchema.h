#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C991F0)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEDBSCHEMA_SET_STRATEGYOBJECTBUFFID_OFFSET UNITYSDK_OFFSET(0x1C99200)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEDBSCHEMA_GET_STRATEGYOBJECTBUFFID_OFFSET UNITYSDK_OFFSET(0x1C99210)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StrategyObjectBuffDefineDBSchema_TypeDefinitionIndex = 19559;

	class StrategyObjectBuffDefineDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _StrategyObjectBuffID_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StrategyObjectBuffID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEDBSCHEMA_SET_STRATEGYOBJECTBUFFID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StrategyObjectBuffID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEDBSCHEMA_GET_STRATEGYOBJECTBUFFID_OFFSET))(nullptr);
		}

	};
}

