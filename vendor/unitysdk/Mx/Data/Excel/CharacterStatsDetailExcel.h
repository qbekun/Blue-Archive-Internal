#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterStatsDetailExcel; }
namespace FlatData { class StatType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A3CD60)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GETROOTASCHARACTERSTATSDETAILEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3CD70)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GETROOTASCHARACTERSTATSDETAILEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3CDD0)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A3CE60)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A3CE30)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A3CE80)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_DETAILSHOWSTATS_OFFSET UNITYSDK_OFFSET(0x1A3CED0)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GET_DETAILSHOWSTATSLENGTH_OFFSET UNITYSDK_OFFSET(0x1A3CF30)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GETDETAILSHOWSTATSBYTES_OFFSET UNITYSDK_OFFSET(0x1A3CF70)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_ISSTATSPERCENT_OFFSET UNITYSDK_OFFSET(0x1A3CF90)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GET_ISSTATSPERCENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A3CFF0)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GETISSTATSPERCENTBYTES_OFFSET UNITYSDK_OFFSET(0x1A3D030)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_CREATECHARACTERSTATSDETAILEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3D050)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_STARTCHARACTERSTATSDETAILEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3D1F0)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A3D110)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_ADDDETAILSHOWSTATS_OFFSET UNITYSDK_OFFSET(0x1A3D170)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_CREATEDETAILSHOWSTATSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A3D210)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_STARTDETAILSHOWSTATSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A3D2A0)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_ADDISSTATSPERCENT_OFFSET UNITYSDK_OFFSET(0x1A3D140)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_CREATEISSTATSPERCENTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A3D2E0)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_STARTISSTATSPERCENTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A3D370)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_ENDCHARACTERSTATSDETAILEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3D1A0)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_FINISHCHARACTERSTATSDETAILEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A3D3B0)
#define MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_FINISHSIZEPREFIXEDCHARACTERSTATSDETAILEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A3D3D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterStatsDetailExcel_TypeDefinitionIndex = 17096;

	class CharacterStatsDetailExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterStatsDetailExcel* GetRootAsCharacterStatsDetailExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterStatsDetailExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GETROOTASCHARACTERSTATSDETAILEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterStatsDetailExcel* GetRootAsCharacterStatsDetailExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterStatsDetailExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterStatsDetailExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterStatsDetailExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GETROOTASCHARACTERSTATSDETAILEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterStatsDetailExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterStatsDetailExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::StatType* DetailShowStats(::System::Int32 arg)
		{
			return (return (::FlatData::StatType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_DETAILSHOWSTATS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DetailShowStatsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GET_DETAILSHOWSTATSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDetailShowStatsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GETDETAILSHOWSTATSBYTES_OFFSET))(nullptr);
		}

		::System::Boolean IsStatsPercent(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_ISSTATSPERCENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IsStatsPercentLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GET_ISSTATSPERCENTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIsStatsPercentBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_GETISSTATSPERCENTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterStatsDetailExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_CREATECHARACTERSTATSDETAILEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterStatsDetailExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_STARTCHARACTERSTATSDETAILEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDetailShowStats(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_ADDDETAILSHOWSTATS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDetailShowStatsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_CREATEDETAILSHOWSTATSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartDetailShowStatsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_STARTDETAILSHOWSTATSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsStatsPercent(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_ADDISSTATSPERCENT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateIsStatsPercentVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_CREATEISSTATSPERCENTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartIsStatsPercentVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_STARTISSTATSPERCENTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterStatsDetailExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_ENDCHARACTERSTATSDETAILEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterStatsDetailExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_FINISHCHARACTERSTATSDETAILEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterStatsDetailExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSDETAILEXCEL_FINISHSIZEPREFIXEDCHARACTERSTATSDETAILEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

