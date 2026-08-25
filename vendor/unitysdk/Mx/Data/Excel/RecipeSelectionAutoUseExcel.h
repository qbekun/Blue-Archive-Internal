#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class RecipeSelectionAutoUseExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C51560)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GETROOTASRECIPESELECTIONAUTOUSEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C51570)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GETROOTASRECIPESELECTIONAUTOUSEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C515D0)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C51660)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C51630)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C51680)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C516D0)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GET_TARGETITEMID_OFFSET UNITYSDK_OFFSET(0x1C51720)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1C51770)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GET_PRIORITYLENGTH_OFFSET UNITYSDK_OFFSET(0x1C517D0)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GETPRIORITYBYTES_OFFSET UNITYSDK_OFFSET(0x1C51810)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_CREATERECIPESELECTIONAUTOUSEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C51830)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_STARTRECIPESELECTIONAUTOUSEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C51A20)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C51940)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C519A0)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_ADDTARGETITEMID_OFFSET UNITYSDK_OFFSET(0x1C51910)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_ADDPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C51970)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_CREATEPRIORITYVECTOR_OFFSET UNITYSDK_OFFSET(0x1C51A40)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_STARTPRIORITYVECTOR_OFFSET UNITYSDK_OFFSET(0x1C51AD0)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_ENDRECIPESELECTIONAUTOUSEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C519D0)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_FINISHRECIPESELECTIONAUTOUSEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C51B10)
#define MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_FINISHSIZEPREFIXEDRECIPESELECTIONAUTOUSEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C51B30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RecipeSelectionAutoUseExcel_TypeDefinitionIndex = 19217;

	class RecipeSelectionAutoUseExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::RecipeSelectionAutoUseExcel* GetRootAsRecipeSelectionAutoUseExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RecipeSelectionAutoUseExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GETROOTASRECIPESELECTIONAUTOUSEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::RecipeSelectionAutoUseExcel* GetRootAsRecipeSelectionAutoUseExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::RecipeSelectionAutoUseExcel* arg)
		{
			return (return (::MX::Data::Excel::RecipeSelectionAutoUseExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::RecipeSelectionAutoUseExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GETROOTASRECIPESELECTIONAUTOUSEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::RecipeSelectionAutoUseExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RecipeSelectionAutoUseExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GET_TARGETITEMID_OFFSET))(nullptr);
		}

		::System::Int64 Priority(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_PRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PriorityLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GET_PRIORITYLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPriorityBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_GETPRIORITYBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRecipeSelectionAutoUseExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_CREATERECIPESELECTIONAUTOUSEEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartRecipeSelectionAutoUseExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_STARTRECIPESELECTIONAUTOUSEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTargetItemId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_ADDTARGETITEMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPriority(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_ADDPRIORITY_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePriorityVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_CREATEPRIORITYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPriorityVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_STARTPRIORITYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndRecipeSelectionAutoUseExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_ENDRECIPESELECTIONAUTOUSEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRecipeSelectionAutoUseExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_FINISHRECIPESELECTIONAUTOUSEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedRecipeSelectionAutoUseExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPESELECTIONAUTOUSEEXCEL_FINISHSIZEPREFIXEDRECIPESELECTIONAUTOUSEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

