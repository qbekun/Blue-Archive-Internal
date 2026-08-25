#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKDBSCHEMA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x198A8D0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKDBSCHEMA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x198A8E0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x198A8F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyLocationRankDBSchema_TypeDefinitionIndex = 16573;

	class AcademyLocationRankDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Rank_k__BackingField; // 0x20

		::System::Int64 get_Rank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKDBSCHEMA_GET_RANK_OFFSET))(nullptr);
		}

		::System::Void set_Rank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKDBSCHEMA_SET_RANK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

