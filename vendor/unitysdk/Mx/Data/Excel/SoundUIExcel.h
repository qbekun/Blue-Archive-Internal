#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class SoundUIExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SOUNDUIEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8FE20)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_GETROOTASSOUNDUIEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8FE30)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_GETROOTASSOUNDUIEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8FE90)
#define MX_DATA_EXCEL_SOUNDUIEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C8FF20)
#define MX_DATA_EXCEL_SOUNDUIEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C8FEF0)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C8FF40)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_GET_SOUNDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C8FF90)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_GETSOUNDUNIQUEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C8FFD0)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1C8FFF0)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_GETPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C90030)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_CREATESOUNDUIEXCEL_OFFSET UNITYSDK_OFFSET(0x1C90050)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_STARTSOUNDUIEXCEL_OFFSET UNITYSDK_OFFSET(0x1C901F0)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C90110)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_ADDSOUNDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C90170)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_ADDPATH_OFFSET UNITYSDK_OFFSET(0x1C90140)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_ENDSOUNDUIEXCEL_OFFSET UNITYSDK_OFFSET(0x1C901A0)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_FINISHSOUNDUIEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C90210)
#define MX_DATA_EXCEL_SOUNDUIEXCEL_FINISHSIZEPREFIXEDSOUNDUIEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C90230)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SoundUIExcel_TypeDefinitionIndex = 19509;

	class SoundUIExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::SoundUIExcel* GetRootAsSoundUIExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SoundUIExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_GETROOTASSOUNDUIEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::SoundUIExcel* GetRootAsSoundUIExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::SoundUIExcel* arg)
		{
			return (return (::MX::Data::Excel::SoundUIExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::SoundUIExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_GETROOTASSOUNDUIEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::SoundUIExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SoundUIExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_SoundUniqueId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_GET_SOUNDUNIQUEID_OFFSET))(nullptr);
		}

		Il2CppObject* GetSoundUniqueIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_GETSOUNDUNIQUEIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_GET_PATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_GETPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSoundUIExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_CREATESOUNDUIEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartSoundUIExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_STARTSOUNDUIEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSoundUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_ADDSOUNDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_ADDPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndSoundUIExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_ENDSOUNDUIEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSoundUIExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_FINISHSOUNDUIEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedSoundUIExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCEL_FINISHSIZEPREFIXEDSOUNDUIEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

