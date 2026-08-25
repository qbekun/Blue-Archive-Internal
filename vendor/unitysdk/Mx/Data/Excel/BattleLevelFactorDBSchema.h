#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BATTLELEVELFACTORDBSCHEMA_GET_LEVELDIFF_OFFSET UNITYSDK_OFFSET(0x19E1740)
#define MX_DATA_EXCEL_BATTLELEVELFACTORDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19E1750)
#define MX_DATA_EXCEL_BATTLELEVELFACTORDBSCHEMA_SET_LEVELDIFF_OFFSET UNITYSDK_OFFSET(0x19E1760)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattleLevelFactorDBSchema_TypeDefinitionIndex = 16728;

	class BattleLevelFactorDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int32 _LevelDiff_k__BackingField; // 0x20

		::System::Int32 get_LevelDiff()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTORDBSCHEMA_GET_LEVELDIFF_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTORDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_LevelDiff(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTORDBSCHEMA_SET_LEVELDIFF_OFFSET))(arg, nullptr);
		}

	};
}

