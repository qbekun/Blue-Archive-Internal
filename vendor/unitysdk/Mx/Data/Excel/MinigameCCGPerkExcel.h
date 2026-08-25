#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGPerkExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B9CC40)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GETROOTASMINIGAMECCGPERKEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9CC50)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GETROOTASMINIGAMECCGPERKEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9CCB0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B9CD40)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B9CD10)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B9CD60)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_CCGID_OFFSET UNITYSDK_OFFSET(0x1B9CDB0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_COSTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B9CE00)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_REROLLPOINT_OFFSET UNITYSDK_OFFSET(0x1B9CE50)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_DISCARDPOINT_OFFSET UNITYSDK_OFFSET(0x1B9CEA0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ENVIRONMENTLOGICEFFECTID_OFFSET UNITYSDK_OFFSET(0x1B9CEF0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_ENVIRONMENTLOGICEFFECTIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B9CF50)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GETENVIRONMENTLOGICEFFECTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B9CF90)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_REQUIREDPERKID_OFFSET UNITYSDK_OFFSET(0x1B9CFB0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_REQUIREDPERKIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B9D010)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GETREQUIREDPERKIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B9D050)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_SHOPORDER_OFFSET UNITYSDK_OFFSET(0x1B9D070)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x1B9D0C0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GETSHOPICONBYTES_OFFSET UNITYSDK_OFFSET(0x1B9D100)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_SHOPLOCALIZETITLE_OFFSET UNITYSDK_OFFSET(0x1B9D120)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_SHOPLOCALIZEDESC_OFFSET UNITYSDK_OFFSET(0x1B9D170)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_CREATEMINIGAMECCGPERKEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9D1C0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_STARTMINIGAMECCGPERKEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9D610)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B9D3E0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDCCGID_OFFSET UNITYSDK_OFFSET(0x1B9D3B0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDCOSTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B9D590)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDREROLLPOINT_OFFSET UNITYSDK_OFFSET(0x1B9D560)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDDISCARDPOINT_OFFSET UNITYSDK_OFFSET(0x1B9D530)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDENVIRONMENTLOGICEFFECTID_OFFSET UNITYSDK_OFFSET(0x1B9D500)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_CREATEENVIRONMENTLOGICEFFECTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B9D630)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_STARTENVIRONMENTLOGICEFFECTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B9D6C0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDREQUIREDPERKID_OFFSET UNITYSDK_OFFSET(0x1B9D4D0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_CREATEREQUIREDPERKIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B9D700)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_STARTREQUIREDPERKIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B9D790)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDSHOPORDER_OFFSET UNITYSDK_OFFSET(0x1B9D4A0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDSHOPICON_OFFSET UNITYSDK_OFFSET(0x1B9D470)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDSHOPLOCALIZETITLE_OFFSET UNITYSDK_OFFSET(0x1B9D440)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDSHOPLOCALIZEDESC_OFFSET UNITYSDK_OFFSET(0x1B9D410)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ENDMINIGAMECCGPERKEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9D5C0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_FINISHMINIGAMECCGPERKEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B9D7D0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGPERKEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B9D7F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGPerkExcel_TypeDefinitionIndex = 18520;

	class MinigameCCGPerkExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGPerkExcel* GetRootAsMinigameCCGPerkExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGPerkExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GETROOTASMINIGAMECCGPERKEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGPerkExcel* GetRootAsMinigameCCGPerkExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGPerkExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGPerkExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGPerkExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GETROOTASMINIGAMECCGPERKEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGPerkExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGPerkExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_CCGId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_CCGID_OFFSET))(nullptr);
		}

		::System::Int32 get_CostParcelAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_COSTPARCELAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_RerollPoint()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_REROLLPOINT_OFFSET))(nullptr);
		}

		::System::Int32 get_DiscardPoint()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_DISCARDPOINT_OFFSET))(nullptr);
		}

		::System::Int64 EnvironmentLogicEffectId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ENVIRONMENTLOGICEFFECTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnvironmentLogicEffectIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_ENVIRONMENTLOGICEFFECTIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnvironmentLogicEffectIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GETENVIRONMENTLOGICEFFECTIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RequiredPerkId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_REQUIREDPERKID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RequiredPerkIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_REQUIREDPERKIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRequiredPerkIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GETREQUIREDPERKIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_SHOPORDER_OFFSET))(nullptr);
		}

		::System::String* get_ShopIcon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_SHOPICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetShopIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GETSHOPICONBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_ShopLocalizeTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_SHOPLOCALIZETITLE_OFFSET))(nullptr);
		}

		::System::UInt32 get_ShopLocalizeDesc()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_GET_SHOPLOCALIZEDESC_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGPerkExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int32, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_CREATEMINIGAMECCGPERKEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGPerkExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_STARTMINIGAMECCGPERKEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCCGId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDCCGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDCOSTPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRerollPoint(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDREROLLPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDiscardPoint(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDDISCARDPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnvironmentLogicEffectId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDENVIRONMENTLOGICEFFECTID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnvironmentLogicEffectIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_CREATEENVIRONMENTLOGICEFFECTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEnvironmentLogicEffectIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_STARTENVIRONMENTLOGICEFFECTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequiredPerkId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDREQUIREDPERKID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRequiredPerkIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_CREATEREQUIREDPERKIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRequiredPerkIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_STARTREQUIREDPERKIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDSHOPORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDSHOPICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopLocalizeTitle(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDSHOPLOCALIZETITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopLocalizeDesc(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ADDSHOPLOCALIZEDESC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGPerkExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_ENDMINIGAMECCGPERKEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGPerkExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_FINISHMINIGAMECCGPERKEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGPerkExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGPERKEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

