#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class TimeAttackDungeonRewardExcel; }
namespace FlatData { class TimeAttackDungeonRewardType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA3980)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETROOTASTIMEATTACKDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA3990)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETROOTASTIMEATTACKDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA39F0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CA3A80)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CA3A50)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CA3AA0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDMAXPOINT_OFFSET UNITYSDK_OFFSET(0x1CA3AF0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1CA3B40)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1CA3BA0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETREWARDTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1CA3BE0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_REWARDMINPOINT_OFFSET UNITYSDK_OFFSET(0x1CA3C00)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDMINPOINTLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA3C60)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETREWARDMINPOINTBYTES_OFFSET UNITYSDK_OFFSET(0x1CA3CA0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1CA3CC0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1CA3D20)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1CA3D60)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1CA3D80)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA3DE0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CA3E20)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_REWARDPARCELDEFAULTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CA3E40)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDPARCELDEFAULTAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA3EA0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETREWARDPARCELDEFAULTAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1CA3EE0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_REWARDPARCELMAXAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CA3F00)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDPARCELMAXAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA3F60)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETREWARDPARCELMAXAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1CA3FA0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATETIMEATTACKDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA3FC0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTTIMEATTACKDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA4310)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CA4170)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDMAXPOINT_OFFSET UNITYSDK_OFFSET(0x1CA4140)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1CA4290)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATEREWARDTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA4330)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTREWARDTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA43C0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDMINPOINT_OFFSET UNITYSDK_OFFSET(0x1CA4260)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATEREWARDMINPOINTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA4400)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTREWARDMINPOINTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA4490)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1CA4230)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA44D0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA4560)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1CA4200)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA45A0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA4630)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDPARCELDEFAULTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CA41D0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATEREWARDPARCELDEFAULTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA4670)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTREWARDPARCELDEFAULTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA4700)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDPARCELMAXAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CA41A0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATEREWARDPARCELMAXAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA4740)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTREWARDPARCELMAXAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA47D0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ENDTIMEATTACKDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA42C0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_FINISHTIMEATTACKDUNGEONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA4810)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_FINISHSIZEPREFIXEDTIMEATTACKDUNGEONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA4830)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TimeAttackDungeonRewardExcel_TypeDefinitionIndex = 19610;

	class TimeAttackDungeonRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonRewardExcel* GetRootAsTimeAttackDungeonRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETROOTASTIMEATTACKDUNGEONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonRewardExcel* GetRootAsTimeAttackDungeonRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::TimeAttackDungeonRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::TimeAttackDungeonRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETROOTASTIMEATTACKDUNGEONREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardMaxPoint()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDMAXPOINT_OFFSET))(nullptr);
		}

		::FlatData::TimeAttackDungeonRewardType* RewardType(::System::Int32 arg)
		{
			return (return (::FlatData::TimeAttackDungeonRewardType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_REWARDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETREWARDTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardMinPoint(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_REWARDMINPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardMinPointLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDMINPOINTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardMinPointBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETREWARDMINPOINTBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelDefaultAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_REWARDPARCELDEFAULTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelDefaultAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDPARCELDEFAULTAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelDefaultAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETREWARDPARCELDEFAULTAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelMaxAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_REWARDPARCELMAXAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelMaxAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GET_REWARDPARCELMAXAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelMaxAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_GETREWARDPARCELMAXAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTimeAttackDungeonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATETIMEATTACKDUNGEONREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartTimeAttackDungeonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTTIMEATTACKDUNGEONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardMaxPoint(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDMAXPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATEREWARDTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTREWARDTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardMinPoint(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDMINPOINT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardMinPointVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATEREWARDMINPOINTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardMinPointVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTREWARDMINPOINTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelDefaultAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDPARCELDEFAULTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelDefaultAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATEREWARDPARCELDEFAULTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelDefaultAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTREWARDPARCELDEFAULTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelMaxAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ADDREWARDPARCELMAXAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelMaxAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_CREATEREWARDPARCELMAXAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelMaxAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_STARTREWARDPARCELMAXAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndTimeAttackDungeonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_ENDTIMEATTACKDUNGEONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTimeAttackDungeonRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_FINISHTIMEATTACKDUNGEONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedTimeAttackDungeonRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONREWARDEXCEL_FINISHSIZEPREFIXEDTIMEATTACKDUNGEONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

