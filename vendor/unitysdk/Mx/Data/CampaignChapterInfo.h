#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class CampaignChapterRewardInfo; }
namespace FlatData { class StageDifficulty; }
namespace MX::Data::Excel { class CampaignChapterExcel; }

#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1832E90)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GETNEXTSTAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1832EA0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GETNONEXTRASTAGEIDS_OFFSET UNITYSDK_OFFSET(0x1833280)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GETLASTSTAGEID_OFFSET UNITYSDK_OFFSET(0x18332B0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1833380)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_ISTACTICSKIP_OFFSET UNITYSDK_OFFSET(0x1833390)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_NORMALCHAPTERREWARDINFO_OFFSET UNITYSDK_OFFSET(0x18333A0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_HARDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x18333B0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_HARDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x18333C0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_HARDCHAPTERREWARDINFO_OFFSET UNITYSDK_OFFSET(0x18333D0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_STAGEUNIQUEIDSALL_OFFSET UNITYSDK_OFFSET(0x18333E0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_STAGEUNIQUEIDSALL_OFFSET UNITYSDK_OFFSET(0x18333F0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1833400)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_VERYHARDCHAPTERREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1833410)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_VERYHARDCHAPTERREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1833420)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_ISTACTICSKIP_OFFSET UNITYSDK_OFFSET(0x1833430)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_VERYHARDSTAGEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1833440)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GETCHAPTERREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1833450)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_HARDSTAGEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1833510)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_NORMALEXTRASTAGEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1833520)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_NORMALSTAGEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1833530)
#define MX_DATA_CAMPAIGNCHAPTERINFO_CONTAINSNORMALEXTRASTAGE_OFFSET UNITYSDK_OFFSET(0x1833190)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_NORMALCHAPTERREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1833540)
#define MX_DATA_CAMPAIGNCHAPTERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1833550)
#define MX_DATA_CAMPAIGNCHAPTERINFO_CONTAINSVERYHARDSTAGE_OFFSET UNITYSDK_OFFSET(0x1833230)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_NORMALIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x18346B0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_PREREQUISITESTAGEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x18346C0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_CONTAINSNORMALSTAGE_OFFSET UNITYSDK_OFFSET(0x1833140)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_NORMALIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x18346D0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_CONTAINSHARDSTAGE_OFFSET UNITYSDK_OFFSET(0x18331E0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_VERYHARDSTAGEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x18346E0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_PREREQUISITESTAGEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x18346F0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_NORMALSTAGEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1834700)
#define MX_DATA_CAMPAIGNCHAPTERINFO_CONTAINSSTAGE_OFFSET UNITYSDK_OFFSET(0x1834710)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_HARDSTAGEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1834820)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_NORMALEXTRASTAGEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1834830)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_DEVNAME_OFFSET UNITYSDK_OFFSET(0x1834840)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_HARDCHAPTERREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1834850)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GETPREVIOUSSTAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1834860)
#define MX_DATA_CAMPAIGNCHAPTERINFO_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0x1834AE0)
#define MX_DATA_CAMPAIGNCHAPTERINFO_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1834AF0)

namespace MX::Data
{
	inline static constexpr unsigned int CampaignChapterInfo_TypeDefinitionIndex = 15736;

