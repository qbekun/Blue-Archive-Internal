#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGSkillExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA2820)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GETROOTASMINIGAMECCGSKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA2830)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GETROOTASMINIGAMECCGSKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA2890)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BA2920)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BA28F0)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BA2940)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1BA2990)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GETSKILLTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1BA29D0)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_DATALOADPATH_OFFSET UNITYSDK_OFFSET(0x1BA29F0)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GETDATALOADPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1BA2A30)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BA2A50)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1BA2AA0)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_SKILLICON_OFFSET UNITYSDK_OFFSET(0x1BA2AF0)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GETSKILLICONBYTES_OFFSET UNITYSDK_OFFSET(0x1BA2B30)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_CREATEMINIGAMECCGSKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA2B50)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_STARTMINIGAMECCGSKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA2DF0)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1BA2C80)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ADDSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1BA2D70)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ADDDATALOADPATH_OFFSET UNITYSDK_OFFSET(0x1BA2D40)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1BA2D10)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ADDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1BA2CE0)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ADDSKILLICON_OFFSET UNITYSDK_OFFSET(0x1BA2CB0)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ENDMINIGAMECCGSKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA2DA0)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_FINISHMINIGAMECCGSKILLEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA2E10)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGSKILLEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA2E30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGSkillExcel_TypeDefinitionIndex = 18551;

	class MinigameCCGSkillExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGSkillExcel* GetRootAsMinigameCCGSkillExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGSkillExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GETROOTASMINIGAMECCGSKILLEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGSkillExcel* GetRootAsMinigameCCGSkillExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGSkillExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGSkillExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGSkillExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GETROOTASMINIGAMECCGSKILLEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGSkillExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGSkillExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_SkillType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_SKILLTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GETSKILLTYPEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DataLoadPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_DATALOADPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDataLoadPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GETDATALOADPATHBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		::System::UInt32 get_Description()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::String* get_SkillIcon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GET_SKILLICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_GETSKILLICONBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGSkillExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::UInt32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_CREATEMINIGAMECCGSKILLEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGSkillExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_STARTMINIGAMECCGSKILLEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ADDSKILLTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDataLoadPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ADDDATALOADPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ADDDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ADDSKILLICON_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGSkillExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_ENDMINIGAMECCGSKILLEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGSkillExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_FINISHMINIGAMECCGSKILLEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGSkillExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGSKILLEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

