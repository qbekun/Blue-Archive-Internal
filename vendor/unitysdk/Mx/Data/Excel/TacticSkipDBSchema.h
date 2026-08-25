#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TACTICSKIPDBSCHEMA_GET_LEVELDIFF_OFFSET UNITYSDK_OFFSET(0x1C9D4A0)
#define MX_DATA_EXCEL_TACTICSKIPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D4B0)
#define MX_DATA_EXCEL_TACTICSKIPDBSCHEMA_SET_LEVELDIFF_OFFSET UNITYSDK_OFFSET(0x1C9D4C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TacticSkipDBSchema_TypeDefinitionIndex = 19580;

	class TacticSkipDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int32 _LevelDiff_k__BackingField; // 0x20

		::System::Int32 get_LevelDiff()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPDBSCHEMA_GET_LEVELDIFF_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_LevelDiff(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPDBSCHEMA_SET_LEVELDIFF_OFFSET))(arg, nullptr);
		}

	};
}

