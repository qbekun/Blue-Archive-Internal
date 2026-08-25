#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BGMRAIDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19EFD00)
#define MX_DATA_EXCEL_BGMRAIDEXCELREPOSITORY_SELECTFIRST_STAGEID_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0x19EFE70)
#define MX_DATA_EXCEL_BGMRAIDEXCELREPOSITORY_SELECT_STAGEID_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0x19F0270)
#define MX_DATA_EXCEL_BGMRAIDEXCELREPOSITORY_SELECT_STAGEID_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0x19F0650)
#define MX_DATA_EXCEL_BGMRAIDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19F0BF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BGMRaidExcelRepository_TypeDefinitionIndex = 16801;

	class BGMRaidExcelRepository : public ::FlatData::DreamMakerEndingRewardType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_StageId_PhaseIndex(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCELREPOSITORY_SELECTFIRST_STAGEID_PHASEINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_StageId_PhaseIndex(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCELREPOSITORY_SELECT_STAGEID_PHASEINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_StageId_PhaseIndex(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCELREPOSITORY_SELECT_STAGEID_PHASEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

