#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class SkillSelectExTooltipExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8AE90)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GETROOTASSKILLSELECTEXTOOLTIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8AEA0)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GETROOTASSKILLSELECTEXTOOLTIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8AF00)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C8AF90)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C8AF60)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C8AFB0)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GET_SELECTABLEEXSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1C8B000)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GETSELECTABLEEXSKILLGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C8B040)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GET_SKILLUSECONDITIONLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1C8B060)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GETSKILLUSECONDITIONLOCALIZEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C8B0A0)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_CREATESKILLSELECTEXTOOLTIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8B0C0)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_STARTSKILLSELECTEXTOOLTIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8B260)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C8B180)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_ADDSELECTABLEEXSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1C8B1E0)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_ADDSKILLUSECONDITIONLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1C8B1B0)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_ENDSKILLSELECTEXTOOLTIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8B210)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_FINISHSKILLSELECTEXTOOLTIPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8B280)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_FINISHSIZEPREFIXEDSKILLSELECTEXTOOLTIPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8B2A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SkillSelectExTooltipExcel_TypeDefinitionIndex = 19481;

	class SkillSelectExTooltipExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::SkillSelectExTooltipExcel* GetRootAsSkillSelectExTooltipExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SkillSelectExTooltipExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GETROOTASSKILLSELECTEXTOOLTIPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::SkillSelectExTooltipExcel* GetRootAsSkillSelectExTooltipExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::SkillSelectExTooltipExcel* arg)
		{
			return (return (::MX::Data::Excel::SkillSelectExTooltipExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::SkillSelectExTooltipExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GETROOTASSKILLSELECTEXTOOLTIPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::SkillSelectExTooltipExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SkillSelectExTooltipExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::String* get_SelectableExSkillGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GET_SELECTABLEEXSKILLGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetSelectableExSkillGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GETSELECTABLEEXSKILLGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SkillUseConditionLocalizeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GET_SKILLUSECONDITIONLOCALIZEID_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillUseConditionLocalizeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_GETSKILLUSECONDITIONLOCALIZEIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSkillSelectExTooltipExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_CREATESKILLSELECTEXTOOLTIPEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartSkillSelectExTooltipExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_STARTSKILLSELECTEXTOOLTIPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSelectableExSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_ADDSELECTABLEEXSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillUseConditionLocalizeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_ADDSKILLUSECONDITIONLOCALIZEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndSkillSelectExTooltipExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_ENDSKILLSELECTEXTOOLTIPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSkillSelectExTooltipExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_FINISHSKILLSELECTEXTOOLTIPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedSkillSelectExTooltipExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCEL_FINISHSIZEPREFIXEDSKILLSELECTEXTOOLTIPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

