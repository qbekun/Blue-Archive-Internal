#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGLogicEffectExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B99B80)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GETROOTASMINIGAMECCGLOGICEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B99B90)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GETROOTASMINIGAMECCGLOGICEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B99BF0)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B99C80)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B99C50)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B99CA0)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GET_DATALOADPATH_OFFSET UNITYSDK_OFFSET(0x1B99CF0)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GETDATALOADPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B99D30)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1B99D50)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GETICONBYTES_OFFSET UNITYSDK_OFFSET(0x1B99D90)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_CREATEMINIGAMECCGLOGICEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B99DB0)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_STARTMINIGAMECCGLOGICEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B99F50)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B99E70)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_ADDDATALOADPATH_OFFSET UNITYSDK_OFFSET(0x1B99ED0)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_ADDICON_OFFSET UNITYSDK_OFFSET(0x1B99EA0)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_ENDMINIGAMECCGLOGICEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B99F00)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_FINISHMINIGAMECCGLOGICEFFECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B99F70)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGLOGICEFFECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B99F90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGLogicEffectExcel_TypeDefinitionIndex = 18503;

	class MinigameCCGLogicEffectExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGLogicEffectExcel* GetRootAsMinigameCCGLogicEffectExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGLogicEffectExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GETROOTASMINIGAMECCGLOGICEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGLogicEffectExcel* GetRootAsMinigameCCGLogicEffectExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGLogicEffectExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGLogicEffectExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGLogicEffectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GETROOTASMINIGAMECCGLOGICEFFECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGLogicEffectExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGLogicEffectExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_DataLoadPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GET_DATALOADPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDataLoadPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GETDATALOADPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Icon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GET_ICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_GETICONBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGLogicEffectExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_CREATEMINIGAMECCGLOGICEFFECTEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGLogicEffectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_STARTMINIGAMECCGLOGICEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDataLoadPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_ADDDATALOADPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_ADDICON_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGLogicEffectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_ENDMINIGAMECCGLOGICEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGLogicEffectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_FINISHMINIGAMECCGLOGICEFFECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGLogicEffectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGLOGICEFFECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

