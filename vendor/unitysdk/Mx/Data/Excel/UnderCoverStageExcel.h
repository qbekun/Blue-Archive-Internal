#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class UnderCoverStageExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CAD130)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GETROOTASUNDERCOVERSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAD140)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GETROOTASUNDERCOVERSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAD1A0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CAD230)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CAD200)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CAD250)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_STAGENAMEFILE_OFFSET UNITYSDK_OFFSET(0x1CAD2A0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GETSTAGENAMEFILEBYTES_OFFSET UNITYSDK_OFFSET(0x1CAD2E0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_STAGETRYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CAD300)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_APPLYSKIP_OFFSET UNITYSDK_OFFSET(0x1CAD350)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_SKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1CAD3A0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_SHOWCLEARSCENE_OFFSET UNITYSDK_OFFSET(0x1CAD3F0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_STAGETIPS_OFFSET UNITYSDK_OFFSET(0x1CAD440)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x1CAD490)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_CREATEUNDERCOVERSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAD4E0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_STARTUNDERCOVERSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAD830)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CAD660)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDSTAGENAMEFILE_OFFSET UNITYSDK_OFFSET(0x1CAD750)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDSTAGETRYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CAD720)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDAPPLYSKIP_OFFSET UNITYSDK_OFFSET(0x1CAD7B0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1CAD6F0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDSHOWCLEARSCENE_OFFSET UNITYSDK_OFFSET(0x1CAD780)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDSTAGETIPS_OFFSET UNITYSDK_OFFSET(0x1CAD6C0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDSTAGENAME_OFFSET UNITYSDK_OFFSET(0x1CAD690)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ENDUNDERCOVERSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAD7E0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_FINISHUNDERCOVERSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CAD850)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_FINISHSIZEPREFIXEDUNDERCOVERSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CAD870)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int UnderCoverStageExcel_TypeDefinitionIndex = 19659;

	class UnderCoverStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::UnderCoverStageExcel* GetRootAsUnderCoverStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::UnderCoverStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GETROOTASUNDERCOVERSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::UnderCoverStageExcel* GetRootAsUnderCoverStageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::UnderCoverStageExcel* arg)
		{
			return (return (::MX::Data::Excel::UnderCoverStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::UnderCoverStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GETROOTASUNDERCOVERSTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::UnderCoverStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::UnderCoverStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::String* get_StageNameFile()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_STAGENAMEFILE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageNameFileBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GETSTAGENAMEFILEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_StageTryCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_STAGETRYCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplySkip()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_APPLYSKIP_OFFSET))(nullptr);
		}

		::System::Int32 get_SkipCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_SKIPCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowClearScene()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_SHOWCLEARSCENE_OFFSET))(nullptr);
		}

		::System::UInt32 get_StageTips()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_STAGETIPS_OFFSET))(nullptr);
		}

		::System::UInt32 get_StageName()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_GET_STAGENAME_OFFSET))(nullptr);
		}

		Il2CppObject* CreateUnderCoverStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Boolean arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_CREATEUNDERCOVERSTAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartUnderCoverStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_STARTUNDERCOVERSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageNameFile(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDSTAGENAMEFILE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageTryCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDSTAGETRYCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddApplySkip(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDAPPLYSKIP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkipCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDSKIPCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowClearScene(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDSHOWCLEARSCENE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageTips(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDSTAGETIPS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ADDSTAGENAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndUnderCoverStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_ENDUNDERCOVERSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishUnderCoverStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_FINISHUNDERCOVERSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedUnderCoverStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCEL_FINISHSIZEPREFIXEDUNDERCOVERSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

