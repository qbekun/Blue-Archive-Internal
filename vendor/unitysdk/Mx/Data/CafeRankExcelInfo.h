#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CafeRankExcel; }
namespace MX::Data::Excel { class CafeProductionExcel; }

#define MX_DATA_CAFERANKEXCELINFO_GET_COMFORTMAX_OFFSET UNITYSDK_OFFSET(0x18322C0)
#define MX_DATA_CAFERANKEXCELINFO_GET_CAFEVISITWEIGHTBASE_OFFSET UNITYSDK_OFFSET(0x18322E0)
#define MX_DATA_CAFERANKEXCELINFO_GET_PRODUCTIONINFOS_OFFSET UNITYSDK_OFFSET(0x1832300)
#define MX_DATA_CAFERANKEXCELINFO_SET__TAGMATCHCOUNTSECTIONS_OFFSET UNITYSDK_OFFSET(0x1832310)
#define MX_DATA_CAFERANKEXCELINFO_GET_CAFEID_OFFSET UNITYSDK_OFFSET(0x1832320)
#define MX_DATA_CAFERANKEXCELINFO_SET__EXCEL_OFFSET UNITYSDK_OFFSET(0x1832340)
#define MX_DATA_CAFERANKEXCELINFO_GET_TAGCOUNTMAX_OFFSET UNITYSDK_OFFSET(0x1832360)
#define MX_DATA_CAFERANKEXCELINFO_GET_CHARACTERVISITMAX_OFFSET UNITYSDK_OFFSET(0x1832380)
#define MX_DATA_CAFERANKEXCELINFO__.CTOR_B__28_1_OFFSET UNITYSDK_OFFSET(0x18323A0)
#define MX_DATA_CAFERANKEXCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1832430)
#define MX_DATA_CAFERANKEXCELINFO_SET_PRODUCTIONINFOS_OFFSET UNITYSDK_OFFSET(0x18329E0)
#define MX_DATA_CAFERANKEXCELINFO_GET__TAGMATCHCOUNTSECTIONS_OFFSET UNITYSDK_OFFSET(0x18329F0)
#define MX_DATA_CAFERANKEXCELINFO_GET_CHARACTERVISITMIN_OFFSET UNITYSDK_OFFSET(0x1832A00)
#define MX_DATA_CAFERANKEXCELINFO_GETTAGMATCHBONUS_OFFSET UNITYSDK_OFFSET(0x1832A20)
#define MX_DATA_CAFERANKEXCELINFO_GET_RECIPEID_OFFSET UNITYSDK_OFFSET(0x1832B40)
#define MX_DATA_CAFERANKEXCELINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1832410)
#define MX_DATA_CAFERANKEXCELINFO_GET__EXCEL_OFFSET UNITYSDK_OFFSET(0x1832B60)

namespace MX::Data
{
	inline static constexpr unsigned int CafeRankExcelInfo_TypeDefinitionIndex = 15734;

	class CafeRankExcelInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _ProductionInfos_k__BackingField; // 0x10
		Il2CppObject* __tagMatchCountSections_k__BackingField; // 0x18
		::MX::Data::Excel::CafeRankExcel* __excel_k__BackingField; // 0x20

		::System::Int64 get_ComfortMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_GET_COMFORTMAX_OFFSET))(nullptr);
		}

		::System::Int32 get_CafeVisitWeightBase()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_GET_CAFEVISITWEIGHTBASE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProductionInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_GET_PRODUCTIONINFOS_OFFSET))(nullptr);
		}

		::System::Void set__tagMatchCountSections(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_SET__TAGMATCHCOUNTSECTIONS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CafeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_GET_CAFEID_OFFSET))(nullptr);
		}

		::System::Void set__excel(::MX::Data::Excel::CafeRankExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CafeRankExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_SET__EXCEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TagCountMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_GET_TAGCOUNTMAX_OFFSET))(nullptr);
		}

		::System::Int32 get_CharacterVisitMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_GET_CHARACTERVISITMAX_OFFSET))(nullptr);
		}

		::System::Boolean _.ctor_b__28_1(::MX::Data::Excel::CafeProductionExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::CafeProductionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO__.CTOR_B__28_1_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CafeRankExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CafeRankExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_ProductionInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_SET_PRODUCTIONINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__tagMatchCountSections()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_GET__TAGMATCHCOUNTSECTIONS_OFFSET))(nullptr);
		}

		::System::Int32 get_CharacterVisitMin()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_GET_CHARACTERVISITMIN_OFFSET))(nullptr);
		}

		::System::Int32 GetTagMatchBonus(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_GETTAGMATCHBONUS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RecipeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_GET_RECIPEID_OFFSET))(nullptr);
		}

		::System::Int64 get_Rank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_GET_RANK_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CafeRankExcel* get__excel()
		{
			return (return (::MX::Data::Excel::CafeRankExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFERANKEXCELINFO_GET__EXCEL_OFFSET))(nullptr);
		}

	};
}

