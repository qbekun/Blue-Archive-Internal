#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C53300)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_SELECTFIRST_RECIPESELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C53560)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_SELECT_RECIPESELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C53880)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_SELECT_RECIPESELECTIONGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1C53B80)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_SELECTFIRST_PARCELTYPE_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C53F80)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_SELECT_PARCELTYPE_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C543C0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_SELECT_PARCELTYPE_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C547F0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C54D90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RecipeSelectionGroupExcelRepository_TypeDefinitionIndex = 19233;

	class RecipeSelectionGroupExcelRepository : public Sight
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_RecipeSelectionGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_SELECTFIRST_RECIPESELECTIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_RecipeSelectionGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_SELECT_RECIPESELECTIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_RecipeSelectionGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_SELECT_RECIPESELECTIONGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ParcelType_ParcelId(::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_SELECTFIRST_PARCELTYPE_PARCELID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ParcelType_ParcelId(::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_SELECT_PARCELTYPE_PARCELID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ParcelType_ParcelId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_SELECT_PARCELTYPE_PARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

