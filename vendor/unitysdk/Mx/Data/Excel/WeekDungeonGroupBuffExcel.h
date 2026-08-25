#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WeekDungeonGroupBuffExcel; }
namespace FlatData { class School; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CBC8E0)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GETROOTASWEEKDUNGEONGROUPBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBC8F0)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GETROOTASWEEKDUNGEONGROUPBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBC950)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CBC9E0)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CBC9B0)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GET_WEEKDUNGEONBUFFID_OFFSET UNITYSDK_OFFSET(0x1CBCA00)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GET_SCHOOL_OFFSET UNITYSDK_OFFSET(0x1CBCA50)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GET_RECOMMANDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1CBCAA0)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GET_FORMATIONLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1CBCAF0)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1CBCB40)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GETSKILLGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CBCB80)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_CREATEWEEKDUNGEONGROUPBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBCBA0)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_STARTWEEKDUNGEONGROUPBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBCDE0)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_ADDWEEKDUNGEONBUFFID_OFFSET UNITYSDK_OFFSET(0x1CBCCA0)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_ADDSCHOOL_OFFSET UNITYSDK_OFFSET(0x1CBCD60)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_ADDRECOMMANDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1CBCD30)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_ADDFORMATIONLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1CBCD00)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_ADDSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1CBCCD0)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_ENDWEEKDUNGEONGROUPBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBCD90)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_FINISHWEEKDUNGEONGROUPBUFFEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CBCE00)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_FINISHSIZEPREFIXEDWEEKDUNGEONGROUPBUFFEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CBCE20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WeekDungeonGroupBuffExcel_TypeDefinitionIndex = 19736;

	class WeekDungeonGroupBuffExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WeekDungeonGroupBuffExcel* GetRootAsWeekDungeonGroupBuffExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WeekDungeonGroupBuffExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GETROOTASWEEKDUNGEONGROUPBUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WeekDungeonGroupBuffExcel* GetRootAsWeekDungeonGroupBuffExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WeekDungeonGroupBuffExcel* arg)
		{
			return (return (::MX::Data::Excel::WeekDungeonGroupBuffExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WeekDungeonGroupBuffExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GETROOTASWEEKDUNGEONGROUPBUFFEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WeekDungeonGroupBuffExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WeekDungeonGroupBuffExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_WeekDungeonBuffId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GET_WEEKDUNGEONBUFFID_OFFSET))(nullptr);
		}

		::FlatData::School* get_School()
		{
			return (return (::FlatData::School*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GET_SCHOOL_OFFSET))(nullptr);
		}

		::System::UInt32 get_RecommandLocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GET_RECOMMANDLOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::UInt32 get_FormationLocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GET_FORMATIONLOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_SkillGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GET_SKILLGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_GETSKILLGROUPIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWeekDungeonGroupBuffExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::School* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::School*, ::System::UInt32, ::System::UInt32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_CREATEWEEKDUNGEONGROUPBUFFEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWeekDungeonGroupBuffExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_STARTWEEKDUNGEONGROUPBUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddWeekDungeonBuffId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_ADDWEEKDUNGEONBUFFID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSchool(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::School* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_ADDSCHOOL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecommandLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_ADDRECOMMANDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFormationLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_ADDFORMATIONLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_ADDSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWeekDungeonGroupBuffExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_ENDWEEKDUNGEONGROUPBUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWeekDungeonGroupBuffExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_FINISHWEEKDUNGEONGROUPBUFFEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWeekDungeonGroupBuffExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCEL_FINISHSIZEPREFIXEDWEEKDUNGEONGROUPBUFFEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

