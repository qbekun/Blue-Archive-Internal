#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C51BA0)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCELREPOSITORY_SELECTFIRST_PARCELTYPE_TARGETITEMID_OFFSET UNITYSDK_OFFSET(0x1C51D10)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCELREPOSITORY_SELECT_PARCELTYPE_TARGETITEMID_OFFSET UNITYSDK_OFFSET(0x1C52150)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCELREPOSITORY_SELECT_PARCELTYPE_TARGETITEMID_OFFSET UNITYSDK_OFFSET(0x1C52580)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C52B20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RecipeSelectionAutoUseExcelRepository_TypeDefinitionIndex = 19223;

	class RecipeSelectionAutoUseExcelRepository : public AniController
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_ParcelType_TargetItemId(::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCELREPOSITORY_SELECTFIRST_PARCELTYPE_TARGETITEMID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ParcelType_TargetItemId(::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCELREPOSITORY_SELECT_PARCELTYPE_TARGETITEMID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ParcelType_TargetItemId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCELREPOSITORY_SELECT_PARCELTYPE_TARGETITEMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

