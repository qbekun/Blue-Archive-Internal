#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentBoxGachaManageExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A94C80)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GETROOTASEVENTCONTENTBOXGACHAMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A94C90)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GETROOTASEVENTCONTENTBOXGACHAMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A94CF0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A94D80)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A94D50)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A94DA0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1A94DF0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1A94E40)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1A94E90)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_CREATEEVENTCONTENTBOXGACHAMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A94EE0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_STARTEVENTCONTENTBOXGACHAMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A950D0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A95020)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_ADDROUND_OFFSET UNITYSDK_OFFSET(0x1A94FF0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_ADDGOODSID_OFFSET UNITYSDK_OFFSET(0x1A94FC0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_ADDISLOOP_OFFSET UNITYSDK_OFFSET(0x1A95050)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_ENDEVENTCONTENTBOXGACHAMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A95080)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_FINISHEVENTCONTENTBOXGACHAMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A950F0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTBOXGACHAMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A95110)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentBoxGachaManageExcel_TypeDefinitionIndex = 17475;

	class EventContentBoxGachaManageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentBoxGachaManageExcel* GetRootAsEventContentBoxGachaManageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentBoxGachaManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GETROOTASEVENTCONTENTBOXGACHAMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentBoxGachaManageExcel* GetRootAsEventContentBoxGachaManageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentBoxGachaManageExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentBoxGachaManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentBoxGachaManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GETROOTASEVENTCONTENTBOXGACHAMANAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentBoxGachaManageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentBoxGachaManageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_Round()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Int64 get_GoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GET_GOODSID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_GET_ISLOOP_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentBoxGachaManageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_CREATEEVENTCONTENTBOXGACHAMANAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentBoxGachaManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_STARTEVENTCONTENTBOXGACHAMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRound(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_ADDROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_ADDGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLoop(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_ADDISLOOP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentBoxGachaManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_ENDEVENTCONTENTBOXGACHAMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentBoxGachaManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_FINISHEVENTCONTENTBOXGACHAMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentBoxGachaManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTBOXGACHAMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

