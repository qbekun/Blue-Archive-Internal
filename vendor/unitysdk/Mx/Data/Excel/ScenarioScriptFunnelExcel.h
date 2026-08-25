#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioScriptFunnelExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C68A30)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GETROOTASSCENARIOSCRIPTFUNNELEXCEL_OFFSET UNITYSDK_OFFSET(0x1C68A40)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GETROOTASSCENARIOSCRIPTFUNNELEXCEL_OFFSET UNITYSDK_OFFSET(0x1C68AA0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C68B30)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C68B00)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C68B50)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1C68BA0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GET_FUNNELID_OFFSET UNITYSDK_OFFSET(0x1C68BF0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GETFUNNELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C68C30)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_CREATESCENARIOSCRIPTFUNNELEXCEL_OFFSET UNITYSDK_OFFSET(0x1C68C50)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_STARTSCENARIOSCRIPTFUNNELEXCEL_OFFSET UNITYSDK_OFFSET(0x1C68DF0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C68D40)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_ADDINDEX_OFFSET UNITYSDK_OFFSET(0x1C68D10)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_ADDFUNNELID_OFFSET UNITYSDK_OFFSET(0x1C68D70)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_ENDSCENARIOSCRIPTFUNNELEXCEL_OFFSET UNITYSDK_OFFSET(0x1C68DA0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_FINISHSCENARIOSCRIPTFUNNELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C68E10)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_FINISHSIZEPREFIXEDSCENARIOSCRIPTFUNNELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C68E30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioScriptFunnelExcel_TypeDefinitionIndex = 19325;

	class ScenarioScriptFunnelExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioScriptFunnelExcel* GetRootAsScenarioScriptFunnelExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioScriptFunnelExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GETROOTASSCENARIOSCRIPTFUNNELEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioScriptFunnelExcel* GetRootAsScenarioScriptFunnelExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioScriptFunnelExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioScriptFunnelExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioScriptFunnelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GETROOTASSCENARIOSCRIPTFUNNELEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioScriptFunnelExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioScriptFunnelExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Index()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GET_INDEX_OFFSET))(nullptr);
		}

		::System::String* get_FunnelId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GET_FUNNELID_OFFSET))(nullptr);
		}

		Il2CppObject* GetFunnelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_GETFUNNELIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioScriptFunnelExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_CREATESCENARIOSCRIPTFUNNELEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioScriptFunnelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_STARTSCENARIOSCRIPTFUNNELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_ADDINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFunnelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_ADDFUNNELID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioScriptFunnelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_ENDSCENARIOSCRIPTFUNNELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioScriptFunnelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_FINISHSCENARIOSCRIPTFUNNELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioScriptFunnelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCEL_FINISHSIZEPREFIXEDSCENARIOSCRIPTFUNNELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

