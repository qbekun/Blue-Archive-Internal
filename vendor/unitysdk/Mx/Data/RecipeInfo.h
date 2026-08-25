#pragma once
#include "../../unitysdk.h"

namespace FlatData { class RecipeType; }

#define MX_DATA_RECIPEINFO_SET_RECIPETYPE_OFFSET UNITYSDK_OFFSET(0x185AD20)
#define MX_DATA_RECIPEINFO_SET_RECIPEINGREDIENTID_OFFSET UNITYSDK_OFFSET(0x185AD30)
#define MX_DATA_RECIPEINFO_GET_RECIPEINGREDIENTID_OFFSET UNITYSDK_OFFSET(0x185AD40)
#define MX_DATA_RECIPEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x185AD50)
#define MX_DATA_RECIPEINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x185ADD0)
#define MX_DATA_RECIPEINFO_GET_RECIPETYPE_OFFSET UNITYSDK_OFFSET(0x185ADE0)
#define MX_DATA_RECIPEINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x185ADF0)

namespace MX::Data
{
	inline static constexpr unsigned int RecipeInfo_TypeDefinitionIndex = 15881;

	class RecipeInfo : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::FlatData::RecipeType* _RecipeType_k__BackingField; // 0x18
		::System::Int64 _RecipeIngredientId_k__BackingField; // 0x20
		Il2CppObject* ResultInfos; // 0x28

		::System::Void set_RecipeType(::FlatData::RecipeType* arg)
		{
			((::System::Void(*)(::FlatData::RecipeType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINFO_SET_RECIPETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_RecipeIngredientId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINFO_SET_RECIPEINGREDIENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RecipeIngredientId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINFO_GET_RECIPEINGREDIENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINFO_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::FlatData::RecipeType* get_RecipeType()
		{
			return (return (::FlatData::RecipeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINFO_GET_RECIPETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RECIPEINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

