#pragma once
#include "../../unitysdk.h"

namespace FlatData { class RecipeType; }
namespace MX::GameLogic::Parcel { class ParcelCost; }

#define MX_DATA_RECIPEINGREDIENTINFO_SET_PARCELCOST_OFFSET UNITYSDK_OFFSET(0x185AE00)
#define MX_DATA_RECIPEINGREDIENTINFO_SET_RECIPETYPE_OFFSET UNITYSDK_OFFSET(0x185AE10)
#define MX_DATA_RECIPEINGREDIENTINFO_GET_COSTTIMEINSECOND_OFFSET UNITYSDK_OFFSET(0x185AE20)
#define MX_DATA_RECIPEINGREDIENTINFO_GET_RECIPETYPE_OFFSET UNITYSDK_OFFSET(0x185AE30)
#define MX_DATA_RECIPEINGREDIENTINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x185AE40)
#define MX_DATA_RECIPEINGREDIENTINFO_GET_PARCELCOST_OFFSET UNITYSDK_OFFSET(0x185AE50)
#define MX_DATA_RECIPEINGREDIENTINFO_SET_COSTTIMEINSECOND_OFFSET UNITYSDK_OFFSET(0x185AE60)
#define MX_DATA_RECIPEINGREDIENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x185AE70)
#define MX_DATA_RECIPEINGREDIENTINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x185AEF0)
#define MX_DATA_RECIPEINGREDIENTINFO_CREATEPARCELCOST_OFFSET UNITYSDK_OFFSET(0x185AF00)

namespace MX::Data
{
	inline static constexpr unsigned int RecipeIngredientInfo_TypeDefinitionIndex = 15882;

	class RecipeIngredientInfo : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::FlatData::RecipeType* _RecipeType_k__BackingField; // 0x18
		::System::Int64 _CostTimeInSecond_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelCost* _ParcelCost_k__BackingField; // 0x28
		Il2CppObject* IngredientParcelInfos; // 0x30

		::System::Void set_ParcelCost(::MX::GameLogic::Parcel::ParcelCost* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINGREDIENTINFO_SET_PARCELCOST_OFFSET))(arg, nullptr);
		}

		::System::Void set_RecipeType(::FlatData::RecipeType* arg)
		{
			((::System::Void(*)(::FlatData::RecipeType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINGREDIENTINFO_SET_RECIPETYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostTimeInSecond()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINGREDIENTINFO_GET_COSTTIMEINSECOND_OFFSET))(nullptr);
		}

		::FlatData::RecipeType* get_RecipeType()
		{
			return (return (::FlatData::RecipeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINGREDIENTINFO_GET_RECIPETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINGREDIENTINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get_ParcelCost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINGREDIENTINFO_GET_PARCELCOST_OFFSET))(nullptr);
		}

		::System::Void set_CostTimeInSecond(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINGREDIENTINFO_SET_COSTTIMEINSECOND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINGREDIENTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINGREDIENTINFO_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void CreateParcelCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINGREDIENTINFO_CREATEPARCELCOST_OFFSET))(nullptr);
		}

	};
}

