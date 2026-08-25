#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class SpineLipsyncExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C90F00)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GETROOTASSPINELIPSYNCEXCEL_OFFSET UNITYSDK_OFFSET(0x1C90F10)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GETROOTASSPINELIPSYNCEXCEL_OFFSET UNITYSDK_OFFSET(0x1C90F70)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C91000)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C90FD0)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GET_VOICEID_OFFSET UNITYSDK_OFFSET(0x1C91020)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GET_ANIMJSON_OFFSET UNITYSDK_OFFSET(0x1C91070)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GETANIMJSONBYTES_OFFSET UNITYSDK_OFFSET(0x1C910B0)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GET_ANIMJSONKR_OFFSET UNITYSDK_OFFSET(0x1C910D0)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GETANIMJSONKRBYTES_OFFSET UNITYSDK_OFFSET(0x1C91110)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_CREATESPINELIPSYNCEXCEL_OFFSET UNITYSDK_OFFSET(0x1C91130)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_STARTSPINELIPSYNCEXCEL_OFFSET UNITYSDK_OFFSET(0x1C912C0)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_ADDVOICEID_OFFSET UNITYSDK_OFFSET(0x1C91240)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_ADDANIMJSON_OFFSET UNITYSDK_OFFSET(0x1C91210)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_ADDANIMJSONKR_OFFSET UNITYSDK_OFFSET(0x1C911E0)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_ENDSPINELIPSYNCEXCEL_OFFSET UNITYSDK_OFFSET(0x1C91270)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_FINISHSPINELIPSYNCEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C912E0)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCEL_FINISHSIZEPREFIXEDSPINELIPSYNCEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C91300)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SpineLipsyncExcel_TypeDefinitionIndex = 19516;

	class SpineLipsyncExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::SpineLipsyncExcel* GetRootAsSpineLipsyncExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SpineLipsyncExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GETROOTASSPINELIPSYNCEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::SpineLipsyncExcel* GetRootAsSpineLipsyncExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::SpineLipsyncExcel* arg)
		{
			return (return (::MX::Data::Excel::SpineLipsyncExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::SpineLipsyncExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GETROOTASSPINELIPSYNCEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::SpineLipsyncExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SpineLipsyncExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_VoiceId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GET_VOICEID_OFFSET))(nullptr);
		}

		::System::String* get_AnimJson()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GET_ANIMJSON_OFFSET))(nullptr);
		}

		Il2CppObject* GetAnimJsonBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GETANIMJSONBYTES_OFFSET))(nullptr);
		}

		::System::String* get_AnimJsonKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GET_ANIMJSONKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetAnimJsonKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_GETANIMJSONKRBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSpineLipsyncExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_CREATESPINELIPSYNCEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartSpineLipsyncExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_STARTSPINELIPSYNCEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddVoiceId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_ADDVOICEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimJson(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_ADDANIMJSON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimJsonKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_ADDANIMJSONKR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndSpineLipsyncExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_ENDSPINELIPSYNCEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSpineLipsyncExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_FINISHSPINELIPSYNCEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedSpineLipsyncExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCEL_FINISHSIZEPREFIXEDSPINELIPSYNCEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

