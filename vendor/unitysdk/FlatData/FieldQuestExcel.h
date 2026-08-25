#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldQuestExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_FIELDQUESTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD41970)
#define FLATDATA_FIELDQUESTEXCEL_GETROOTASFIELDQUESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD41980)
#define FLATDATA_FIELDQUESTEXCEL_GETROOTASFIELDQUESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD419E0)
#define FLATDATA_FIELDQUESTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD41A40)
#define FLATDATA_FIELDQUESTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD41690)
#define FLATDATA_FIELDQUESTEXCEL_GET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xD41A60)
#define FLATDATA_FIELDQUESTEXCEL_GET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xD41AB0)
#define FLATDATA_FIELDQUESTEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD41B30)
#define FLATDATA_FIELDQUESTEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD41B80)
#define FLATDATA_FIELDQUESTEXCEL_GET_ISDAILY_OFFSET UNITYSDK_OFFSET(0xD41C00)
#define FLATDATA_FIELDQUESTEXCEL_GET_ISDAILY_OFFSET UNITYSDK_OFFSET(0xD41C50)
#define FLATDATA_FIELDQUESTEXCEL_GET_FIELDDATEID_OFFSET UNITYSDK_OFFSET(0xD41CA0)
#define FLATDATA_FIELDQUESTEXCEL_GET_FIELDDATEID_OFFSET UNITYSDK_OFFSET(0xD41CF0)
#define FLATDATA_FIELDQUESTEXCEL_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xD41D70)
#define FLATDATA_FIELDQUESTEXCEL_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xD41DC0)
#define FLATDATA_FIELDQUESTEXCEL_GET_QUESTGROUPID_OFFSET UNITYSDK_OFFSET(0xD41E40)
#define FLATDATA_FIELDQUESTEXCEL_GET_QUESTGROUPID_OFFSET UNITYSDK_OFFSET(0xD41E90)
#define FLATDATA_FIELDQUESTEXCEL_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0xD41F10)
#define FLATDATA_FIELDQUESTEXCEL_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0xD41F50)
#define FLATDATA_FIELDQUESTEXCEL_GETASSETPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD41FC0)
#define FLATDATA_FIELDQUESTEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD41FE0)
#define FLATDATA_FIELDQUESTEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xD42030)
#define FLATDATA_FIELDQUESTEXCEL_GET_PROB_OFFSET UNITYSDK_OFFSET(0xD420B0)
#define FLATDATA_FIELDQUESTEXCEL_GET_PROB_OFFSET UNITYSDK_OFFSET(0xD42100)
#define FLATDATA_FIELDQUESTEXCEL_GET_QUESTNAMKEY_OFFSET UNITYSDK_OFFSET(0xD42180)
#define FLATDATA_FIELDQUESTEXCEL_GET_QUESTNAMKEY_OFFSET UNITYSDK_OFFSET(0xD421D0)
#define FLATDATA_FIELDQUESTEXCEL_GET_QUESTDESCKEY_OFFSET UNITYSDK_OFFSET(0xD42250)
#define FLATDATA_FIELDQUESTEXCEL_GET_QUESTDESCKEY_OFFSET UNITYSDK_OFFSET(0xD422A0)
#define FLATDATA_FIELDQUESTEXCEL_CREATEFIELDQUESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD42320)
#define FLATDATA_FIELDQUESTEXCEL_STARTFIELDQUESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD42780)
#define FLATDATA_FIELDQUESTEXCEL_ADDFIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xD42610)
#define FLATDATA_FIELDQUESTEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD425E0)
#define FLATDATA_FIELDQUESTEXCEL_ADDISDAILY_OFFSET UNITYSDK_OFFSET(0xD42700)
#define FLATDATA_FIELDQUESTEXCEL_ADDFIELDDATEID_OFFSET UNITYSDK_OFFSET(0xD425B0)
#define FLATDATA_FIELDQUESTEXCEL_ADDOPENDATE_OFFSET UNITYSDK_OFFSET(0xD42580)
#define FLATDATA_FIELDQUESTEXCEL_ADDQUESTGROUPID_OFFSET UNITYSDK_OFFSET(0xD42550)
#define FLATDATA_FIELDQUESTEXCEL_ADDASSETPATH_OFFSET UNITYSDK_OFFSET(0xD426D0)
#define FLATDATA_FIELDQUESTEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0xD42520)
#define FLATDATA_FIELDQUESTEXCEL_ADDPROB_OFFSET UNITYSDK_OFFSET(0xD426A0)
#define FLATDATA_FIELDQUESTEXCEL_ADDQUESTNAMKEY_OFFSET UNITYSDK_OFFSET(0xD42670)
#define FLATDATA_FIELDQUESTEXCEL_ADDQUESTDESCKEY_OFFSET UNITYSDK_OFFSET(0xD42640)
#define FLATDATA_FIELDQUESTEXCEL_ENDFIELDQUESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD42730)

namespace FlatData
{
	inline static constexpr unsigned int FieldQuestExcel_TypeDefinitionIndex = 9279;

	class FieldQuestExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldQuestExcel* GetRootAsFieldQuestExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldQuestExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GETROOTASFIELDQUESTEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldQuestExcel* GetRootAsFieldQuestExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldQuestExcel* arg2)
		{
			return ((::FlatData::FieldQuestExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldQuestExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GETROOTASFIELDQUESTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldQuestExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldQuestExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_fieldSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_FIELDSEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_FieldSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_FIELDSEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_uniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean get_isDaily()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_ISDAILY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDaily()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_ISDAILY_OFFSET))(nullptr);
		}

		::System::Int64 get_fieldDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_FIELDDATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_FieldDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_FIELDDATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_opendate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_Opendate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_questGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_QUESTGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_QuestGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_QUESTGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_assetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_ASSETPATH_OFFSET))(nullptr);
		}

		::System::String* get_AssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_ASSETPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAssetPathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GETASSETPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_rewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_prob()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_PROB_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_PROB_OFFSET))(nullptr);
		}

		::System::UInt32 get_questNamKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_QUESTNAMKEY_OFFSET))(nullptr);
		}

		::System::UInt32 get_QuestNamKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_QUESTNAMKEY_OFFSET))(nullptr);
		}

		::System::UInt32 get_questDescKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_QUESTDESCKEY_OFFSET))(nullptr);
		}

		::System::UInt32 get_QuestDescKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_GET_QUESTDESCKEY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldQuestExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Boolean arg4, ::System::Int64 arg5, ::System::Int64 arg6, ::System::Int64 arg7, ::FlatBuffers::StringOffset* arg8, ::System::Int64 arg9, ::System::Int32 arg10, ::System::UInt32 arg11, ::System::UInt32 arg12)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_CREATEFIELDQUESTEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, nullptr);
		}

		::System::Void StartFieldQuestExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_STARTFIELDQUESTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddFieldSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_ADDFIELDSEASONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_ADDUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddIsDaily(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_ADDISDAILY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFieldDateId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_ADDFIELDDATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOpendate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_ADDOPENDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddQuestGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_ADDQUESTGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAssetPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_ADDASSETPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_ADDREWARDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_ADDPROB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddQuestNamKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_ADDQUESTNAMKEY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddQuestDescKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_ADDQUESTDESCKEY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldQuestExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDQUESTEXCEL_ENDFIELDQUESTEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

