#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class TimeAttackDungeonExcel; }
namespace FlatData { class TimeAttackDungeonType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA0680)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GETROOTASTIMEATTACKDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA0690)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GETROOTASTIMEATTACKDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA06F0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CA0780)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CA0750)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CA07A0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GET_TIMEATTACKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1CA07F0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GET_LOCALIZEETCKEY_OFFSET UNITYSDK_OFFSET(0x1CA0840)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CA0890)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1CA08D0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GET_INFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1CA08F0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_CREATETIMEATTACKDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA0940)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_STARTTIMEATTACKDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA0B80)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CA0A70)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_ADDTIMEATTACKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1CA0B00)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_ADDLOCALIZEETCKEY_OFFSET UNITYSDK_OFFSET(0x1CA0AD0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1CA0AA0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_ADDINFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1CA0A40)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_ENDTIMEATTACKDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA0B30)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_FINISHTIMEATTACKDUNGEONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA0BA0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_FINISHSIZEPREFIXEDTIMEATTACKDUNGEONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA0BC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TimeAttackDungeonExcel_TypeDefinitionIndex = 19596;

	class TimeAttackDungeonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonExcel* GetRootAsTimeAttackDungeonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GETROOTASTIMEATTACKDUNGEONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonExcel* GetRootAsTimeAttackDungeonExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::TimeAttackDungeonExcel* arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::TimeAttackDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GETROOTASTIMEATTACKDUNGEONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::TimeAttackDungeonType* get_TimeAttackDungeonType()
		{
			return (return (::FlatData::TimeAttackDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GET_TIMEATTACKDUNGEONTYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GET_LOCALIZEETCKEY_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_InformationGroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_GET_INFORMATIONGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTimeAttackDungeonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::TimeAttackDungeonType* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::TimeAttackDungeonType*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_CREATETIMEATTACKDUNGEONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartTimeAttackDungeonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_STARTTIMEATTACKDUNGEONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTimeAttackDungeonType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TimeAttackDungeonType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TimeAttackDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_ADDTIMEATTACKDUNGEONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_ADDLOCALIZEETCKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInformationGroupID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_ADDINFORMATIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndTimeAttackDungeonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_ENDTIMEATTACKDUNGEONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTimeAttackDungeonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_FINISHTIMEATTACKDUNGEONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedTimeAttackDungeonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONEXCEL_FINISHSIZEPREFIXEDTIMEATTACKDUNGEONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

