#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ContentsFeverExcel; }
namespace FlatData { class FeverBattleType; }
namespace FlatData { class SkillPriorityCheckTarget; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A6EFF0)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GETROOTASCONTENTSFEVEREXCEL_OFFSET UNITYSDK_OFFSET(0x1A6F000)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GETROOTASCONTENTSFEVEREXCEL_OFFSET UNITYSDK_OFFSET(0x1A6F060)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A6F0F0)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A6F0C0)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GET_CONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1A6F110)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GET_SKILLFEVERCHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x1A6F160)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GET_SKILLCOSTFEVER_OFFSET UNITYSDK_OFFSET(0x1A6F1B0)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GET_FEVERSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1A6F200)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GET_FEVERDURATIONTIME_OFFSET UNITYSDK_OFFSET(0x1A6F250)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_CREATECONTENTSFEVEREXCEL_OFFSET UNITYSDK_OFFSET(0x1A6F2A0)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_STARTCONTENTSFEVEREXCEL_OFFSET UNITYSDK_OFFSET(0x1A6F4E0)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_ADDCONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1A6F460)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_ADDSKILLFEVERCHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x1A6F430)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_ADDSKILLCOSTFEVER_OFFSET UNITYSDK_OFFSET(0x1A6F400)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_ADDFEVERSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1A6F3D0)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_ADDFEVERDURATIONTIME_OFFSET UNITYSDK_OFFSET(0x1A6F3A0)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_ENDCONTENTSFEVEREXCEL_OFFSET UNITYSDK_OFFSET(0x1A6F490)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_FINISHCONTENTSFEVEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A6F500)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCEL_FINISHSIZEPREFIXEDCONTENTSFEVEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A6F520)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentsFeverExcel_TypeDefinitionIndex = 17316;

	class ContentsFeverExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ContentsFeverExcel* GetRootAsContentsFeverExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ContentsFeverExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GETROOTASCONTENTSFEVEREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ContentsFeverExcel* GetRootAsContentsFeverExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ContentsFeverExcel* arg)
		{
			return (return (::MX::Data::Excel::ContentsFeverExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ContentsFeverExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GETROOTASCONTENTSFEVEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ContentsFeverExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ContentsFeverExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::FeverBattleType* get_ConditionContent()
		{
			return (return (::FlatData::FeverBattleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GET_CONDITIONCONTENT_OFFSET))(nullptr);
		}

		::FlatData::SkillPriorityCheckTarget* get_SkillFeverCheckCondition()
		{
			return (return (::FlatData::SkillPriorityCheckTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GET_SKILLFEVERCHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_SkillCostFever()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GET_SKILLCOSTFEVER_OFFSET))(nullptr);
		}

		::System::Int64 get_FeverStartTime()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GET_FEVERSTARTTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_FeverDurationTime()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_GET_FEVERDURATIONTIME_OFFSET))(nullptr);
		}

		Il2CppObject* CreateContentsFeverExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FeverBattleType* arg, ::FlatData::SkillPriorityCheckTarget* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FeverBattleType*, ::FlatData::SkillPriorityCheckTarget*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_CREATECONTENTSFEVEREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartContentsFeverExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_STARTCONTENTSFEVEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddConditionContent(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FeverBattleType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FeverBattleType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_ADDCONDITIONCONTENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillFeverCheckCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::SkillPriorityCheckTarget* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::SkillPriorityCheckTarget*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_ADDSKILLFEVERCHECKCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillCostFever(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_ADDSKILLCOSTFEVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFeverStartTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_ADDFEVERSTARTTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFeverDurationTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_ADDFEVERDURATIONTIME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndContentsFeverExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_ENDCONTENTSFEVEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishContentsFeverExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_FINISHCONTENTSFEVEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedContentsFeverExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCEL_FINISHSIZEPREFIXEDCONTENTSFEVEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

