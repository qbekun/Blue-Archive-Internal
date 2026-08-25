#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGInfoExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B942F0)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GETROOTASMINIGAMECCGINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B94300)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GETROOTASMINIGAMECCGINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B94360)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B943F0)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B943C0)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B94410)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_CCGID_OFFSET UNITYSDK_OFFSET(0x1B94460)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_COSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B944B0)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_COSTPARCELID_OFFSET UNITYSDK_OFFSET(0x1B94500)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_COSTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B94550)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_CARDBACKPATH_OFFSET UNITYSDK_OFFSET(0x1B945A0)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GETCARDBACKPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B945E0)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_PERKCOSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B94600)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_PERKCOSTPARCELID_OFFSET UNITYSDK_OFFSET(0x1B94650)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_CREATEMINIGAMECCGINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B946A0)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_STARTMINIGAMECCGINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B949F0)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B948B0)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDCCGID_OFFSET UNITYSDK_OFFSET(0x1B94880)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDCOSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B94970)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDCOSTPARCELID_OFFSET UNITYSDK_OFFSET(0x1B94850)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDCOSTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B94940)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDCARDBACKPATH_OFFSET UNITYSDK_OFFSET(0x1B94910)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDPERKCOSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B948E0)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDPERKCOSTPARCELID_OFFSET UNITYSDK_OFFSET(0x1B94820)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ENDMINIGAMECCGINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B949A0)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_FINISHMINIGAMECCGINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B94A10)
#define MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B94A30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGInfoExcel_TypeDefinitionIndex = 18475;

	class MinigameCCGInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGInfoExcel* GetRootAsMinigameCCGInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GETROOTASMINIGAMECCGINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGInfoExcel* GetRootAsMinigameCCGInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GETROOTASMINIGAMECCGINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CCGId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_CCGID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_CostParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_COSTPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CostParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_COSTPARCELID_OFFSET))(nullptr);
		}

		::System::Int32 get_CostParcelAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_COSTPARCELAMOUNT_OFFSET))(nullptr);
		}

		::System::String* get_CardBackPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_CARDBACKPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCardBackPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GETCARDBACKPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_PerkCostParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_PERKCOSTPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_PerkCostParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_GET_PERKCOSTPARCELID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_CREATEMINIGAMECCGINFOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_STARTMINIGAMECCGINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCCGId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDCCGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDCOSTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDCOSTPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDCOSTPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCardBackPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDCARDBACKPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPerkCostParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDPERKCOSTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPerkCostParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ADDPERKCOSTPARCELID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_ENDMINIGAMECCGINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_FINISHMINIGAMECCGINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFOEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

