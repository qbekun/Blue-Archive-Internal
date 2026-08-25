#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C93540)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONDBSCHEMA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C93550)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONDBSCHEMA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C93560)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StatLevelInterpolationDBSchema_TypeDefinitionIndex = 19531;

	class StatLevelInterpolationDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Level_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Level()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONDBSCHEMA_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONDBSCHEMA_SET_LEVEL_OFFSET))(arg, nullptr);
		}

	};
}

