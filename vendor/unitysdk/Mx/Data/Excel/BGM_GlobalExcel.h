#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class BGM_GlobalExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19F2370)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_GETROOTASBGM_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x19F2380)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_GETROOTASBGM_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x19F23E0)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19F2470)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19F2440)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_GROUPBGMID_OFFSET UNITYSDK_OFFSET(0x19F2490)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_BGMIDKR_OFFSET UNITYSDK_OFFSET(0x19F24E0)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_BGMIDJP_OFFSET UNITYSDK_OFFSET(0x19F2530)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_BGMIDTH_OFFSET UNITYSDK_OFFSET(0x19F2580)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_BGMIDTW_OFFSET UNITYSDK_OFFSET(0x19F25D0)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_BGMIDEN_OFFSET UNITYSDK_OFFSET(0x19F2620)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_CREATEBGM_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x19F2670)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_STARTBGM_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x19F2910)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_ADDGROUPBGMID_OFFSET UNITYSDK_OFFSET(0x19F2890)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_ADDBGMIDKR_OFFSET UNITYSDK_OFFSET(0x19F2860)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_ADDBGMIDJP_OFFSET UNITYSDK_OFFSET(0x19F2830)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_ADDBGMIDTH_OFFSET UNITYSDK_OFFSET(0x19F2800)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_ADDBGMIDTW_OFFSET UNITYSDK_OFFSET(0x19F27D0)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_ADDBGMIDEN_OFFSET UNITYSDK_OFFSET(0x19F27A0)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_ENDBGM_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x19F28C0)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_FINISHBGM_GLOBALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19F2930)
#define MX_DATA_EXCEL_BGM_GLOBALEXCEL_FINISHSIZEPREFIXEDBGM_GLOBALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19F2950)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BGM_GlobalExcel_TypeDefinitionIndex = 16809;

	class BGM_GlobalExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::BGM_GlobalExcel* GetRootAsBGM_GlobalExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BGM_GlobalExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_GETROOTASBGM_GLOBALEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::BGM_GlobalExcel* GetRootAsBGM_GlobalExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::BGM_GlobalExcel* arg)
		{
			return (return (::MX::Data::Excel::BGM_GlobalExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::BGM_GlobalExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_GETROOTASBGM_GLOBALEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::BGM_GlobalExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BGM_GlobalExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupBGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_GROUPBGMID_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMIdKr()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_BGMIDKR_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMIdJp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_BGMIDJP_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMIdTh()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_BGMIDTH_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMIdTw()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_BGMIDTW_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMIdEn()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_GET_BGMIDEN_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBGM_GlobalExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_CREATEBGM_GLOBALEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartBGM_GlobalExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_STARTBGM_GLOBALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_ADDGROUPBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMIdKr(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_ADDBGMIDKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMIdJp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_ADDBGMIDJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMIdTh(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_ADDBGMIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMIdTw(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_ADDBGMIDTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMIdEn(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_ADDBGMIDEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndBGM_GlobalExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_ENDBGM_GLOBALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBGM_GlobalExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_FINISHBGM_GLOBALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedBGM_GlobalExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGM_GLOBALEXCEL_FINISHSIZEPREFIXEDBGM_GLOBALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

