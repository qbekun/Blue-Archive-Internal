#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERAIEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B380)
#define MX_DATA_EXCEL_CHARACTERAIEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A0B3C0)
#define MX_DATA_EXCEL_CHARACTERAIEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A0B6E0)
#define MX_DATA_EXCEL_CHARACTERAIEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A0B850)
#define MX_DATA_EXCEL_CHARACTERAIEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A0BB50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterAIExcelRepository_TypeDefinitionIndex = 16923;

	class CharacterAIExcelRepository : public ::FlatData::NexonBillingState
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

