#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShiftingCraftRecipeExcel; }
namespace FlatData { class ParcelType; }
namespace FlatData { class Tag; }
namespace FlatData { class RecipeDisplayOptions; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C6F6F0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GETROOTASSHIFTINGCRAFTRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6F700)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GETROOTASSHIFTINGCRAFTRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6F760)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C6F7F0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C6F7C0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C6F810)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C6F860)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_NOTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x1C6F8B0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_RESULTPARCEL_OFFSET UNITYSDK_OFFSET(0x1C6F900)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_RESULTID_OFFSET UNITYSDK_OFFSET(0x1C6F950)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_RESULTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C6F9A0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_REQUIREITEMID_OFFSET UNITYSDK_OFFSET(0x1C6F9F0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_REQUIREITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C6FA40)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_REQUIREGOLD_OFFSET UNITYSDK_OFFSET(0x1C6FA90)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_ADDITIONALCOSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C6FAE0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_ADDITIONALCOSTPARCELID_OFFSET UNITYSDK_OFFSET(0x1C6FB30)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_ADDITIONALCOSTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C6FB80)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_INGREDIENTTAG_OFFSET UNITYSDK_OFFSET(0x1C6FBD0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_INGREDIENTTAGLENGTH_OFFSET UNITYSDK_OFFSET(0x1C6FC30)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GETINGREDIENTTAGBYTES_OFFSET UNITYSDK_OFFSET(0x1C6FC70)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_INGREDIENTEXP_OFFSET UNITYSDK_OFFSET(0x1C6FC90)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_RECIPEDISPLAYOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C6FCE0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_CREATESHIFTINGCRAFTRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6FD30)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_STARTSHIFTINGCRAFTRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C702F0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C70180)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C70150)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDNOTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x1C70270)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDRESULTPARCEL_OFFSET UNITYSDK_OFFSET(0x1C70240)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDRESULTID_OFFSET UNITYSDK_OFFSET(0x1C70120)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDRESULTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C700F0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDREQUIREITEMID_OFFSET UNITYSDK_OFFSET(0x1C700C0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDREQUIREITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C70090)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDREQUIREGOLD_OFFSET UNITYSDK_OFFSET(0x1C70060)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDADDITIONALCOSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C70210)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDADDITIONALCOSTPARCELID_OFFSET UNITYSDK_OFFSET(0x1C70030)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDADDITIONALCOSTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C70000)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDINGREDIENTTAG_OFFSET UNITYSDK_OFFSET(0x1C701E0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_CREATEINGREDIENTTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1C70310)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_STARTINGREDIENTTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1C703A0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDINGREDIENTEXP_OFFSET UNITYSDK_OFFSET(0x1C6FFD0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDRECIPEDISPLAYOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C701B0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ENDSHIFTINGCRAFTRECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C702A0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_FINISHSHIFTINGCRAFTRECIPEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C703E0)
#define MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_FINISHSIZEPREFIXEDSHIFTINGCRAFTRECIPEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C70400)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShiftingCraftRecipeExcel_TypeDefinitionIndex = 19360;

	class ShiftingCraftRecipeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShiftingCraftRecipeExcel* GetRootAsShiftingCraftRecipeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShiftingCraftRecipeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GETROOTASSHIFTINGCRAFTRECIPEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShiftingCraftRecipeExcel* GetRootAsShiftingCraftRecipeExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShiftingCraftRecipeExcel* arg)
		{
			return (return (::MX::Data::Excel::ShiftingCraftRecipeExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShiftingCraftRecipeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GETROOTASSHIFTINGCRAFTRECIPEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShiftingCraftRecipeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShiftingCraftRecipeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Int32 get_NotificationId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_NOTIFICATIONID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ResultParcel()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_RESULTPARCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_ResultId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_RESULTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ResultAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_RESULTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_RequireItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_REQUIREITEMID_OFFSET))(nullptr);
		}

		::System::Int64 get_RequireItemAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_REQUIREITEMAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_RequireGold()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_REQUIREGOLD_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_AdditionalCostParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_ADDITIONALCOSTPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_AdditionalCostParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_ADDITIONALCOSTPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_AdditionalCostParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_ADDITIONALCOSTPARCELAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::Tag* IngredientTag(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_INGREDIENTTAG_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IngredientTagLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_INGREDIENTTAGLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIngredientTagBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GETINGREDIENTTAGBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_IngredientExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_INGREDIENTEXP_OFFSET))(nullptr);
		}

		::FlatData::RecipeDisplayOptions* get_RecipeDisplayOptions()
		{
			return (return (::FlatData::RecipeDisplayOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_GET_RECIPEDISPLAYOPTIONS_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShiftingCraftRecipeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatData::RecipeDisplayOptions* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatData::RecipeDisplayOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_CREATESHIFTINGCRAFTRECIPEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShiftingCraftRecipeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_STARTSHIFTINGCRAFTRECIPEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNotificationId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDNOTIFICATIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultParcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDRESULTPARCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDRESULTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDRESULTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequireItemId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDREQUIREITEMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequireItemAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDREQUIREITEMAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequireGold(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDREQUIREGOLD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAdditionalCostParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDADDITIONALCOSTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAdditionalCostParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDADDITIONALCOSTPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAdditionalCostParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDADDITIONALCOSTPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIngredientTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDINGREDIENTTAG_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateIngredientTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_CREATEINGREDIENTTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartIngredientTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_STARTINGREDIENTTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIngredientExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDINGREDIENTEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeDisplayOptions(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RecipeDisplayOptions* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RecipeDisplayOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ADDRECIPEDISPLAYOPTIONS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShiftingCraftRecipeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_ENDSHIFTINGCRAFTRECIPEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShiftingCraftRecipeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_FINISHSHIFTINGCRAFTRECIPEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShiftingCraftRecipeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHIFTINGCRAFTRECIPEEXCEL_FINISHSIZEPREFIXEDSHIFTINGCRAFTRECIPEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

