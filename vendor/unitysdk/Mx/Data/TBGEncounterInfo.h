#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MinigameTBGEncounterExcel; }
namespace FlatData { class TBGObjectType; }
namespace FlatData { class TBGThemaType; }

#define MX_DATA_TBGENCOUNTERINFO_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x190BE20)
#define MX_DATA_TBGENCOUNTERINFO_GET_BEFORESTORYOPTION1LOCALIZE_OFFSET UNITYSDK_OFFSET(0x190BE40)
#define MX_DATA_TBGENCOUNTERINFO_GET_OPTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x190BE60)
#define MX_DATA_TBGENCOUNTERINFO_GET_ALLTHEMA_OFFSET UNITYSDK_OFFSET(0x190BE80)
#define MX_DATA_TBGENCOUNTERINFO_GET_REWARDHIDE_OFFSET UNITYSDK_OFFSET(0x190BEA0)
#define MX_DATA_TBGENCOUNTERINFO_GET_HASBEFORESTORY_OFFSET UNITYSDK_OFFSET(0x190BEC0)
#define MX_DATA_TBGENCOUNTERINFO_GET_DEFEATSTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x190BF10)
#define MX_DATA_TBGENCOUNTERINFO_GET_BEFORESTORYOPTION3LOCALIZE_OFFSET UNITYSDK_OFFSET(0x190BF30)
#define MX_DATA_TBGENCOUNTERINFO_GET_ENEMYATTACKLOCALIZE_OFFSET UNITYSDK_OFFSET(0x190BF50)
#define MX_DATA_TBGENCOUNTERINFO_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x190BF70)
#define MX_DATA_TBGENCOUNTERINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x190BF80)
#define MX_DATA_TBGENCOUNTERINFO_GET_ENEMYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x190BFA0)
#define MX_DATA_TBGENCOUNTERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x190BFC0)
#define MX_DATA_TBGENCOUNTERINFO_GET_ENCOUNTERTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x190BFF0)
#define MX_DATA_TBGENCOUNTERINFO_GET_THEMAID_OFFSET UNITYSDK_OFFSET(0x190C010)
#define MX_DATA_TBGENCOUNTERINFO_GET_THEMATYPE_OFFSET UNITYSDK_OFFSET(0x190C030)
#define MX_DATA_TBGENCOUNTERINFO_GET_ALLYATTACKLOCALIZE_OFFSET UNITYSDK_OFFSET(0x190C050)
#define MX_DATA_TBGENCOUNTERINFO_GET_RUNAWAYSTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x190C070)
#define MX_DATA_TBGENCOUNTERINFO_GET_CLEARSTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x190C090)
#define MX_DATA_TBGENCOUNTERINFO_GET_ENEMYNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x190C0B0)
#define MX_DATA_TBGENCOUNTERINFO_GET_BEFORESTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x190C0D0)
#define MX_DATA_TBGENCOUNTERINFO_GET_ATTACKDEFENCELOCALIZE_OFFSET UNITYSDK_OFFSET(0x190C0F0)
#define MX_DATA_TBGENCOUNTERINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x190C110)
#define MX_DATA_TBGENCOUNTERINFO_GET_BEFORESTORYOPTION2LOCALIZE_OFFSET UNITYSDK_OFFSET(0x190C130)

namespace MX::Data
{
	inline static constexpr unsigned int TBGEncounterInfo_TypeDefinitionIndex = 16242;

	class TBGEncounterInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MinigameTBGEncounterExcel* _Excel_k__BackingField; // 0x10

		::FlatData::TBGObjectType* get_ObjectType()
		{
			return (return (::FlatData::TBGObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::String* get_BeforeStoryOption1Localize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_BEFORESTORYOPTION1LOCALIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_OptionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_OPTIONGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_AllThema()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_ALLTHEMA_OFFSET))(nullptr);
		}

		::System::Boolean get_RewardHide()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_REWARDHIDE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasBeforeStory()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_HASBEFORESTORY_OFFSET))(nullptr);
		}

		::System::String* get_DefeatStoryLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_DEFEATSTORYLOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_BeforeStoryOption3Localize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_BEFORESTORYOPTION3LOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_EnemyAttackLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_ENEMYATTACKLOCALIZE_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGEncounterExcel* get_Excel()
		{
			return (return (::MX::Data::Excel::MinigameTBGEncounterExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_EXCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_EnemyPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_ENEMYPREFABNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MinigameTBGEncounterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameTBGEncounterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_EncounterTitleLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_ENCOUNTERTITLELOCALIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_ThemaId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_THEMAID_OFFSET))(nullptr);
		}

		::FlatData::TBGThemaType* get_ThemaType()
		{
			return (return (::FlatData::TBGThemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_THEMATYPE_OFFSET))(nullptr);
		}

		::System::String* get_AllyAttackLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_ALLYATTACKLOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_RunAwayStoryLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_RUNAWAYSTORYLOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_ClearStoryLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_CLEARSTORYLOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_EnemyNameLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_ENEMYNAMELOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_BeforeStoryLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_BEFORESTORYLOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_AttackDefenceLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_ATTACKDEFENCELOCALIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::String* get_BeforeStoryOption2Localize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERINFO_GET_BEFORESTORYOPTION2LOCALIZE_OFFSET))(nullptr);
		}

	};
}

