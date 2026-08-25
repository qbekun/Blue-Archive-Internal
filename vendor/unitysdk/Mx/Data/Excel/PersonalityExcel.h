#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class PersonalityExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_PERSONALITYEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C26BC0)
#define MX_DATA_EXCEL_PERSONALITYEXCEL_GETROOTASPERSONALITYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C26BD0)
#define MX_DATA_EXCEL_PERSONALITYEXCEL_GETROOTASPERSONALITYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C26C30)
#define MX_DATA_EXCEL_PERSONALITYEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C26CC0)
#define MX_DATA_EXCEL_PERSONALITYEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C26C90)
#define MX_DATA_EXCEL_PERSONALITYEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C26CE0)
#define MX_DATA_EXCEL_PERSONALITYEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C26D30)
#define MX_DATA_EXCEL_PERSONALITYEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C26D70)
#define MX_DATA_EXCEL_PERSONALITYEXCEL_CREATEPERSONALITYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C26D90)
#define MX_DATA_EXCEL_PERSONALITYEXCEL_STARTPERSONALITYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C26ED0)
#define MX_DATA_EXCEL_PERSONALITYEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C26E20)
#define MX_DATA_EXCEL_PERSONALITYEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1C26E50)
#define MX_DATA_EXCEL_PERSONALITYEXCEL_ENDPERSONALITYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C26E80)
#define MX_DATA_EXCEL_PERSONALITYEXCEL_FINISHPERSONALITYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C26EF0)
#define MX_DATA_EXCEL_PERSONALITYEXCEL_FINISHSIZEPREFIXEDPERSONALITYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C26F10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PersonalityExcel_TypeDefinitionIndex = 19026;

	class PersonalityExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::PersonalityExcel* GetRootAsPersonalityExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PersonalityExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL_GETROOTASPERSONALITYEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::PersonalityExcel* GetRootAsPersonalityExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::PersonalityExcel* arg)
		{
			return (return (::MX::Data::Excel::PersonalityExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::PersonalityExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL_GETROOTASPERSONALITYEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::PersonalityExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PersonalityExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePersonalityExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL_CREATEPERSONALITYEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartPersonalityExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL_STARTPERSONALITYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndPersonalityExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL_ENDPERSONALITYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishPersonalityExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL_FINISHPERSONALITYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedPersonalityExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERSONALITYEXCEL_FINISHSIZEPREFIXEDPERSONALITYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

