#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class GachaPhase; }

#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCELREPOSITORY_SELECT_PHASE_OFFSET UNITYSDK_OFFSET(0x1C7D530)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCELREPOSITORY_SELECT_PHASES_OFFSET UNITYSDK_OFFSET(0x1C7D880)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C7DC80)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCELREPOSITORY_SELECTFIRST_PHASE_OFFSET UNITYSDK_OFFSET(0x1C7DCC0)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C7E020)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopRecruitDirectingExcelRepository_TypeDefinitionIndex = 19425;

	class ShopRecruitDirectingExcelRepository : public ::MXUnderCover::UCPathVertex
	{
	public:
		Il2CppObject* Select_Phase(::FlatData::GachaPhase* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::GachaPhase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCELREPOSITORY_SELECT_PHASE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Phases(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCELREPOSITORY_SELECT_PHASES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Phase(::FlatData::GachaPhase* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::GachaPhase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCELREPOSITORY_SELECTFIRST_PHASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

