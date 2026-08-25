#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldCharacterDB; }
namespace MXField::Shared::Model { class FieldMasteryDB; }
namespace MXField::Shared::Data { class FieldSeasonInfo; }
namespace MXField::Shared::Data { class FieldQuestInfo; }

#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_INTERACTIONS_OFFSET UNITYSDK_OFFSET(0xE71F40)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE71F50)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_MAINQUESTS_OFFSET UNITYSDK_OFFSET(0xE721A0)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_CHECKOPENCONDITION_OFFSET UNITYSDK_OFFSET(0xE721B0)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_MAINQUESTS_OFFSET UNITYSDK_OFFSET(0xE723F0)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xE72400)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_MASTERY_OFFSET UNITYSDK_OFFSET(0xE72410)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_MAINQUESTIDS_OFFSET UNITYSDK_OFFSET(0xE72420)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_SERVERTIME_OFFSET UNITYSDK_OFFSET(0xE725E0)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_MASTERY_OFFSET UNITYSDK_OFFSET(0xE725F0)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_CREATEDAILYQUESTS_OFFSET UNITYSDK_OFFSET(0xE72600)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_INTERACTIONS_OFFSET UNITYSDK_OFFSET(0xE72B20)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xE72B30)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_DAILYQUESTS_OFFSET UNITYSDK_OFFSET(0xE72B40)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0xE72B50)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0xE72B60)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_CURRENTDATEID_OFFSET UNITYSDK_OFFSET(0xE72270)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_DAILYQUESTS_OFFSET UNITYSDK_OFFSET(0xE72D30)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT__CREATEDAILYQUESTS_B__54_0_OFFSET UNITYSDK_OFFSET(0xE72D40)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xE72DC0)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xE63690)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xE72DD0)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_CLEARDATEIDS_OFFSET UNITYSDK_OFFSET(0xE72B70)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_DATEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xE72DE0)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_SERVERTIME_OFFSET UNITYSDK_OFFSET(0xE72DF0)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_STARTDAYSSINCE_OFFSET UNITYSDK_OFFSET(0xE72D90)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_DATEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xE72E00)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_TRYGETPLAYABLEDATEID_OFFSET UNITYSDK_OFFSET(0xE72E10)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_INTERACTIONIDS_OFFSET UNITYSDK_OFFSET(0xE73060)
#define MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_EVIDENCEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xE73220)

namespace MXField::Shared::Model
{
	inline static constexpr unsigned int FieldSnapshot_TypeDefinitionIndex = 10551;

	class FieldSnapshot : public Il2CppObject
	{
	public:
		::System::Int64 _FieldSeasonId_k__BackingField; // 0x10
		::System::Int64 _AccountId_k__BackingField; // 0x18
		::System::DateTime* _ServerTime_k__BackingField; // 0x20
		::MXField::Shared::Model::FieldCharacterDB* _Character_k__BackingField; // 0x28
		::MXField::Shared::Model::FieldMasteryDB* _Mastery_k__BackingField; // 0x30
		Il2CppObject* _DateHistoryDBs_k__BackingField; // 0x38
		Il2CppObject* _Interactions_k__BackingField; // 0x40
		Il2CppObject* _MainQuests_k__BackingField; // 0x48
		Il2CppObject* _DailyQuests_k__BackingField; // 0x50
		::MXField::Shared::Data::FieldSeasonInfo* _seasonInfoCache; // 0x58

		::System::Void set_Interactions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_INTERACTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::DateTime* arg3, ::MXField::Shared::Model::FieldCharacterDB* arg4, ::MXField::Shared::Model::FieldMasteryDB* arg5, Il2CppObject* arg6, Il2CppObject* arg7, Il2CppObject* arg8, Il2CppObject* arg9)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::DateTime*, ::MXField::Shared::Model::FieldCharacterDB*, ::MXField::Shared::Model::FieldMasteryDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void set_MainQuests(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_MAINQUESTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckOpenCondition(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_CHECKOPENCONDITION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MainQuests()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_MAINQUESTS_OFFSET))(nullptr);
		}

		::System::Int64 get_FieldSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_FIELDSEASONID_OFFSET))(nullptr);
		}

		::MXField::Shared::Model::FieldMasteryDB* get_Mastery()
		{
			return ((::MXField::Shared::Model::FieldMasteryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_MASTERY_OFFSET))(nullptr);
		}

		Il2CppObject* get_MainQuestIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_MAINQUESTIDS_OFFSET))(nullptr);
		}

		::System::DateTime* get_ServerTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_SERVERTIME_OFFSET))(nullptr);
		}

		::System::Void set_Mastery(::MXField::Shared::Model::FieldMasteryDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldMasteryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_MASTERY_OFFSET))(arg, nullptr);
		}

		::System::Void CreateDailyQuests(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_CREATEDAILYQUESTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Interactions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_INTERACTIONS_OFFSET))(nullptr);
		}

		::System::Void set_FieldSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_FIELDSEASONID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DailyQuests()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_DAILYQUESTS_OFFSET))(nullptr);
		}

		::System::Void set_Character(::MXField::Shared::Model::FieldCharacterDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Model::FieldCharacterDB* get_Character()
		{
			return ((::MXField::Shared::Model::FieldCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_CURRENTDATEID_OFFSET))(nullptr);
		}

		::System::Void set_DailyQuests(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_DAILYQUESTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CreateDailyQuests_b__54_0(::MXField::Shared::Data::FieldQuestInfo* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Data::FieldQuestInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT__CREATEDAILYQUESTS_B__54_0_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldSeasonInfo* get_SeasonInfo()
		{
			return ((::MXField::Shared::Data::FieldSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClearDateIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_CLEARDATEIDS_OFFSET))(nullptr);
		}

		::System::Void set_DateHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_DATEHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_SET_SERVERTIME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StartDaysSince()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_STARTDAYSSINCE_OFFSET))(nullptr);
		}

		Il2CppObject* get_DateHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_DATEHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetPlayableDateId(int64_t&* arg)
		{
			return ((::System::Boolean(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_TRYGETPLAYABLEDATEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_InteractionIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_INTERACTIONIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_EvidenceUniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDSNAPSHOT_GET_EVIDENCEUNIQUEIDS_OFFSET))(nullptr);
		}

	};
}

