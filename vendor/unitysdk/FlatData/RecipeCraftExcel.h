#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class RecipeCraftExcel; }
namespace FlatData { class RecipeType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_RECIPECRAFTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD559B0)
#define FLATDATA_RECIPECRAFTEXCEL_GETROOTASRECIPECRAFTEXCEL_OFFSET UNITYSDK_OFFSET(0xD559C0)
#define FLATDATA_RECIPECRAFTEXCEL_GETROOTASRECIPECRAFTEXCEL_OFFSET UNITYSDK_OFFSET(0xD55A20)
#define FLATDATA_RECIPECRAFTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD55A80)
#define FLATDATA_RECIPECRAFTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD55720)
#define FLATDATA_RECIPECRAFTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD55AA0)
#define FLATDATA_RECIPECRAFTEXCEL_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0xD55AF0)
#define FLATDATA_RECIPECRAFTEXCEL_GETDEVNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD55B30)
#define FLATDATA_RECIPECRAFTEXCEL_GET_RECIPETYPE_OFFSET UNITYSDK_OFFSET(0xD55B50)
#define FLATDATA_RECIPECRAFTEXCEL_GET_RECIPEINGREDIENTID_OFFSET UNITYSDK_OFFSET(0xD55BA0)
#define FLATDATA_RECIPECRAFTEXCEL_GET_RECIPEINGREDIENTDEVNAME_OFFSET UNITYSDK_OFFSET(0xD55BF0)
#define FLATDATA_RECIPECRAFTEXCEL_GETRECIPEINGREDIENTDEVNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD55C30)
#define FLATDATA_RECIPECRAFTEXCEL_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD55C50)
#define FLATDATA_RECIPECRAFTEXCEL_GET_PARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0xD55CB0)
#define FLATDATA_RECIPECRAFTEXCEL_GETPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0xD55CF0)
#define FLATDATA_RECIPECRAFTEXCEL_PARCELID_OFFSET UNITYSDK_OFFSET(0xD55D10)
#define FLATDATA_RECIPECRAFTEXCEL_GET_PARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD55D70)
#define FLATDATA_RECIPECRAFTEXCEL_GETPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0xD55DB0)
#define FLATDATA_RECIPECRAFTEXCEL_PARCELDEVNAME_OFFSET UNITYSDK_OFFSET(0xD55DD0)
#define FLATDATA_RECIPECRAFTEXCEL_GET_PARCELDEVNAMELENGTH_OFFSET UNITYSDK_OFFSET(0xD55E20)
#define FLATDATA_RECIPECRAFTEXCEL_RESULTAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0xD55E60)
#define FLATDATA_RECIPECRAFTEXCEL_GET_RESULTAMOUNTMINLENGTH_OFFSET UNITYSDK_OFFSET(0xD55EC0)
#define FLATDATA_RECIPECRAFTEXCEL_GETRESULTAMOUNTMINBYTES_OFFSET UNITYSDK_OFFSET(0xD55F00)
#define FLATDATA_RECIPECRAFTEXCEL_RESULTAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0xD55F20)
#define FLATDATA_RECIPECRAFTEXCEL_GET_RESULTAMOUNTMAXLENGTH_OFFSET UNITYSDK_OFFSET(0xD55F80)
#define FLATDATA_RECIPECRAFTEXCEL_GETRESULTAMOUNTMAXBYTES_OFFSET UNITYSDK_OFFSET(0xD55FC0)
#define FLATDATA_RECIPECRAFTEXCEL_CREATERECIPECRAFTEXCEL_OFFSET UNITYSDK_OFFSET(0xD55FE0)
#define FLATDATA_RECIPECRAFTEXCEL_STARTRECIPECRAFTEXCEL_OFFSET UNITYSDK_OFFSET(0xD563E0)
#define FLATDATA_RECIPECRAFTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xD561E0)
#define FLATDATA_RECIPECRAFTEXCEL_ADDDEVNAME_OFFSET UNITYSDK_OFFSET(0xD56360)
#define FLATDATA_RECIPECRAFTEXCEL_ADDRECIPETYPE_OFFSET UNITYSDK_OFFSET(0xD56330)
#define FLATDATA_RECIPECRAFTEXCEL_ADDRECIPEINGREDIENTID_OFFSET UNITYSDK_OFFSET(0xD561B0)
#define FLATDATA_RECIPECRAFTEXCEL_ADDRECIPEINGREDIENTDEVNAME_OFFSET UNITYSDK_OFFSET(0xD56300)
#define FLATDATA_RECIPECRAFTEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD562D0)
#define FLATDATA_RECIPECRAFTEXCEL_CREATEPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD56400)
#define FLATDATA_RECIPECRAFTEXCEL_STARTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD56490)
#define FLATDATA_RECIPECRAFTEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0xD562A0)
#define FLATDATA_RECIPECRAFTEXCEL_CREATEPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD564D0)
#define FLATDATA_RECIPECRAFTEXCEL_STARTPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD56560)
#define FLATDATA_RECIPECRAFTEXCEL_ADDPARCELDEVNAME_OFFSET UNITYSDK_OFFSET(0xD56270)
#define FLATDATA_RECIPECRAFTEXCEL_CREATEPARCELDEVNAMEVECTOR_OFFSET UNITYSDK_OFFSET(0xD565A0)
#define FLATDATA_RECIPECRAFTEXCEL_STARTPARCELDEVNAMEVECTOR_OFFSET UNITYSDK_OFFSET(0xD56630)
#define FLATDATA_RECIPECRAFTEXCEL_ADDRESULTAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0xD56240)
#define FLATDATA_RECIPECRAFTEXCEL_CREATERESULTAMOUNTMINVECTOR_OFFSET UNITYSDK_OFFSET(0xD56670)
#define FLATDATA_RECIPECRAFTEXCEL_STARTRESULTAMOUNTMINVECTOR_OFFSET UNITYSDK_OFFSET(0xD56700)
#define FLATDATA_RECIPECRAFTEXCEL_ADDRESULTAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0xD56210)
#define FLATDATA_RECIPECRAFTEXCEL_CREATERESULTAMOUNTMAXVECTOR_OFFSET UNITYSDK_OFFSET(0xD56740)
#define FLATDATA_RECIPECRAFTEXCEL_STARTRESULTAMOUNTMAXVECTOR_OFFSET UNITYSDK_OFFSET(0xD567D0)
#define FLATDATA_RECIPECRAFTEXCEL_ENDRECIPECRAFTEXCEL_OFFSET UNITYSDK_OFFSET(0xD56390)

