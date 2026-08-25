#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_FIELDREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD42C70)
#define FLATDATA_FIELDREWARDEXCEL_GETROOTASFIELDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD42C80)
#define FLATDATA_FIELDREWARDEXCEL_GETROOTASFIELDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD42CE0)
#define FLATDATA_FIELDREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD42D40)
#define FLATDATA_FIELDREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD42990)
#define FLATDATA_FIELDREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD42D60)
#define FLATDATA_FIELDREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD42DB0)
#define FLATDATA_FIELDREWARDEXCEL_GET_REWARDPROB_OFFSET UNITYSDK_OFFSET(0xD42E30)
#define FLATDATA_FIELDREWARDEXCEL_GET_REWARDPROB_OFFSET UNITYSDK_OFFSET(0xD42E80)
#define FLATDATA_FIELDREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD42F00)
#define FLATDATA_FIELDREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD42F50)
#define FLATDATA_FIELDREWARDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD42FD0)
#define FLATDATA_FIELDREWARDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD43020)
#define FLATDATA_FIELDREWARDEXCEL_GET_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xD430A0)
#define FLATDATA_FIELDREWARDEXCEL_GET_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xD430F0)
#define FLATDATA_FIELDREWARDEXCEL_CREATEFIELDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD43170)
#define FLATDATA_FIELDREWARDEXCEL_STARTFIELDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD433B0)
#define FLATDATA_FIELDREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0xD432A0)
#define FLATDATA_FIELDREWARDEXCEL_ADDREWARDPROB_OFFSET UNITYSDK_OFFSET(0xD43330)
#define FLATDATA_FIELDREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD43300)
#define FLATDATA_FIELDREWARDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0xD43270)
#define FLATDATA_FIELDREWARDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xD432D0)
#define FLATDATA_FIELDREWARDEXCEL_ENDFIELDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD43360)

namespace FlatData
{
	inline static constexpr unsigned int FieldRewardExcel_TypeDefinitionIndex = 9281;

	class FieldRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldRewardExcel* GetRootAsFieldRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_GETROOTASFIELDREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldRewardExcel* GetRootAsFieldRewardExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldRewardExcel* arg2)
		{
			return ((::FlatData::FieldRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_GETROOTASFIELDREWARDEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_groupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_rewardProb()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_GET_REWARDPROB_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardProb()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_GET_REWARDPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_rewardParcelType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_rewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_rewardAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_GET_REWARDAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_GET_REWARDAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int32 arg3, ::FlatData::ParcelType* arg4, ::System::Int64 arg5, ::System::Int32 arg6)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_CREATEFIELDREWARDEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void StartFieldRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_STARTFIELDREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_ADDREWARDPROB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_ADDREWARDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDREWARDEXCEL_ENDFIELDREWARDEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

