#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDreamDailyPointExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BADF70)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GETROOTASMINIGAMEDREAMDAILYPOINTEXCEL_OFFSET UNITYSDK_OFFSET(0x1BADF80)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GETROOTASMINIGAMEDREAMDAILYPOINTEXCEL_OFFSET UNITYSDK_OFFSET(0x1BADFE0)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BAE070)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BAE040)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BAE090)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BAE0E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_TOTALPARAMETERMIN_OFFSET UNITYSDK_OFFSET(0x1BAE130)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_TOTALPARAMETERMAX_OFFSET UNITYSDK_OFFSET(0x1BAE180)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_DAILYPOINTCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x1BAE1D0)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_DAILYPOINTCORRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1BAE220)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_CREATEMINIGAMEDREAMDAILYPOINTEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAE270)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_STARTMINIGAMEDREAMDAILYPOINTEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAE510)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BAE490)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BAE460)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ADDTOTALPARAMETERMIN_OFFSET UNITYSDK_OFFSET(0x1BAE430)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ADDTOTALPARAMETERMAX_OFFSET UNITYSDK_OFFSET(0x1BAE400)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ADDDAILYPOINTCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x1BAE3D0)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ADDDAILYPOINTCORRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1BAE3A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ENDMINIGAMEDREAMDAILYPOINTEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAE4C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_FINISHMINIGAMEDREAMDAILYPOINTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BAE530)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMDAILYPOINTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BAE550)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamDailyPointExcel_TypeDefinitionIndex = 18610;

	class MiniGameDreamDailyPointExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDreamDailyPointExcel* GetRootAsMiniGameDreamDailyPointExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamDailyPointExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GETROOTASMINIGAMEDREAMDAILYPOINTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamDailyPointExcel* GetRootAsMiniGameDreamDailyPointExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDreamDailyPointExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamDailyPointExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDreamDailyPointExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GETROOTASMINIGAMEDREAMDAILYPOINTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamDailyPointExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamDailyPointExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalParameterMin()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_TOTALPARAMETERMIN_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalParameterMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_TOTALPARAMETERMAX_OFFSET))(nullptr);
		}

		::System::Int64 get_DailyPointCoefficient()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_DAILYPOINTCOEFFICIENT_OFFSET))(nullptr);
		}

		::System::Int64 get_DailyPointCorrectionValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_GET_DAILYPOINTCORRECTIONVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDreamDailyPointExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_CREATEMINIGAMEDREAMDAILYPOINTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDreamDailyPointExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_STARTMINIGAMEDREAMDAILYPOINTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTotalParameterMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ADDTOTALPARAMETERMIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTotalParameterMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ADDTOTALPARAMETERMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDailyPointCoefficient(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ADDDAILYPOINTCOEFFICIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDailyPointCorrectionValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ADDDAILYPOINTCORRECTIONVALUE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDreamDailyPointExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_ENDMINIGAMEDREAMDAILYPOINTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDreamDailyPointExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_FINISHMINIGAMEDREAMDAILYPOINTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDreamDailyPointExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMDAILYPOINTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

