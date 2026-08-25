#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class RecipeSelectionGroupExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C52C90)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GETROOTASRECIPESELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C52CA0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GETROOTASRECIPESELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C52D00)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C52D90)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C52D60)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_RECIPESELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C52DB0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_RECIPESELECTIONGROUPCOMPONENTID_OFFSET UNITYSDK_OFFSET(0x1C52E00)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C52E50)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C52EA0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_RESULTAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x1C52EF0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_RESULTAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x1C52F40)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_CREATERECIPESELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C52F90)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_STARTRECIPESELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C53230)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ADDRECIPESELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C53180)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ADDRECIPESELECTIONGROUPCOMPONENTID_OFFSET UNITYSDK_OFFSET(0x1C53150)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C531B0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C53120)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ADDRESULTAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x1C530F0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ADDRESULTAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x1C530C0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ENDRECIPESELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C531E0)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_FINISHRECIPESELECTIONGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C53250)
#define MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_FINISHSIZEPREFIXEDRECIPESELECTIONGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C53270)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RecipeSelectionGroupExcel_TypeDefinitionIndex = 19224;

	class RecipeSelectionGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::RecipeSelectionGroupExcel* GetRootAsRecipeSelectionGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RecipeSelectionGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GETROOTASRECIPESELECTIONGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::RecipeSelectionGroupExcel* GetRootAsRecipeSelectionGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::RecipeSelectionGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::RecipeSelectionGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::RecipeSelectionGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GETROOTASRECIPESELECTIONGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::RecipeSelectionGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RecipeSelectionGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_RecipeSelectionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_RECIPESELECTIONGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_RecipeSelectionGroupComponentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_RECIPESELECTIONGROUPCOMPONENTID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_PARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_ResultAmountMin()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_RESULTAMOUNTMIN_OFFSET))(nullptr);
		}

		::System::Int64 get_ResultAmountMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_GET_RESULTAMOUNTMAX_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRecipeSelectionGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_CREATERECIPESELECTIONGROUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartRecipeSelectionGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_STARTRECIPESELECTIONGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddRecipeSelectionGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ADDRECIPESELECTIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeSelectionGroupComponentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ADDRECIPESELECTIONGROUPCOMPONENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ADDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultAmountMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ADDRESULTAMOUNTMIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultAmountMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ADDRESULTAMOUNTMAX_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndRecipeSelectionGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_ENDRECIPESELECTIONGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRecipeSelectionGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_FINISHRECIPESELECTIONGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedRecipeSelectionGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONGROUPEXCEL_FINISHSIZEPREFIXEDRECIPESELECTIONGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

