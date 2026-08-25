#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ArenaRewardExcel; }
namespace FlatData { class ArenaRewardType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19D2E30)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GETROOTASARENAREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D2E40)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GETROOTASARENAREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D2EA0)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19D2F30)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19D2F00)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D2F50)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_ARENAREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x19D2FA0)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_RANKSTART_OFFSET UNITYSDK_OFFSET(0x19D2FF0)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_RANKEND_OFFSET UNITYSDK_OFFSET(0x19D3040)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_RANKICONPATH_OFFSET UNITYSDK_OFFSET(0x19D3090)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GETRANKICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x19D30D0)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19D30F0)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x19D3150)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x19D3190)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_REWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D31B0)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_REWARDPARCELUNIQUEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x19D3210)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GETREWARDPARCELUNIQUEIDBYTES_OFFSET UNITYSDK_OFFSET(0x19D3250)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x19D3270)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x19D32D0)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x19D3310)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_CREATEARENAREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D3330)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_STARTARENAREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D3680)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D3510)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDARENAREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x19D3600)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDRANKSTART_OFFSET UNITYSDK_OFFSET(0x19D34E0)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDRANKEND_OFFSET UNITYSDK_OFFSET(0x19D34B0)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDRANKICONPATH_OFFSET UNITYSDK_OFFSET(0x19D35D0)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19D35A0)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x19D36A0)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x19D3730)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D3570)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_CREATEREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19D3770)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_STARTREWARDPARCELUNIQUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19D3800)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x19D3540)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x19D3840)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x19D38D0)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_ENDARENAREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D3630)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_FINISHARENAREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D3910)
#define MX_DATA_EXCEL_ARENAREWARDEXCEL_FINISHSIZEPREFIXEDARENAREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D3930)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaRewardExcel_TypeDefinitionIndex = 16658;

	class ArenaRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ArenaRewardExcel* GetRootAsArenaRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ArenaRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GETROOTASARENAREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ArenaRewardExcel* GetRootAsArenaRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ArenaRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::ArenaRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ArenaRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GETROOTASARENAREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ArenaRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ArenaRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::ArenaRewardType* get_ArenaRewardType()
		{
			return (return (::FlatData::ArenaRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_ARENAREWARDTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RankStart()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_RANKSTART_OFFSET))(nullptr);
		}

		::System::Int64 get_RankEnd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_RANKEND_OFFSET))(nullptr);
		}

		::System::String* get_RankIconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_RANKICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRankIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GETRANKICONPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelUniqueId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_REWARDPARCELUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelUniqueIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_REWARDPARCELUNIQUEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelUniqueIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GETREWARDPARCELUNIQUEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateArenaRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ArenaRewardType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ArenaRewardType*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_CREATEARENAREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartArenaRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_STARTARENAREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddArenaRewardType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ArenaRewardType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ArenaRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDARENAREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankStart(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDRANKSTART_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankEnd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDRANKEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDRANKICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_CREATEREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelUniqueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_STARTREWARDPARCELUNIQUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndArenaRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_ENDARENAREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishArenaRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_FINISHARENAREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedArenaRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAREWARDEXCEL_FINISHSIZEPREFIXEDARENAREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

