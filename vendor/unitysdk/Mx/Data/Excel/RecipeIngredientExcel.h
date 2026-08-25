#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class RecipeIngredientExcel; }
namespace FlatData { class RecipeType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C4F8E0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETROOTASRECIPEINGREDIENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4F8F0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETROOTASRECIPEINGREDIENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4F950)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C4F9E0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C4F9B0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C4FA00)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_RECIPETYPE_OFFSET UNITYSDK_OFFSET(0x1C4FA50)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_COSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C4FAA0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_COSTPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C4FB00)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETCOSTPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C4FB40)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_COSTID_OFFSET UNITYSDK_OFFSET(0x1C4FB60)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_COSTIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C4FBC0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETCOSTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C4FC00)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_COSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C4FC20)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_COSTAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C4FC80)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETCOSTAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C4FCC0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_INGREDIENTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C4FCE0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_INGREDIENTPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C4FD40)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETINGREDIENTPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C4FD80)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_INGREDIENTID_OFFSET UNITYSDK_OFFSET(0x1C4FDA0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_INGREDIENTIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C4FE00)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETINGREDIENTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C4FE40)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_INGREDIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C4FE60)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_INGREDIENTAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C4FEC0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETINGREDIENTAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C4FF00)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_COSTTIMEINSECOND_OFFSET UNITYSDK_OFFSET(0x1C4FF20)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATERECIPEINGREDIENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4FF70)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTRECIPEINGREDIENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C50310)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C50140)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDRECIPETYPE_OFFSET UNITYSDK_OFFSET(0x1C50290)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDCOSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C50260)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATECOSTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C50330)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTCOSTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C503C0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDCOSTID_OFFSET UNITYSDK_OFFSET(0x1C50230)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATECOSTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C50400)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTCOSTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C50490)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C50200)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATECOSTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C504D0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTCOSTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C50560)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDINGREDIENTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C501D0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATEINGREDIENTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C505A0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTINGREDIENTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C50630)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDINGREDIENTID_OFFSET UNITYSDK_OFFSET(0x1C501A0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATEINGREDIENTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C50670)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTINGREDIENTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C50700)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDINGREDIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C50170)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATEINGREDIENTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C50740)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTINGREDIENTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C507D0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDCOSTTIMEINSECOND_OFFSET UNITYSDK_OFFSET(0x1C50110)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ENDRECIPEINGREDIENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C502C0)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_FINISHRECIPEINGREDIENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C50810)
#define MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_FINISHSIZEPREFIXEDRECIPEINGREDIENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C50830)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RecipeIngredientExcel_TypeDefinitionIndex = 19210;

	class RecipeIngredientExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::RecipeIngredientExcel* GetRootAsRecipeIngredientExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RecipeIngredientExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETROOTASRECIPEINGREDIENTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::RecipeIngredientExcel* GetRootAsRecipeIngredientExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::RecipeIngredientExcel* arg)
		{
			return (return (::MX::Data::Excel::RecipeIngredientExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::RecipeIngredientExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETROOTASRECIPEINGREDIENTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::RecipeIngredientExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RecipeIngredientExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::RecipeType* get_RecipeType()
		{
			return (return (::FlatData::RecipeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_RECIPETYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* CostParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_COSTPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CostParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_COSTPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCostParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETCOSTPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 CostId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_COSTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CostIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_COSTIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCostIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETCOSTIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 CostAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_COSTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CostAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_COSTAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCostAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETCOSTAMOUNTBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* IngredientParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_INGREDIENTPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IngredientParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_INGREDIENTPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIngredientParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETINGREDIENTPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 IngredientId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_INGREDIENTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IngredientIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_INGREDIENTIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIngredientIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETINGREDIENTIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 IngredientAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_INGREDIENTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IngredientAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_INGREDIENTAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIngredientAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GETINGREDIENTAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CostTimeInSecond()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_GET_COSTTIMEINSECOND_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRecipeIngredientExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::RecipeType* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::RecipeType*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATERECIPEINGREDIENTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartRecipeIngredientExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTRECIPEINGREDIENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RecipeType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RecipeType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDRECIPETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDCOSTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCostParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATECOSTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCostParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTCOSTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCostIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATECOSTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCostIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTCOSTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCostAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATECOSTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCostAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTCOSTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIngredientParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDINGREDIENTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateIngredientParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATEINGREDIENTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartIngredientParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTINGREDIENTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIngredientId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDINGREDIENTID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateIngredientIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATEINGREDIENTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartIngredientIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTINGREDIENTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIngredientAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDINGREDIENTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateIngredientAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_CREATEINGREDIENTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartIngredientAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_STARTINGREDIENTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostTimeInSecond(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ADDCOSTTIMEINSECOND_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndRecipeIngredientExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_ENDRECIPEINGREDIENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRecipeIngredientExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_FINISHRECIPEINGREDIENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedRecipeIngredientExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RECIPEINGREDIENTEXCEL_FINISHSIZEPREFIXEDRECIPEINGREDIENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

