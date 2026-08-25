#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestGroupBuffExcel; }
namespace FlatData { class School; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A5DC00)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GETROOTASCONQUESTGROUPBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5DC10)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GETROOTASCONQUESTGROUPBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5DC70)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A5DD00)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A5DCD0)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GET_CONQUESTBUFFID_OFFSET UNITYSDK_OFFSET(0x1A5DD20)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_SCHOOL_OFFSET UNITYSDK_OFFSET(0x1A5DD70)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GET_SCHOOLLENGTH_OFFSET UNITYSDK_OFFSET(0x1A5DDD0)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GETSCHOOLBYTES_OFFSET UNITYSDK_OFFSET(0x1A5DE10)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GET_RECOMMANDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A5DE30)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A5DE80)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GETSKILLGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A5DEC0)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_CREATECONQUESTGROUPBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5DEE0)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_STARTCONQUESTGROUPBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5E0D0)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_ADDCONQUESTBUFFID_OFFSET UNITYSDK_OFFSET(0x1A5DFC0)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_ADDSCHOOL_OFFSET UNITYSDK_OFFSET(0x1A5E050)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_CREATESCHOOLVECTOR_OFFSET UNITYSDK_OFFSET(0x1A5E0F0)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_STARTSCHOOLVECTOR_OFFSET UNITYSDK_OFFSET(0x1A5E180)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_ADDRECOMMANDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A5E020)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_ADDSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A5DFF0)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_ENDCONQUESTGROUPBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5E080)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_FINISHCONQUESTGROUPBUFFEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A5E1C0)
#define MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_FINISHSIZEPREFIXEDCONQUESTGROUPBUFFEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A5E1E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestGroupBuffExcel_TypeDefinitionIndex = 17240;

	class ConquestGroupBuffExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestGroupBuffExcel* GetRootAsConquestGroupBuffExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestGroupBuffExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GETROOTASCONQUESTGROUPBUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestGroupBuffExcel* GetRootAsConquestGroupBuffExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestGroupBuffExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestGroupBuffExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestGroupBuffExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GETROOTASCONQUESTGROUPBUFFEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestGroupBuffExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestGroupBuffExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ConquestBuffId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GET_CONQUESTBUFFID_OFFSET))(nullptr);
		}

		::FlatData::School* School(::System::Int32 arg)
		{
			return (return (::FlatData::School*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_SCHOOL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SchoolLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GET_SCHOOLLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSchoolBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GETSCHOOLBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_RecommandLocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GET_RECOMMANDLOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_SkillGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GET_SKILLGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_GETSKILLGROUPIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestGroupBuffExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_CREATECONQUESTGROUPBUFFEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestGroupBuffExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_STARTCONQUESTGROUPBUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddConquestBuffId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_ADDCONQUESTBUFFID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSchool(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_ADDSCHOOL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSchoolVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_CREATESCHOOLVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSchoolVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_STARTSCHOOLVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecommandLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_ADDRECOMMANDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_ADDSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestGroupBuffExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_ENDCONQUESTGROUPBUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestGroupBuffExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_FINISHCONQUESTGROUPBUFFEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestGroupBuffExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTGROUPBUFFEXCEL_FINISHSIZEPREFIXEDCONQUESTGROUPBUFFEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

