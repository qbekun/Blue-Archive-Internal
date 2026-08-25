#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class StrategyObjectBuffDefineExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C98C80)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GETROOTASSTRATEGYOBJECTBUFFDEFINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C98C90)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GETROOTASSTRATEGYOBJECTBUFFDEFINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C98CF0)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C98D80)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C98D50)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GET_STRATEGYOBJECTBUFFID_OFFSET UNITYSDK_OFFSET(0x1C98DA0)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GET_STRATEGYOBJECTTURN_OFFSET UNITYSDK_OFFSET(0x1C98DF0)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1C98E40)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GETSKILLGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C98E80)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1C98EA0)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C98EF0)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C98F30)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_CREATESTRATEGYOBJECTBUFFDEFINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C98F50)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_STARTSTRATEGYOBJECTBUFFDEFINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C99190)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_ADDSTRATEGYOBJECTBUFFID_OFFSET UNITYSDK_OFFSET(0x1C99050)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_ADDSTRATEGYOBJECTTURN_OFFSET UNITYSDK_OFFSET(0x1C99110)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_ADDSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1C990E0)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_ADDLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1C990B0)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1C99080)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_ENDSTRATEGYOBJECTBUFFDEFINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C99140)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_FINISHSTRATEGYOBJECTBUFFDEFINEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C991B0)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_FINISHSIZEPREFIXEDSTRATEGYOBJECTBUFFDEFINEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C991D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StrategyObjectBuffDefineExcel_TypeDefinitionIndex = 19558;

	class StrategyObjectBuffDefineExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::StrategyObjectBuffDefineExcel* GetRootAsStrategyObjectBuffDefineExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::StrategyObjectBuffDefineExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GETROOTASSTRATEGYOBJECTBUFFDEFINEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::StrategyObjectBuffDefineExcel* GetRootAsStrategyObjectBuffDefineExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::StrategyObjectBuffDefineExcel* arg)
		{
			return (return (::MX::Data::Excel::StrategyObjectBuffDefineExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::StrategyObjectBuffDefineExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GETROOTASSTRATEGYOBJECTBUFFDEFINEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::StrategyObjectBuffDefineExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::StrategyObjectBuffDefineExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_StrategyObjectBuffID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GET_STRATEGYOBJECTBUFFID_OFFSET))(nullptr);
		}

		::System::Int32 get_StrategyObjectTurn()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GET_STRATEGYOBJECTTURN_OFFSET))(nullptr);
		}

		::System::String* get_SkillGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GET_SKILLGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GETSKILLGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeCodeId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateStrategyObjectBuffDefineExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_CREATESTRATEGYOBJECTBUFFDEFINEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartStrategyObjectBuffDefineExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_STARTSTRATEGYOBJECTBUFFDEFINEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddStrategyObjectBuffID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_ADDSTRATEGYOBJECTBUFFID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyObjectTurn(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_ADDSTRATEGYOBJECTTURN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_ADDSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCodeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_ADDLOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndStrategyObjectBuffDefineExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_ENDSTRATEGYOBJECTBUFFDEFINEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishStrategyObjectBuffDefineExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_FINISHSTRATEGYOBJECTBUFFDEFINEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedStrategyObjectBuffDefineExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCEL_FINISHSIZEPREFIXEDSTRATEGYOBJECTBUFFDEFINEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

