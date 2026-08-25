#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class BGMUIExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_BGMUIEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19F0D70)
#define MX_DATA_EXCEL_BGMUIEXCEL_GETROOTASBGMUIEXCEL_OFFSET UNITYSDK_OFFSET(0x19F0D80)
#define MX_DATA_EXCEL_BGMUIEXCEL_GETROOTASBGMUIEXCEL_OFFSET UNITYSDK_OFFSET(0x19F0DE0)
#define MX_DATA_EXCEL_BGMUIEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19F0E70)
#define MX_DATA_EXCEL_BGMUIEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19F0E40)
#define MX_DATA_EXCEL_BGMUIEXCEL_GET_UIPREFAB_OFFSET UNITYSDK_OFFSET(0x19F0E90)
#define MX_DATA_EXCEL_BGMUIEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x19F0EE0)
#define MX_DATA_EXCEL_BGMUIEXCEL_GET_BGMID2ND_OFFSET UNITYSDK_OFFSET(0x19F0F30)
#define MX_DATA_EXCEL_BGMUIEXCEL_GET_BGMID3RD_OFFSET UNITYSDK_OFFSET(0x19F0F80)
#define MX_DATA_EXCEL_BGMUIEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x19F0FD0)
#define MX_DATA_EXCEL_BGMUIEXCEL_CREATEBGMUIEXCEL_OFFSET UNITYSDK_OFFSET(0x19F1020)
#define MX_DATA_EXCEL_BGMUIEXCEL_STARTBGMUIEXCEL_OFFSET UNITYSDK_OFFSET(0x19F1260)
#define MX_DATA_EXCEL_BGMUIEXCEL_ADDUIPREFAB_OFFSET UNITYSDK_OFFSET(0x19F11E0)
#define MX_DATA_EXCEL_BGMUIEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x19F11B0)
#define MX_DATA_EXCEL_BGMUIEXCEL_ADDBGMID2ND_OFFSET UNITYSDK_OFFSET(0x19F1180)
#define MX_DATA_EXCEL_BGMUIEXCEL_ADDBGMID3RD_OFFSET UNITYSDK_OFFSET(0x19F1150)
#define MX_DATA_EXCEL_BGMUIEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x19F1120)
#define MX_DATA_EXCEL_BGMUIEXCEL_ENDBGMUIEXCEL_OFFSET UNITYSDK_OFFSET(0x19F1210)
#define MX_DATA_EXCEL_BGMUIEXCEL_FINISHBGMUIEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19F1280)
#define MX_DATA_EXCEL_BGMUIEXCEL_FINISHSIZEPREFIXEDBGMUIEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19F12A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BGMUIExcel_TypeDefinitionIndex = 16802;

	class BGMUIExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::BGMUIExcel* GetRootAsBGMUIExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BGMUIExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_GETROOTASBGMUIEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::BGMUIExcel* GetRootAsBGMUIExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::BGMUIExcel* arg)
		{
			return (return (::MX::Data::Excel::BGMUIExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::BGMUIExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_GETROOTASBGMUIEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::BGMUIExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BGMUIExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_UIPrefab()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_GET_UIPREFAB_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId2nd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_GET_BGMID2ND_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId3rd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_GET_BGMID3RD_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBGMUIExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_CREATEBGMUIEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartBGMUIExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_STARTBGMUIEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUIPrefab(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_ADDUIPREFAB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMId2nd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_ADDBGMID2ND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMId3rd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_ADDBGMID3RD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndBGMUIExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_ENDBGMUIEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBGMUIExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_FINISHBGMUIEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedBGMUIExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIEXCEL_FINISHSIZEPREFIXEDBGMUIEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

