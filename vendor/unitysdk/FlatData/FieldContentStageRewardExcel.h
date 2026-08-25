#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldContentStageRewardExcel; }
namespace FlatData { class RewardTag; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD380F0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GETROOTASFIELDCONTENTSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD38100)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GETROOTASFIELDCONTENTSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD38160)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD381C0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD37E10)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD381E0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD38230)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDTAG_OFFSET UNITYSDK_OFFSET(0xD382B0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDTAG_OFFSET UNITYSDK_OFFSET(0xD38300)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDPROB_OFFSET UNITYSDK_OFFSET(0xD38380)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDPROB_OFFSET UNITYSDK_OFFSET(0xD383D0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD38450)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD384A0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD38520)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD38570)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xD385F0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xD38640)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0xD386C0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0xD38710)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_CREATEFIELDCONTENTSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD38760)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_STARTFIELDCONTENTSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD38A50)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0xD388E0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDREWARDTAG_OFFSET UNITYSDK_OFFSET(0xD389A0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDREWARDPROB_OFFSET UNITYSDK_OFFSET(0xD38970)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD38940)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0xD388B0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xD38910)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDISDISPLAYED_OFFSET UNITYSDK_OFFSET(0xD389D0)
#define FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ENDFIELDCONTENTSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD38A00)

namespace FlatData
{
	inline static constexpr unsigned int FieldContentStageRewardExcel_TypeDefinitionIndex = 9261;

	class FieldContentStageRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldContentStageRewardExcel* GetRootAsFieldContentStageRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldContentStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GETROOTASFIELDCONTENTSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldContentStageRewardExcel* GetRootAsFieldContentStageRewardExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldContentStageRewardExcel* arg2)
		{
			return ((::FlatData::FieldContentStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldContentStageRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GETROOTASFIELDCONTENTSTAGEREWARDEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldContentStageRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldContentStageRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_groupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::RewardTag* get_rewardTag()
		{
			return ((::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDTAG_OFFSET))(nullptr);
		}

		::FlatData::RewardTag* get_RewardTag()
		{
			return ((::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDTAG_OFFSET))(nullptr);
		}

		::System::Int32 get_rewardProb()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDPROB_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardProb()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_rewardParcelType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_rewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_rewardAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_REWARDAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_isDisplayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_ISDISPLAYED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisplayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_GET_ISDISPLAYED_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldContentStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatData::RewardTag* arg3, ::System::Int32 arg4, ::FlatData::ParcelType* arg5, ::System::Int64 arg6, ::System::Int32 arg7, ::System::Boolean arg8)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::RewardTag*, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_CREATEFIELDCONTENTSTAGEREWARDEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void StartFieldContentStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_STARTFIELDCONTENTSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RewardTag* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDREWARDTAG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDREWARDPROB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDREWARDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddIsDisplayed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ADDISDISPLAYED_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldContentStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEREWARDEXCEL_ENDFIELDCONTENTSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

