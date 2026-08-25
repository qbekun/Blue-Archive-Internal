#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEDBSCHEMA_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C51B50)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEDBSCHEMA_SET_TARGETITEMID_OFFSET UNITYSDK_OFFSET(0x1C51B60)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEDBSCHEMA_SET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C51B70)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C51B80)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEDBSCHEMA_GET_TARGETITEMID_OFFSET UNITYSDK_OFFSET(0x1C51B90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RecipeSelectionAutoUseDBSchema_TypeDefinitionIndex = 19218;

	class RecipeSelectionAutoUseDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::ParcelType* _ParcelType_k__BackingField; // 0x20
		::System::Int64 _TargetItemId_k__BackingField; // 0x28

		::FlatData::ParcelType* get_ParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEDBSCHEMA_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::System::Void set_TargetItemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEDBSCHEMA_SET_TARGETITEMID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelType(::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEDBSCHEMA_SET_PARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEDBSCHEMA_GET_TARGETITEMID_OFFSET))(nullptr);
		}

	};
}

