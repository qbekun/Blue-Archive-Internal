#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ToastExcel; }
namespace FlatData { class ToastType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_TOASTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA6BD0)
#define MX_DATA_EXCEL_TOASTEXCEL_GETROOTASTOASTEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA6BE0)
#define MX_DATA_EXCEL_TOASTEXCEL_GETROOTASTOASTEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA6C40)
#define MX_DATA_EXCEL_TOASTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CA6CD0)
#define MX_DATA_EXCEL_TOASTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CA6CA0)
#define MX_DATA_EXCEL_TOASTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CA6CF0)
#define MX_DATA_EXCEL_TOASTEXCEL_GET_TOASTTYPE_OFFSET UNITYSDK_OFFSET(0x1CA6D40)
#define MX_DATA_EXCEL_TOASTEXCEL_GET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x1CA6D90)
#define MX_DATA_EXCEL_TOASTEXCEL_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x1CA6DE0)
#define MX_DATA_EXCEL_TOASTEXCEL_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x1CA6E30)
#define MX_DATA_EXCEL_TOASTEXCEL_CREATETOASTEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA6E80)
#define MX_DATA_EXCEL_TOASTEXCEL_STARTTOASTEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA70C0)
#define MX_DATA_EXCEL_TOASTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CA7040)
#define MX_DATA_EXCEL_TOASTEXCEL_ADDTOASTTYPE_OFFSET UNITYSDK_OFFSET(0x1CA7010)
#define MX_DATA_EXCEL_TOASTEXCEL_ADDMISSIONID_OFFSET UNITYSDK_OFFSET(0x1CA6FE0)
#define MX_DATA_EXCEL_TOASTEXCEL_ADDTEXTID_OFFSET UNITYSDK_OFFSET(0x1CA6FB0)
#define MX_DATA_EXCEL_TOASTEXCEL_ADDLIFETIME_OFFSET UNITYSDK_OFFSET(0x1CA6F80)
#define MX_DATA_EXCEL_TOASTEXCEL_ENDTOASTEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA7070)
#define MX_DATA_EXCEL_TOASTEXCEL_FINISHTOASTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA70E0)
#define MX_DATA_EXCEL_TOASTEXCEL_FINISHSIZEPREFIXEDTOASTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA7100)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ToastExcel_TypeDefinitionIndex = 19624;

	class ToastExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ToastExcel* GetRootAsToastExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ToastExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_GETROOTASTOASTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ToastExcel* GetRootAsToastExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ToastExcel* arg)
		{
			return (return (::MX::Data::Excel::ToastExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ToastExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_GETROOTASTOASTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ToastExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ToastExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_Id()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ToastType* get_ToastType()
		{
			return (return (::FlatData::ToastType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_GET_TOASTTYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_MissionId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_GET_MISSIONID_OFFSET))(nullptr);
		}

		::System::UInt32 get_TextId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_GET_TEXTID_OFFSET))(nullptr);
		}

		::System::Int64 get_LifeTime()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_GET_LIFETIME_OFFSET))(nullptr);
		}

		Il2CppObject* CreateToastExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatData::ToastType* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatData::ToastType*, ::System::UInt32, ::System::UInt32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_CREATETOASTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartToastExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_STARTTOASTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToastType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ToastType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ToastType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_ADDTOASTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_ADDMISSIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTextId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_ADDTEXTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLifeTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_ADDLIFETIME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndToastExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_ENDTOASTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishToastExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_FINISHTOASTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedToastExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TOASTEXCEL_FINISHSIZEPREFIXEDTOASTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

