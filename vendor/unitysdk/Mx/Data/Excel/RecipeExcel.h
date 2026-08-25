#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class RecipeExcel; }
namespace FlatData { class RecipeType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_RECIPEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C4DF80)
#define MX_DATA_EXCEL_RECIPEEXCEL_GETROOTASRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4DF90)
#define MX_DATA_EXCEL_RECIPEEXCEL_GETROOTASRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4DFF0)
#define MX_DATA_EXCEL_RECIPEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C4E080)
#define MX_DATA_EXCEL_RECIPEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C4E050)
#define MX_DATA_EXCEL_RECIPEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C4E0A0)
#define MX_DATA_EXCEL_RECIPEEXCEL_GET_RECIPETYPE_OFFSET UNITYSDK_OFFSET(0x1C4E0F0)
#define MX_DATA_EXCEL_RECIPEEXCEL_GET_RECIPEINGREDIENTID_OFFSET UNITYSDK_OFFSET(0x1C4E140)
#define MX_DATA_EXCEL_RECIPEEXCEL_GET_RECIPESELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C4E190)
#define MX_DATA_EXCEL_RECIPEEXCEL_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C4E1E0)
#define MX_DATA_EXCEL_RECIPEEXCEL_GET_PARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C4E240)
#define MX_DATA_EXCEL_RECIPEEXCEL_GETPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C4E280)
#define MX_DATA_EXCEL_RECIPEEXCEL_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C4E2A0)
#define MX_DATA_EXCEL_RECIPEEXCEL_GET_PARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C4E300)
#define MX_DATA_EXCEL_RECIPEEXCEL_GETPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C4E340)
#define MX_DATA_EXCEL_RECIPEEXCEL_RESULTAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x1C4E360)
#define MX_DATA_EXCEL_RECIPEEXCEL_GET_RESULTAMOUNTMINLENGTH_OFFSET UNITYSDK_OFFSET(0x1C4E3C0)
#define MX_DATA_EXCEL_RECIPEEXCEL_GETRESULTAMOUNTMINBYTES_OFFSET UNITYSDK_OFFSET(0x1C4E400)
#define MX_DATA_EXCEL_RECIPEEXCEL_RESULTAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x1C4E420)
#define MX_DATA_EXCEL_RECIPEEXCEL_GET_RESULTAMOUNTMAXLENGTH_OFFSET UNITYSDK_OFFSET(0x1C4E480)
#define MX_DATA_EXCEL_RECIPEEXCEL_GETRESULTAMOUNTMAXBYTES_OFFSET UNITYSDK_OFFSET(0x1C4E4C0)
#define MX_DATA_EXCEL_RECIPEEXCEL_CREATERECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4E4E0)
#define MX_DATA_EXCEL_RECIPEEXCEL_STARTRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4E830)
#define MX_DATA_EXCEL_RECIPEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C4E6C0)
#define MX_DATA_EXCEL_RECIPEEXCEL_ADDRECIPETYPE_OFFSET UNITYSDK_OFFSET(0x1C4E7B0)
#define MX_DATA_EXCEL_RECIPEEXCEL_ADDRECIPEINGREDIENTID_OFFSET UNITYSDK_OFFSET(0x1C4E690)
#define MX_DATA_EXCEL_RECIPEEXCEL_ADDRECIPESELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C4E660)
#define MX_DATA_EXCEL_RECIPEEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C4E780)
#define MX_DATA_EXCEL_RECIPEEXCEL_CREATEPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4E850)
#define MX_DATA_EXCEL_RECIPEEXCEL_STARTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4E8E0)
#define MX_DATA_EXCEL_RECIPEEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C4E750)
#define MX_DATA_EXCEL_RECIPEEXCEL_CREATEPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4E920)
#define MX_DATA_EXCEL_RECIPEEXCEL_STARTPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4E9B0)
#define MX_DATA_EXCEL_RECIPEEXCEL_ADDRESULTAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x1C4E720)
#define MX_DATA_EXCEL_RECIPEEXCEL_CREATERESULTAMOUNTMINVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4E9F0)
#define MX_DATA_EXCEL_RECIPEEXCEL_STARTRESULTAMOUNTMINVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4EA80)
#define MX_DATA_EXCEL_RECIPEEXCEL_ADDRESULTAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x1C4E6F0)
#define MX_DATA_EXCEL_RECIPEEXCEL_CREATERESULTAMOUNTMAXVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4EAC0)
#define MX_DATA_EXCEL_RECIPEEXCEL_STARTRESULTAMOUNTMAXVECTOR_OFFSET UNITYSDK_OFFSET(0x1C4EB50)
#define MX_DATA_EXCEL_RECIPEEXCEL_ENDRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4E7E0)
#define MX_DATA_EXCEL_RECIPEEXCEL_FINISHRECIPEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C4EB90)
#define MX_DATA_EXCEL_RECIPEEXCEL_FINISHSIZEPREFIXEDRECIPEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C4EBB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RecipeExcel_TypeDefinitionIndex = 19203;

	class RecipeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::RecipeExcel* GetRootAsRecipeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RecipeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GETROOTASRECIPEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::RecipeExcel* GetRootAsRecipeExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::RecipeExcel* arg)
		{
			return (return (::MX::Data::Excel::RecipeExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::RecipeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GETROOTASRECIPEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::RecipeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RecipeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::RecipeType* get_RecipeType()
		{
			return (return (::FlatData::RecipeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GET_RECIPETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RecipeIngredientId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GET_RECIPEINGREDIENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_RecipeSelectionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GET_RECIPESELECTIONGROUPID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_PARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GET_PARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GETPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_PARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GET_PARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GETPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ResultAmountMin(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_RESULTAMOUNTMIN_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ResultAmountMinLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GET_RESULTAMOUNTMINLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetResultAmountMinBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GETRESULTAMOUNTMINBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ResultAmountMax(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_RESULTAMOUNTMAX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ResultAmountMaxLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GET_RESULTAMOUNTMAXLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetResultAmountMaxBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_GETRESULTAMOUNTMAXBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRecipeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::RecipeType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::RecipeType*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_CREATERECIPEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartRecipeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_STARTRECIPEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RecipeType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RecipeType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_ADDRECIPETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeIngredientId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_ADDRECIPEINGREDIENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeSelectionGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_ADDRECIPESELECTIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_CREATEPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_STARTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_ADDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_CREATEPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_STARTPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultAmountMin(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_ADDRESULTAMOUNTMIN_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateResultAmountMinVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_CREATERESULTAMOUNTMINVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartResultAmountMinVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_STARTRESULTAMOUNTMINVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultAmountMax(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_ADDRESULTAMOUNTMAX_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateResultAmountMaxVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_CREATERESULTAMOUNTMAXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartResultAmountMaxVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_STARTRESULTAMOUNTMAXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndRecipeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_ENDRECIPEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRecipeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_FINISHRECIPEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedRecipeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEEXCEL_FINISHSIZEPREFIXEDRECIPEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

