#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AssistEchelonTypeConvertExcel; }
namespace FlatData { class EchelonType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19D7CC0)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_GETROOTASASSISTECHELONTYPECONVERTEXCEL_OFFSET UNITYSDK_OFFSET(0x19D7CD0)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_GETROOTASASSISTECHELONTYPECONVERTEXCEL_OFFSET UNITYSDK_OFFSET(0x19D7D30)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19D7DC0)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19D7D90)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_GET_CONTENTS_OFFSET UNITYSDK_OFFSET(0x19D7DE0)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_GET_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x19D7E30)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_CREATEASSISTECHELONTYPECONVERTEXCEL_OFFSET UNITYSDK_OFFSET(0x19D7E80)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_STARTASSISTECHELONTYPECONVERTEXCEL_OFFSET UNITYSDK_OFFSET(0x19D7FC0)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_ADDCONTENTS_OFFSET UNITYSDK_OFFSET(0x19D7F40)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_ADDCONVERTTO_OFFSET UNITYSDK_OFFSET(0x19D7F10)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_ENDASSISTECHELONTYPECONVERTEXCEL_OFFSET UNITYSDK_OFFSET(0x19D7F70)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_FINISHASSISTECHELONTYPECONVERTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D7FE0)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_FINISHSIZEPREFIXEDASSISTECHELONTYPECONVERTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D8000)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AssistEchelonTypeConvertExcel_TypeDefinitionIndex = 16682;

	class AssistEchelonTypeConvertExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AssistEchelonTypeConvertExcel* GetRootAsAssistEchelonTypeConvertExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AssistEchelonTypeConvertExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_GETROOTASASSISTECHELONTYPECONVERTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AssistEchelonTypeConvertExcel* GetRootAsAssistEchelonTypeConvertExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AssistEchelonTypeConvertExcel* arg)
		{
			return (return (::MX::Data::Excel::AssistEchelonTypeConvertExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AssistEchelonTypeConvertExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_GETROOTASASSISTECHELONTYPECONVERTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AssistEchelonTypeConvertExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AssistEchelonTypeConvertExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::EchelonType* get_Contents()
		{
			return (return (::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_GET_CONTENTS_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_ConvertTo()
		{
			return (return (::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_GET_CONVERTTO_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAssistEchelonTypeConvertExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonType* arg, ::FlatData::EchelonType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonType*, ::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_CREATEASSISTECHELONTYPECONVERTEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartAssistEchelonTypeConvertExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_STARTASSISTECHELONTYPECONVERTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddContents(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_ADDCONTENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConvertTo(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_ADDCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAssistEchelonTypeConvertExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_ENDASSISTECHELONTYPECONVERTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAssistEchelonTypeConvertExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_FINISHASSISTECHELONTYPECONVERTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAssistEchelonTypeConvertExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCEL_FINISHSIZEPREFIXEDASSISTECHELONTYPECONVERTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

