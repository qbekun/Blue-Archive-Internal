#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class LimitedStageRewardExcel; }
namespace FlatData { class RewardTag; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4F0A0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GETROOTASLIMITEDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD4F0B0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GETROOTASLIMITEDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD4F110)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD4F170)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD4EDC0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD4F190)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD4F1E0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDTAG_OFFSET UNITYSDK_OFFSET(0xD4F260)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDTAG_OFFSET UNITYSDK_OFFSET(0xD4F2B0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDPROB_OFFSET UNITYSDK_OFFSET(0xD4F330)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDPROB_OFFSET UNITYSDK_OFFSET(0xD4F380)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD4F400)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD4F450)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD4F4D0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD4F520)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xD4F5A0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xD4F5F0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0xD4F670)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0xD4F6C0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_CREATELIMITEDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD4F710)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_STARTLIMITEDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD4FA00)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0xD4F890)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDREWARDTAG_OFFSET UNITYSDK_OFFSET(0xD4F950)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDREWARDPROB_OFFSET UNITYSDK_OFFSET(0xD4F920)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD4F8F0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0xD4F860)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xD4F8C0)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDISDISPLAYED_OFFSET UNITYSDK_OFFSET(0xD4F980)
#define FLATDATA_LIMITEDSTAGEREWARDEXCEL_ENDLIMITEDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD4F9B0)

namespace FlatData
{
	inline static constexpr unsigned int LimitedStageRewardExcel_TypeDefinitionIndex = 9303;

	class LimitedStageRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::LimitedStageRewardExcel* GetRootAsLimitedStageRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::LimitedStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GETROOTASLIMITEDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::LimitedStageRewardExcel* GetRootAsLimitedStageRewardExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::LimitedStageRewardExcel* arg2)
		{
			return ((::FlatData::LimitedStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::LimitedStageRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GETROOTASLIMITEDSTAGEREWARDEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::LimitedStageRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::LimitedStageRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_groupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::RewardTag* get_rewardTag()
		{
			return ((::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDTAG_OFFSET))(nullptr);
		}

		::FlatData::RewardTag* get_RewardTag()
		{
			return ((::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDTAG_OFFSET))(nullptr);
		}

		::System::Int32 get_rewardProb()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDPROB_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardProb()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_rewardParcelType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_rewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_rewardAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_REWARDAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_isDisplayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_ISDISPLAYED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisplayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_GET_ISDISPLAYED_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLimitedStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatData::RewardTag* arg3, ::System::Int32 arg4, ::FlatData::ParcelType* arg5, ::System::Int64 arg6, ::System::Int32 arg7, ::System::Boolean arg8)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::RewardTag*, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_CREATELIMITEDSTAGEREWARDEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void StartLimitedStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_STARTLIMITEDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RewardTag* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDREWARDTAG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDREWARDPROB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDREWARDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddIsDisplayed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_ADDISDISPLAYED_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndLimitedStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEREWARDEXCEL_ENDLIMITEDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

