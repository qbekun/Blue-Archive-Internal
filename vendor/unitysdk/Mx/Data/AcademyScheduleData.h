#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class AcademyRewardExcel; }

#define MX_DATA_ACADEMYSCHEDULEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x180E2D0)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x180E2E0)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x180E2F0)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x180E300)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_ORDERINGROUP_OFFSET UNITYSDK_OFFSET(0x180E310)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_ORDERINGROUP_OFFSET UNITYSDK_OFFSET(0x180E320)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x180E330)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x180E340)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_TEXTLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x180E350)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_TEXTLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x180E360)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_LOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x180E370)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_LOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x180E380)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_FAVOREXP_OFFSET UNITYSDK_OFFSET(0x180E390)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_FAVOREXP_OFFSET UNITYSDK_OFFSET(0x180E3A0)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_EXTRAFAVOREXP_OFFSET UNITYSDK_OFFSET(0x180E3B0)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_EXTRAFAVOREXP_OFFSET UNITYSDK_OFFSET(0x180E3C0)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_EXTRAFAVOREXPPROB_OFFSET UNITYSDK_OFFSET(0x180E3D0)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_EXTRAFAVOREXPPROB_OFFSET UNITYSDK_OFFSET(0x180E3E0)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_SECRETSTONEPROB_OFFSET UNITYSDK_OFFSET(0x180E3F0)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_SECRETSTONEPROB_OFFSET UNITYSDK_OFFSET(0x180E400)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_SECRETSTONEAMOUNT_OFFSET UNITYSDK_OFFSET(0x180E410)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_SECRETSTONEAMOUNT_OFFSET UNITYSDK_OFFSET(0x180E420)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x180E430)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x180E440)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_EXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0x180E450)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_EXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0x180E460)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_DISPLAYEXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0x180E470)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_DISPLAYEXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0x180E480)
#define MX_DATA_ACADEMYSCHEDULEDATA_GET_PROGRESSTEXTURE_OFFSET UNITYSDK_OFFSET(0x180E490)
#define MX_DATA_ACADEMYSCHEDULEDATA_SET_PROGRESSTEXTURE_OFFSET UNITYSDK_OFFSET(0x180E4A0)
#define MX_DATA_ACADEMYSCHEDULEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x180D4E0)
#define MX_DATA_ACADEMYSCHEDULEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x180E4B0)

namespace MX::Data
{
	inline static constexpr unsigned int AcademyScheduleData_TypeDefinitionIndex = 15707;

	class AcademyScheduleData : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _ScheduleGroupId_k__BackingField; // 0x18
		::System::Int64 _OrderInGroup_k__BackingField; // 0x20
		::System::UInt32 _LocalizeEtcId_k__BackingField; // 0x28
		::System::UInt32 _TextLocalizeEtcId_k__BackingField; // 0x2C
		::System::Int64 _LocationRank_k__BackingField; // 0x30
		::System::Int64 _FavorExp_k__BackingField; // 0x38
		::System::Int64 _ExtraFavorExp_k__BackingField; // 0x40
		::System::Int64 _ExtraFavorExpProb_k__BackingField; // 0x48
		::System::Int64 _SecretStoneProb_k__BackingField; // 0x50
		::System::Int64 _SecretStoneAmount_k__BackingField; // 0x58
		Il2CppObject* _Rewards_k__BackingField; // 0x60
		Il2CppObject* _ExtraRewards_k__BackingField; // 0x68
		Il2CppObject* _DisplayExtraRewards_k__BackingField; // 0x70
		::System::String* _ProgressTexture_k__BackingField; // 0x78

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScheduleGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_SCHEDULEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ScheduleGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_SCHEDULEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OrderInGroup()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_ORDERINGROUP_OFFSET))(nullptr);
		}

		::System::Void set_OrderInGroup(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_ORDERINGROUP_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_LOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_TextLocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_TEXTLOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Void set_TextLocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_TEXTLOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LocationRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_LOCATIONRANK_OFFSET))(nullptr);
		}

		::System::Void set_LocationRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_LOCATIONRANK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FavorExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_FAVOREXP_OFFSET))(nullptr);
		}

		::System::Void set_FavorExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_FAVOREXP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ExtraFavorExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_EXTRAFAVOREXP_OFFSET))(nullptr);
		}

		::System::Void set_ExtraFavorExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_EXTRAFAVOREXP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ExtraFavorExpProb()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_EXTRAFAVOREXPPROB_OFFSET))(nullptr);
		}

		::System::Void set_ExtraFavorExpProb(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_EXTRAFAVOREXPPROB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SecretStoneProb()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_SECRETSTONEPROB_OFFSET))(nullptr);
		}

		::System::Void set_SecretStoneProb(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_SECRETSTONEPROB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SecretStoneAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_SECRETSTONEAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SecretStoneAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_SECRETSTONEAMOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExtraRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_EXTRAREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_ExtraRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_EXTRAREWARDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DisplayExtraRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_DISPLAYEXTRAREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_DisplayExtraRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_DISPLAYEXTRAREWARDS_OFFSET))(arg, nullptr);
		}

		::System::String* get_ProgressTexture()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_GET_PROGRESSTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_ProgressTexture(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_SET_PROGRESSTEXTURE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::AcademyRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::AcademyRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYSCHEDULEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

