#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShopRecruitDirectingExcel; }
namespace FlatData { class GachaPhase; }
namespace FlatData { class DirectingCharacter; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C7CFA0)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GETROOTASSHOPRECRUITDIRECTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7CFB0)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GETROOTASSHOPRECRUITDIRECTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7D010)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C7D0A0)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C7D070)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1C7D0C0)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GETPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C7D100)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1C7D120)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GET_GACHAAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C7D170)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GET_ISSSR_OFFSET UNITYSDK_OFFSET(0x1C7D1C0)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1C7D210)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_CREATESHOPRECRUITDIRECTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7D260)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_STARTSHOPRECRUITDIRECTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7D4A0)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_ADDPATH_OFFSET UNITYSDK_OFFSET(0x1C7D3F0)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_ADDPHASE_OFFSET UNITYSDK_OFFSET(0x1C7D3C0)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_ADDGACHAAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C7D390)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_ADDISSSR_OFFSET UNITYSDK_OFFSET(0x1C7D420)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_ADDCHARACTER_OFFSET UNITYSDK_OFFSET(0x1C7D360)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_ENDSHOPRECRUITDIRECTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7D450)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_FINISHSHOPRECRUITDIRECTINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C7D4C0)
#define MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_FINISHSIZEPREFIXEDSHOPRECRUITDIRECTINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C7D4E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopRecruitDirectingExcel_TypeDefinitionIndex = 19419;

	class ShopRecruitDirectingExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopRecruitDirectingExcel* GetRootAsShopRecruitDirectingExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopRecruitDirectingExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GETROOTASSHOPRECRUITDIRECTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopRecruitDirectingExcel* GetRootAsShopRecruitDirectingExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShopRecruitDirectingExcel* arg)
		{
			return (return (::MX::Data::Excel::ShopRecruitDirectingExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShopRecruitDirectingExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GETROOTASSHOPRECRUITDIRECTINGEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShopRecruitDirectingExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopRecruitDirectingExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GET_PATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GETPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::GachaPhase* get_Phase()
		{
			return (return (::FlatData::GachaPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GET_PHASE_OFFSET))(nullptr);
		}

		::System::Int32 get_GachaAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GET_GACHAAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSSR()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GET_ISSSR_OFFSET))(nullptr);
		}

		::FlatData::DirectingCharacter* get_Character()
		{
			return (return (::FlatData::DirectingCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_GET_CHARACTER_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShopRecruitDirectingExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::GachaPhase* arg, ::System::Int32 arg, ::System::Boolean arg, ::FlatData::DirectingCharacter* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatData::GachaPhase*, ::System::Int32, ::System::Boolean, ::FlatData::DirectingCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_CREATESHOPRECRUITDIRECTINGEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShopRecruitDirectingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_STARTSHOPRECRUITDIRECTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_ADDPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPhase(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::GachaPhase* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::GachaPhase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_ADDPHASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGachaAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_ADDGACHAAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsSSR(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_ADDISSSR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DirectingCharacter* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DirectingCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_ADDCHARACTER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShopRecruitDirectingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_ENDSHOPRECRUITDIRECTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShopRecruitDirectingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_FINISHSHOPRECRUITDIRECTINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShopRecruitDirectingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITDIRECTINGEXCEL_FINISHSIZEPREFIXEDSHOPRECRUITDIRECTINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

