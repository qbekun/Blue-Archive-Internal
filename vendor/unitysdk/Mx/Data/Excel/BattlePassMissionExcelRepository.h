#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19E94F0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x19E9530)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_SELECT_BATTLEPASSIDS_OFFSET UNITYSDK_OFFSET(0x19E9940)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_SELECT_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E9D40)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_SELECTFIRST_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19EA040)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x19EA360)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19EA670)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x19EA8D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassMissionExcelRepository_TypeDefinitionIndex = 16774;

	class BattlePassMissionExcelRepository : public ::FlatData::TBGItemEffectType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_BattlePassIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_SELECT_BATTLEPASSIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_BattlePassId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_SELECT_BATTLEPASSID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_BattlePassId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_SELECTFIRST_BATTLEPASSID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

