#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ArenaSeasonExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_ARENASEASONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19D6990)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_GETROOTASARENASEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x19D69A0)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_GETROOTASARENASEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x19D6A00)
#define MX_DATA_EXCEL_ARENASEASONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19D6A90)
#define MX_DATA_EXCEL_ARENASEASONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19D6A60)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D6AB0)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_GET_SEASONSTARTDATE_OFFSET UNITYSDK_OFFSET(0x19D6B00)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_GETSEASONSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x19D6B40)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_GET_SEASONENDDATE_OFFSET UNITYSDK_OFFSET(0x19D6B60)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_GETSEASONENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x19D6BA0)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_GET_SEASONGROUPLIMIT_OFFSET UNITYSDK_OFFSET(0x19D6BC0)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_GET_PREVSEASONID_OFFSET UNITYSDK_OFFSET(0x19D6C10)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_GET_INFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0x19D6C60)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_CREATEARENASEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x19D6CB0)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_STARTARENASEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x19D6F50)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D6E70)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_ADDSEASONSTARTDATE_OFFSET UNITYSDK_OFFSET(0x19D6ED0)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_ADDSEASONENDDATE_OFFSET UNITYSDK_OFFSET(0x19D6EA0)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_ADDSEASONGROUPLIMIT_OFFSET UNITYSDK_OFFSET(0x19D6E40)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_ADDPREVSEASONID_OFFSET UNITYSDK_OFFSET(0x19D6E10)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_ADDINFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0x19D6DE0)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_ENDARENASEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x19D6F00)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_FINISHARENASEASONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D6F70)
#define MX_DATA_EXCEL_ARENASEASONEXCEL_FINISHSIZEPREFIXEDARENASEASONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D6F90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaSeasonExcel_TypeDefinitionIndex = 16675;

	class ArenaSeasonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ArenaSeasonExcel* GetRootAsArenaSeasonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ArenaSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_GETROOTASARENASEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ArenaSeasonExcel* GetRootAsArenaSeasonExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ArenaSeasonExcel* arg)
		{
			return (return (::MX::Data::Excel::ArenaSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ArenaSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_GETROOTASARENASEASONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ArenaSeasonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ArenaSeasonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_SeasonStartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_GET_SEASONSTARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_GETSEASONSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SeasonEndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_GET_SEASONENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_GETSEASONENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonGroupLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_GET_SEASONGROUPLIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_PrevSeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_GET_PREVSEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_InformationGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_GET_INFORMATIONGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateArenaSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_CREATEARENASEASONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartArenaSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_STARTARENASEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_ADDSEASONSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_ADDSEASONENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonGroupLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_ADDSEASONGROUPLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrevSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_ADDPREVSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInformationGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_ADDINFORMATIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndArenaSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_ENDARENASEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishArenaSeasonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_FINISHARENASEASONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedArenaSeasonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCEL_FINISHSIZEPREFIXEDARENASEASONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

