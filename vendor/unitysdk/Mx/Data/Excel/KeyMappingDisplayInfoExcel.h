#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class KeyMappingDisplayInfoExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6CA00)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GETROOTASKEYMAPPINGDISPLAYINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6CA10)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GETROOTASKEYMAPPINGDISPLAYINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6CA70)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B6CB00)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B6CAD0)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GET_KEYMAPPINGKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6CB20)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GETKEYMAPPINGKEYCODEBYTES_OFFSET UNITYSDK_OFFSET(0x1B6CB60)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GET_KEYMAPPINGDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B6CB80)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GETKEYMAPPINGDISPLAYNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B6CBC0)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_CREATEKEYMAPPINGDISPLAYINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6CBE0)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_STARTKEYMAPPINGDISPLAYINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6CD20)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_ADDKEYMAPPINGKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6CCA0)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_ADDKEYMAPPINGDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B6CC70)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_ENDKEYMAPPINGDISPLAYINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6CCD0)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_FINISHKEYMAPPINGDISPLAYINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6CD40)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_FINISHSIZEPREFIXEDKEYMAPPINGDISPLAYINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6CD60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingDisplayInfoExcel_TypeDefinitionIndex = 18297;

	class KeyMappingDisplayInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::KeyMappingDisplayInfoExcel* GetRootAsKeyMappingDisplayInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingDisplayInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GETROOTASKEYMAPPINGDISPLAYINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::KeyMappingDisplayInfoExcel* GetRootAsKeyMappingDisplayInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::KeyMappingDisplayInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingDisplayInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::KeyMappingDisplayInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GETROOTASKEYMAPPINGDISPLAYINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::KeyMappingDisplayInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingDisplayInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_KeyMappingKeyCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GET_KEYMAPPINGKEYCODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetKeyMappingKeyCodeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GETKEYMAPPINGKEYCODEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_KeyMappingDisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GET_KEYMAPPINGDISPLAYNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetKeyMappingDisplayNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_GETKEYMAPPINGDISPLAYNAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateKeyMappingDisplayInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_CREATEKEYMAPPINGDISPLAYINFOEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartKeyMappingDisplayInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_STARTKEYMAPPINGDISPLAYINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddKeyMappingKeyCode(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_ADDKEYMAPPINGKEYCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKeyMappingDisplayName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_ADDKEYMAPPINGDISPLAYNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndKeyMappingDisplayInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_ENDKEYMAPPINGDISPLAYINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishKeyMappingDisplayInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_FINISHKEYMAPPINGDISPLAYINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedKeyMappingDisplayInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFOEXCEL_FINISHSIZEPREFIXEDKEYMAPPINGDISPLAYINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