namespace FlatData
{
	inline static constexpr unsigned int RecipeCraftExcel_TypeDefinitionIndex = 9320;

	class RecipeCraftExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::RecipeCraftExcel* GetRootAsRecipeCraftExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::RecipeCraftExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GETROOTASRECIPECRAFTEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::RecipeCraftExcel* GetRootAsRecipeCraftExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::RecipeCraftExcel* arg2)
		{
			return ((::FlatData::RecipeCraftExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::RecipeCraftExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GETROOTASRECIPECRAFTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::RecipeCraftExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::RecipeCraftExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_DevName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GET_DEVNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetDevNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GETDEVNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::RecipeType* get_RecipeType()
		{
			return ((::FlatData::RecipeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GET_RECIPETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RecipeIngredientId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GET_RECIPEINGREDIENTID_OFFSET))(nullptr);
		}

		::System::String* get_RecipeIngredientDevName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GET_RECIPEINGREDIENTDEVNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetRecipeIngredientDevNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GETRECIPEINGREDIENTDEVNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ParcelType(::System::Int32 arg)
		{
			return ((::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_PARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelTypeLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GET_PARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelTypeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GETPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_PARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GET_PARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GETPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::String* ParcelDevName(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_PARCELDEVNAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelDevNameLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GET_PARCELDEVNAMELENGTH_OFFSET))(nullptr);
		}

		::System::Int64 ResultAmountMin(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_RESULTAMOUNTMIN_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ResultAmountMinLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GET_RESULTAMOUNTMINLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetResultAmountMinBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GETRESULTAMOUNTMINBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ResultAmountMax(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_RESULTAMOUNTMAX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ResultAmountMaxLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GET_RESULTAMOUNTMAXLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetResultAmountMaxBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_GETRESULTAMOUNTMAXBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRecipeCraftExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::StringOffset* arg3, ::FlatData::RecipeType* arg4, ::System::Int64 arg5, ::FlatBuffers::StringOffset* arg6, ::FlatBuffers::VectorOffset* arg7, ::FlatBuffers::VectorOffset* arg8, ::FlatBuffers::VectorOffset* arg9, ::FlatBuffers::VectorOffset* arg10, ::FlatBuffers::VectorOffset* arg11)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::RecipeType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_CREATERECIPECRAFTEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		::System::Void StartRecipeCraftExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_STARTRECIPECRAFTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_ADDDEVNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRecipeType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RecipeType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RecipeType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_ADDRECIPETYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRecipeIngredientId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_ADDRECIPEINGREDIENTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRecipeIngredientDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_ADDRECIPEINGREDIENTDEVNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_CREATEPARCELTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_STARTPARCELTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_ADDPARCELID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_CREATEPARCELIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_STARTPARCELIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddParcelDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_ADDPARCELDEVNAME_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelDevNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_CREATEPARCELDEVNAMEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartParcelDevNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_STARTPARCELDEVNAMEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddResultAmountMin(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_ADDRESULTAMOUNTMIN_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateResultAmountMinVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_CREATERESULTAMOUNTMINVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartResultAmountMinVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_STARTRESULTAMOUNTMINVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddResultAmountMax(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_ADDRESULTAMOUNTMAX_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateResultAmountMaxVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_CREATERESULTAMOUNTMAXVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartResultAmountMaxVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_STARTRESULTAMOUNTMAXVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndRecipeCraftExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_RECIPECRAFTEXCEL_ENDRECIPECRAFTEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

