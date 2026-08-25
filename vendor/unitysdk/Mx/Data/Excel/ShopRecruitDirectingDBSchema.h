#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class GachaPhase; }

#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGDBSCHEMA_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x1C7D500)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D510)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGDBSCHEMA_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1C7D520)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopRecruitDirectingDBSchema_TypeDefinitionIndex = 19420;

	class ShopRecruitDirectingDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::GachaPhase* _Phase_k__BackingField; // 0x20

		::System::Void set_Phase(::FlatData::GachaPhase* arg)
		{
			((::System::Void(*)(::FlatData::GachaPhase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGDBSCHEMA_SET_PHASE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::GachaPhase* get_Phase()
		{
			return (return (::FlatData::GachaPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGDBSCHEMA_GET_PHASE_OFFSET))(nullptr);
		}

	};
}

