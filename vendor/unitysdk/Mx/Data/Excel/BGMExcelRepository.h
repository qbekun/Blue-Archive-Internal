#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BGMEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x19EEBC0)
#define MX_DATA_EXCEL_BGMEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x19EEFC0)
#define MX_DATA_EXCEL_BGMEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x19EF2E0)
#define MX_DATA_EXCEL_BGMEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19EF5E0)
#define MX_DATA_EXCEL_BGMEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19EF620)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BGMExcelRepository_TypeDefinitionIndex = 16794;

	class BGMExcelRepository : public ::FlatData::DreamMakerEndingType
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

