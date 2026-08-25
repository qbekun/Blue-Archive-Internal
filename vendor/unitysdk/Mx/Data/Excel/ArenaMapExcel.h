#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ArenaMapExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_ARENAMAPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19CFDA0)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GETROOTASARENAMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x19CFDB0)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GETROOTASARENAMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x19CFE10)
#define MX_DATA_EXCEL_ARENAMAPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19CFEA0)
#define MX_DATA_EXCEL_ARENAMAPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19CFE70)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GET_ARENASEASONID_OFFSET UNITYSDK_OFFSET(0x19CFEC0)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19CFF10)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GET_TERRAINTYPE_OFFSET UNITYSDK_OFFSET(0x19CFF60)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GET_TERRAINTYPELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x19CFFB0)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GETTERRAINTYPELOCALIZEKEYBYTES_OFFSET UNITYSDK_OFFSET(0x19CFFF0)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19D0010)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GETIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x19D0050)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GET_GROUNDGROUPID_OFFSET UNITYSDK_OFFSET(0x19D0070)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GET_GROUNDGROUPNAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x19D00C0)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GETGROUNDGROUPNAMELOCALIZEKEYBYTES_OFFSET UNITYSDK_OFFSET(0x19D0100)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GET_STARTRANK_OFFSET UNITYSDK_OFFSET(0x19D0120)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GET_ENDRANK_OFFSET UNITYSDK_OFFSET(0x19D0170)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x19D01C0)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_CREATEARENAMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x19D0210)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_STARTARENAMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x19D0610)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_ADDARENASEASONID_OFFSET UNITYSDK_OFFSET(0x19D0500)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D04D0)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_ADDTERRAINTYPE_OFFSET UNITYSDK_OFFSET(0x19D04A0)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_ADDTERRAINTYPELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x19D0590)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_ADDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19D0560)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_ADDGROUNDGROUPID_OFFSET UNITYSDK_OFFSET(0x19D0470)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_ADDGROUNDGROUPNAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x19D0530)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_ADDSTARTRANK_OFFSET UNITYSDK_OFFSET(0x19D0440)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_ADDENDRANK_OFFSET UNITYSDK_OFFSET(0x19D0410)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x19D03E0)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_ENDARENAMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x19D05C0)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_FINISHARENAMAPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D0630)
#define MX_DATA_EXCEL_ARENAMAPEXCEL_FINISHSIZEPREFIXEDARENAMAPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D0650)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaMapExcel_TypeDefinitionIndex = 16644;

	class ArenaMapExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ArenaMapExcel* GetRootAsArenaMapExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ArenaMapExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GETROOTASARENAMAPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ArenaMapExcel* GetRootAsArenaMapExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ArenaMapExcel* arg)
		{
			return (return (::MX::Data::Excel::ArenaMapExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ArenaMapExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GETROOTASARENAMAPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ArenaMapExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ArenaMapExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ArenaSeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GET_ARENASEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_TerrainType()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GET_TERRAINTYPE_OFFSET))(nullptr);
		}

		::System::String* get_TerrainTypeLocalizeKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GET_TERRAINTYPELOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetTerrainTypeLocalizeKeyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GETTERRAINTYPELOCALIZEKEYBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GETIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GET_GROUNDGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_GroundGroupNameLocalizeKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GET_GROUNDGROUPNAMELOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetGroundGroupNameLocalizeKeyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GETGROUNDGROUPNAMELOCALIZEKEYBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_StartRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GET_STARTRANK_OFFSET))(nullptr);
		}

		::System::Int64 get_EndRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GET_ENDRANK_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateArenaMapExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_CREATEARENAMAPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartArenaMapExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_STARTARENAMAPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddArenaSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_ADDARENASEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTerrainType(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_ADDTERRAINTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTerrainTypeLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_ADDTERRAINTYPELOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_ADDIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_ADDGROUNDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundGroupNameLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_ADDGROUNDGROUPNAMELOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_ADDSTARTRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_ADDENDRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndArenaMapExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_ENDARENAMAPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishArenaMapExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_FINISHARENAMAPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedArenaMapExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCEL_FINISHSIZEPREFIXEDARENAMAPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

