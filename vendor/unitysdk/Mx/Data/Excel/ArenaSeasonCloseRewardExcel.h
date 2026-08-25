#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ArenaSeasonCloseRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19D52C0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GETROOTASARENASEASONCLOSEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D52D0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GETROOTASARENASEASONCLOSEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D5330)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19D53C0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19D5390)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x19D53E0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_RANKSTART_OFFSET UNITYSDK_OFFSET(0x19D5430)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_RANKEND_OFFSET UNITYSDK_OFFSET(0x19D5480)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19D54D0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x19D5530)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x19D5570)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_REWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D5590)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_REWARDPARCELUNIQUEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x19D55F0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GETREWARDPARCELUNIQUEIDBYTES_OFFSET UNITYSDK_OFFSET(0x19D5630)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x19D5650)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x19D56B0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x19D56F0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_CREATEARENASEASONCLOSEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D5710)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_STARTARENASEASONCLOSEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D59B0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0x19D58A0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ADDRANKSTART_OFFSET UNITYSDK_OFFSET(0x19D5870)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ADDRANKEND_OFFSET UNITYSDK_OFFSET(0x19D5840)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19D5930)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x19D59D0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x19D5A60)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ADDREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D5900)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_CREATEREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19D5AA0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_STARTREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19D5B30)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x19D58D0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x19D5B70)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x19D5C00)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ENDARENASEASONCLOSEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D5960)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_FINISHARENASEASONCLOSEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D5C40)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_FINISHSIZEPREFIXEDARENASEASONCLOSEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D5C60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaSeasonCloseRewardExcel_TypeDefinitionIndex = 16668;

	class ArenaSeasonCloseRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ArenaSeasonCloseRewardExcel* GetRootAsArenaSeasonCloseRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ArenaSeasonCloseRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GETROOTASARENASEASONCLOSEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ArenaSeasonCloseRewardExcel* GetRootAsArenaSeasonCloseRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ArenaSeasonCloseRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::ArenaSeasonCloseRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ArenaSeasonCloseRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GETROOTASARENASEASONCLOSEREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ArenaSeasonCloseRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ArenaSeasonCloseRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_RankStart()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_RANKSTART_OFFSET))(nullptr);
		}

		::System::Int64 get_RankEnd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_RANKEND_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelUniqueId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_REWARDPARCELUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelUniqueIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_REWARDPARCELUNIQUEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelUniqueIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GETREWARDPARCELUNIQUEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateArenaSeasonCloseRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_CREATEARENASEASONCLOSEREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartArenaSeasonCloseRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_STARTARENASEASONCLOSEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ADDSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankStart(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ADDRANKSTART_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankEnd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ADDRANKEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ADDREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_CREATEREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_STARTREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndArenaSeasonCloseRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_ENDARENASEASONCLOSEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishArenaSeasonCloseRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_FINISHARENASEASONCLOSEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedArenaSeasonCloseRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCEL_FINISHSIZEPREFIXEDARENASEASONCLOSEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

