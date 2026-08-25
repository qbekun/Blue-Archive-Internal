#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class SkillAdditionalTooltipExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C86A60)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GETROOTASSKILLADDITIONALTOOLTIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C86A70)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GETROOTASSKILLADDITIONALTOOLTIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C86AD0)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C86B60)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C86B30)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C86B80)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GET_ADDITIONALSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1C86BD0)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GETADDITIONALSKILLGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C86C10)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GET_SHOWSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1C86C30)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GETSHOWSKILLSLOTBYTES_OFFSET UNITYSDK_OFFSET(0x1C86C70)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GET_DISPLAYICONBG_OFFSET UNITYSDK_OFFSET(0x1C86C90)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_CREATESKILLADDITIONALTOOLTIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C86CE0)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_STARTSKILLADDITIONALTOOLTIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C86ED0)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C86DC0)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_ADDADDITIONALSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1C86E20)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_ADDSHOWSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1C86DF0)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_ADDDISPLAYICONBG_OFFSET UNITYSDK_OFFSET(0x1C86E50)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_ENDSKILLADDITIONALTOOLTIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C86E80)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_FINISHSKILLADDITIONALTOOLTIPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C86EF0)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_FINISHSIZEPREFIXEDSKILLADDITIONALTOOLTIPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C86F10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SkillAdditionalTooltipExcel_TypeDefinitionIndex = 19464;

	class SkillAdditionalTooltipExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::SkillAdditionalTooltipExcel* GetRootAsSkillAdditionalTooltipExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SkillAdditionalTooltipExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GETROOTASSKILLADDITIONALTOOLTIPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::SkillAdditionalTooltipExcel* GetRootAsSkillAdditionalTooltipExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::SkillAdditionalTooltipExcel* arg)
		{
			return (return (::MX::Data::Excel::SkillAdditionalTooltipExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::SkillAdditionalTooltipExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GETROOTASSKILLADDITIONALTOOLTIPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::SkillAdditionalTooltipExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SkillAdditionalTooltipExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::String* get_AdditionalSkillGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GET_ADDITIONALSKILLGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetAdditionalSkillGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GETADDITIONALSKILLGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ShowSkillSlot()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GET_SHOWSKILLSLOT_OFFSET))(nullptr);
		}

		Il2CppObject* GetShowSkillSlotBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GETSHOWSKILLSLOTBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_DisplayIconBg()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_GET_DISPLAYICONBG_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSkillAdditionalTooltipExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_CREATESKILLADDITIONALTOOLTIPEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartSkillAdditionalTooltipExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_STARTSKILLADDITIONALTOOLTIPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAdditionalSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_ADDADDITIONALSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowSkillSlot(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_ADDSHOWSKILLSLOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayIconBg(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_ADDDISPLAYICONBG_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndSkillAdditionalTooltipExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_ENDSKILLADDITIONALTOOLTIPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSkillAdditionalTooltipExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_FINISHSKILLADDITIONALTOOLTIPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedSkillAdditionalTooltipExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCEL_FINISHSIZEPREFIXEDSKILLADDITIONALTOOLTIPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

