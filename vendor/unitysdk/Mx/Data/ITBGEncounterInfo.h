#pragma once
#include "../../unitysdk.h"

namespace FlatData { class TBGThemaType; }
namespace FlatData { class TBGObjectType; }

#define MX_DATA_ITBGENCOUNTERINFO_GET_HASBEFORESTORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_BEFORESTORYOPTION2LOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_ENEMYATTACKLOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_ATTACKDEFENCELOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_THEMATYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_REWARDHIDE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_ALLTHEMA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_DEFEATSTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_THEMAID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_CLEARSTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_BEFORESTORYOPTION1LOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_RUNAWAYSTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_BEFORESTORYOPTION3LOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_ENEMYNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_BEFORESTORYLOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_ENEMYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_ALLYATTACKLOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_ENCOUNTERTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERINFO_GET_OPTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int ITBGEncounterInfo_TypeDefinitionIndex = 16233;

	class ITBGEncounterInfo : public Il2CppObject
	{
	public:
		::System::Boolean get_HasBeforeStory()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_HASBEFORESTORY_OFFSET))(nullptr);
		}

		::System::String* get_BeforeStoryOption2Localize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_BEFORESTORYOPTION2LOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_EnemyAttackLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_ENEMYATTACKLOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_AttackDefenceLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_ATTACKDEFENCELOCALIZE_OFFSET))(nullptr);
		}

		::FlatData::TBGThemaType* get_ThemaType()
		{
			return (return (::FlatData::TBGThemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_THEMATYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_RewardHide()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_REWARDHIDE_OFFSET))(nullptr);
		}

		::System::Boolean get_AllThema()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_ALLTHEMA_OFFSET))(nullptr);
		}

		::System::String* get_DefeatStoryLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_DEFEATSTORYLOCALIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_ThemaId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_THEMAID_OFFSET))(nullptr);
		}

		::FlatData::TBGObjectType* get_ObjectType()
		{
			return (return (::FlatData::TBGObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ClearStoryLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_CLEARSTORYLOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_BeforeStoryOption1Localize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_BEFORESTORYOPTION1LOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_RunAwayStoryLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_RUNAWAYSTORYLOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_BeforeStoryOption3Localize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_BEFORESTORYOPTION3LOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_EnemyNameLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_ENEMYNAMELOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_BeforeStoryLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_BEFORESTORYLOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_EnemyPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_ENEMYPREFABNAME_OFFSET))(nullptr);
		}

		::System::String* get_AllyAttackLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_ALLYATTACKLOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_EncounterTitleLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_ENCOUNTERTITLELOCALIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_OptionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERINFO_GET_OPTIONGROUPID_OFFSET))(nullptr);
		}

	};
}

