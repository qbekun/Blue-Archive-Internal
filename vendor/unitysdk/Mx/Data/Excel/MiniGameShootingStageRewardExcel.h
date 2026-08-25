#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameShootingStageRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFE6F0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GETROOTASMINIGAMESHOOTINGSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFE700)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GETROOTASMINIGAMESHOOTINGSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFE760)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BFE7F0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BFE7C0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1BFE810)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1BFE860)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_CLEARSECTION_OFFSET UNITYSDK_OFFSET(0x1BFE8B0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BFE900)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1BFE960)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1BFE9A0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BFE9C0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1BFEA20)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1BFEA60)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BFEA80)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1BFEAE0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1BFEB20)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_CREATEMINIGAMESHOOTINGSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFEB40)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_STARTMINIGAMESHOOTINGSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFEDE0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1BFECD0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0x1BFECA0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ADDCLEARSECTION_OFFSET UNITYSDK_OFFSET(0x1BFEC70)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BFED60)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BFEE00)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BFEE90)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1BFED30)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BFEED0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BFEF60)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BFED00)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BFEFA0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BFF030)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ENDMINIGAMESHOOTINGSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFED90)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_FINISHMINIGAMESHOOTINGSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFF070)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDMINIGAMESHOOTINGSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFF090)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameShootingStageRewardExcel_TypeDefinitionIndex = 18852;

	class MiniGameShootingStageRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameShootingStageRewardExcel* GetRootAsMiniGameShootingStageRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GETROOTASMINIGAMESHOOTINGSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameShootingStageRewardExcel* GetRootAsMiniGameShootingStageRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameShootingStageRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameShootingStageRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GETROOTASMINIGAMESHOOTINGSTAGEREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameShootingStageRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingStageRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearSection()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_CLEARSECTION_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameShootingStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_CREATEMINIGAMESHOOTINGSTAGEREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameShootingStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_STARTMINIGAMESHOOTINGSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ADDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearSection(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ADDCLEARSECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameShootingStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_ENDMINIGAMESHOOTINGSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameShootingStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_FINISHMINIGAMESHOOTINGSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameShootingStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDMINIGAMESHOOTINGSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

