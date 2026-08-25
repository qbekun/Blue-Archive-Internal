#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ArenaLevelSectionExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19CEBE0)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GETROOTASARENALEVELSECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19CEBF0)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GETROOTASARENALEVELSECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19CEC50)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19CECE0)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19CECB0)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GET_ARENASEASONID_OFFSET UNITYSDK_OFFSET(0x19CED00)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GET_STARTLEVEL_OFFSET UNITYSDK_OFFSET(0x19CED50)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GET_LASTLEVEL_OFFSET UNITYSDK_OFFSET(0x19CEDA0)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GET_USERCOUNT_OFFSET UNITYSDK_OFFSET(0x19CEDF0)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_CREATEARENALEVELSECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19CEE40)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_STARTARENALEVELSECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19CF030)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_ADDARENASEASONID_OFFSET UNITYSDK_OFFSET(0x19CEFB0)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_ADDSTARTLEVEL_OFFSET UNITYSDK_OFFSET(0x19CEF80)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_ADDLASTLEVEL_OFFSET UNITYSDK_OFFSET(0x19CEF50)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_ADDUSERCOUNT_OFFSET UNITYSDK_OFFSET(0x19CEF20)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_ENDARENALEVELSECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19CEFE0)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_FINISHARENALEVELSECTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19CF050)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_FINISHSIZEPREFIXEDARENALEVELSECTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19CF070)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaLevelSectionExcel_TypeDefinitionIndex = 16637;

	class ArenaLevelSectionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ArenaLevelSectionExcel* GetRootAsArenaLevelSectionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ArenaLevelSectionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GETROOTASARENALEVELSECTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ArenaLevelSectionExcel* GetRootAsArenaLevelSectionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ArenaLevelSectionExcel* arg)
		{
			return (return (::MX::Data::Excel::ArenaLevelSectionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ArenaLevelSectionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GETROOTASARENALEVELSECTIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ArenaLevelSectionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ArenaLevelSectionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ArenaSeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GET_ARENASEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_StartLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GET_STARTLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_LastLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GET_LASTLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_UserCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_GET_USERCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateArenaLevelSectionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_CREATEARENALEVELSECTIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartArenaLevelSectionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_STARTARENALEVELSECTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddArenaSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_ADDARENASEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_ADDSTARTLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLastLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_ADDLASTLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUserCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_ADDUSERCOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndArenaLevelSectionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_ENDARENALEVELSECTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishArenaLevelSectionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_FINISHARENALEVELSECTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedArenaLevelSectionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCEL_FINISHSIZEPREFIXEDARENALEVELSECTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