	class CampaignChapterInfo : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::String* _DevName_k__BackingField; // 0x18
		::System::String* _NormalImagePath_k__BackingField; // 0x20
		::System::String* _HardImagePath_k__BackingField; // 0x28
		::System::Int64 _Order_k__BackingField; // 0x30
		Il2CppObject* _PrerequisiteStageUniqueIds_k__BackingField; // 0x38
		Il2CppObject* _NormalStageUniqueIds_k__BackingField; // 0x40
		Il2CppObject* _NormalExtraStageUniqueIds_k__BackingField; // 0x48
		Il2CppObject* _HardStageUniqueIds_k__BackingField; // 0x50
		Il2CppObject* _VeryHardStageUniqueIds_k__BackingField; // 0x58
		Il2CppObject* _StageUniqueIdsAll_k__BackingField; // 0x60
		::MX::Data::CampaignChapterRewardInfo* _NormalChapterRewardInfo_k__BackingField; // 0x68
		::MX::Data::CampaignChapterRewardInfo* _HardChapterRewardInfo_k__BackingField; // 0x70
		::MX::Data::CampaignChapterRewardInfo* _VeryHardChapterRewardInfo_k__BackingField; // 0x78
		::System::Boolean _IsTacticSkip_k__BackingField; // 0x80

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetNextStageUniqueId(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GETNEXTSTAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNonExtraStageIds(::FlatData::StageDifficulty* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GETNONEXTRASTAGEIDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetLastStageId(::FlatData::StageDifficulty* arg)
		{
			return (return (::System::Int64(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GETLASTSTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTacticSkip()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_ISTACTICSKIP_OFFSET))(nullptr);
		}

		::System::Void set_NormalChapterRewardInfo(::MX::Data::CampaignChapterRewardInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignChapterRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_NORMALCHAPTERREWARDINFO_OFFSET))(arg, nullptr);
		}

		::System::String* get_HardImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_HARDIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_HardImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_HARDIMAGEPATH_OFFSET))(str, nullptr);
		}

		::MX::Data::CampaignChapterRewardInfo* get_HardChapterRewardInfo()
		{
			return (return (::MX::Data::CampaignChapterRewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_HARDCHAPTERREWARDINFO_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueIdsAll(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_STAGEUNIQUEIDSALL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StageUniqueIdsAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_STAGEUNIQUEIDSALL_OFFSET))(nullptr);
		}

		::System::Int64 get_Order()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Void set_VeryHardChapterRewardInfo(::MX::Data::CampaignChapterRewardInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignChapterRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_VERYHARDCHAPTERREWARDINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::CampaignChapterRewardInfo* get_VeryHardChapterRewardInfo()
		{
			return (return (::MX::Data::CampaignChapterRewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_VERYHARDCHAPTERREWARDINFO_OFFSET))(nullptr);
		}

		::System::Void set_IsTacticSkip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_ISTACTICSKIP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_VeryHardStageUniqueIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_VERYHARDSTAGEUNIQUEIDS_OFFSET))(nullptr);
		}

		::MX::Data::CampaignChapterRewardInfo* GetChapterRewardInfo(::FlatData::StageDifficulty* arg)
		{
			return (return (::MX::Data::CampaignChapterRewardInfo*(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GETCHAPTERREWARDINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_HardStageUniqueIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_HARDSTAGEUNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void set_NormalExtraStageUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_NORMALEXTRASTAGEUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_NormalStageUniqueIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_NORMALSTAGEUNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Boolean ContainsNormalExtraStage(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_CONTAINSNORMALEXTRASTAGE_OFFSET))(arg, nullptr);
		}

		::MX::Data::CampaignChapterRewardInfo* get_NormalChapterRewardInfo()
		{
			return (return (::MX::Data::CampaignChapterRewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_NORMALCHAPTERREWARDINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::MX::Data::Excel::CampaignChapterExcel* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Data::Excel::CampaignChapterExcel*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ContainsVeryHardStage(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_CONTAINSVERYHARDSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_NormalImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_NORMALIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_PrerequisiteStageUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_PREREQUISITESTAGEUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsNormalStage(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_CONTAINSNORMALSTAGE_OFFSET))(arg, nullptr);
		}

		::System::String* get_NormalImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_NORMALIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Boolean ContainsHardStage(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_CONTAINSHARDSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_VeryHardStageUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_VERYHARDSTAGEUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PrerequisiteStageUniqueIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_PREREQUISITESTAGEUNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void set_NormalStageUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_NORMALSTAGEUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsStage(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_CONTAINSSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_HardStageUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_HARDSTAGEUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_NormalExtraStageUniqueIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_NORMALEXTRASTAGEUNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void set_DevName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_DEVNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_HardChapterRewardInfo(::MX::Data::CampaignChapterRewardInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignChapterRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_HARDCHAPTERREWARDINFO_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetPreviousStageUniqueId(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GETPREVIOUSSTAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::String* get_DevName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_GET_DEVNAME_OFFSET))(nullptr);
		}

		::System::Void set_Order(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERINFO_SET_ORDER_OFFSET))(arg, nullptr);
		}

	};
}

