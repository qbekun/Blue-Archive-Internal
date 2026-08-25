#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCELREPOSITORY_SELECTFIRST_ENTERCOSTREDUCEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A6E310)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCELREPOSITORY_SELECT_ENTERCOSTREDUCEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A6E630)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E930)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A6E970)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCELREPOSITORY_SELECT_ENTERCOSTREDUCEGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1A6EAE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentEnterCostReduceExcelRepository_TypeDefinitionIndex = 17315;

	class ContentEnterCostReduceExcelRepository : public ::FlatData::ProductDisplayTag
	{
	public:
		Il2CppObject* SelectFirst_EnterCostReduceGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCELREPOSITORY_SELECTFIRST_ENTERCOSTREDUCEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EnterCostReduceGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCELREPOSITORY_SELECT_ENTERCOSTREDUCEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EnterCostReduceGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCELREPOSITORY_SELECT_ENTERCOSTREDUCEGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

