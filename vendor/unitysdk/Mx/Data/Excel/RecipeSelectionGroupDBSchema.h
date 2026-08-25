#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_GET_RECIPESELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C53290)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_SET_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C532A0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_GET_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C532B0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_SET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C532C0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C532D0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C532E0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_SET_RECIPESELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C532F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RecipeSelectionGroupDBSchema_TypeDefinitionIndex = 19225;

	class RecipeSelectionGroupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _RecipeSelectionGroupId_k__BackingField; // 0x20
		::FlatData::ParcelType* _ParcelType_k__BackingField; // 0x28
		::System::Int64 _ParcelId_k__BackingField; // 0x30

		::System::Int64 get_RecipeSelectionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_GET_RECIPESELECTIONGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ParcelId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_SET_PARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_GET_PARCELID_OFFSET))(nullptr);
		}

		::System::Void set_ParcelType(::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_SET_PARCELTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelType* get_ParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RecipeSelectionGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPDBSCHEMA_SET_RECIPESELECTIONGROUPID_OFFSET))(arg, nullptr);
		}

	};
}

