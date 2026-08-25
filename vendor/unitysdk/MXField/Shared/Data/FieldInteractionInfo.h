#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class ICondition; }
namespace MXField::Shared::Condition { class IConditionChecker; }
namespace FlatData { class FieldInteractionExcel; }
namespace MXField::Shared::Data { class FieldMasteryInfo; }
namespace FlatData { class FieldConditionType; }
namespace FlatData { class FieldInteractionType; }

#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xE76E30)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE76E40)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xE76E50)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_KEYWORDLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xE76E60)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_SHOWEMOJI_OFFSET UNITYSDK_OFFSET(0xE76E70)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ISONCEONLY_OFFSET UNITYSDK_OFFSET(0xE76E80)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_INTERACTIONDESCS_OFFSET UNITYSDK_OFFSET(0xE76E90)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0xE76EA0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_CONDITIONIDS_OFFSET UNITYSDK_OFFSET(0xE76EB0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_MASTERY_OFFSET UNITYSDK_OFFSET(0xE76EC0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xE76ED0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ISCONTAINREWARDS_OFFSET UNITYSDK_OFFSET(0xE76F80)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ISCONTAINSTORYSTAGE_OFFSET UNITYSDK_OFFSET(0xE770B0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ISCONTAINSCENECHANGE_OFFSET UNITYSDK_OFFSET(0xE771E0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ISCONTAINEVIDENCE_OFFSET UNITYSDK_OFFSET(0xE737A0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ISCONTAINMASTERY_OFFSET UNITYSDK_OFFSET(0xE77310)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE77320)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE773C0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_SETMASTERY_OFFSET UNITYSDK_OFFSET(0xE777A0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_HASCONDITION_OFFSET UNITYSDK_OFFSET(0xE77810)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_HASCONDITION_OFFSET UNITYSDK_OFFSET(0xE778B0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE77960)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_CREATECONDITION_OFFSET UNITYSDK_OFFSET(0xE77690)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_CREATEANDORCONDITION_OFFSET UNITYSDK_OFFSET(0xE77C40)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_CREATEORANDCONDITION_OFFSET UNITYSDK_OFFSET(0xE77FD0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_CREATEMULTICONDITION_OFFSET UNITYSDK_OFFSET(0xE78360)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GETINTERACTIONIDSBYTYPE_OFFSET UNITYSDK_OFFSET(0xE787A0)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO__CREATECONDITION_G__CREATECONDITIONDIC|48_0_OFFSET UNITYSDK_OFFSET(0xE779E0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldInteractionInfo_TypeDefinitionIndex = 10574;

	class FieldInteractionInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _SeasonId_k__BackingField; // 0x18
		::System::Int64 _DateId_k__BackingField; // 0x20
		::System::String* _KeywordLocalizeKey_k__BackingField; // 0x28
		::System::Boolean _ShowEmoji_k__BackingField; // 0x30
		::System::Boolean _IsOnceOnly_k__BackingField; // 0x31
		::Il2CppArray<::System::Object*>* _InteractionDescs_k__BackingField; // 0x38
		::MXField::Shared::Condition::ICondition* _Condition_k__BackingField; // 0x40
		Il2CppObject* _ConditionIds_k__BackingField; // 0x48
		Il2CppObject* mastery; // 0x50

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_DateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_DATEID_OFFSET))(nullptr);
		}

		::System::String* get_KeywordLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_KEYWORDLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowEmoji()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_SHOWEMOJI_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOnceOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ISONCEONLY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_InteractionDescs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_INTERACTIONDESCS_OFFSET))(nullptr);
		}

		::MXField::Shared::Condition::ICondition* get_Condition()
		{
			return ((::MXField::Shared::Condition::ICondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_CONDITION_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConditionIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_CONDITIONIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Mastery()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_MASTERY_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MXField::Shared::Condition::IConditionChecker* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_ISSATISFIED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsContainRewards()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ISCONTAINREWARDS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsContainStoryStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ISCONTAINSTORYSTAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsContainSceneChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ISCONTAINSCENECHANGE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsContainEvidence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ISCONTAINEVIDENCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsContainMastery()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_ISCONTAINMASTERY_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::FieldInteractionExcel* arg, ::MXField::Shared::Data::FieldMasteryInfo* arg2)
		{
			((::System::Void(*)(::FlatData::FieldInteractionExcel*, ::MXField::Shared::Data::FieldMasteryInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetMastery(::MXField::Shared::Data::FieldMasteryInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldMasteryInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_SETMASTERY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_HASCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCondition(::FlatData::FieldConditionType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_HASCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_TOSTRING_OFFSET))(nullptr);
		}

		::MXField::Shared::Condition::ICondition* CreateCondition(::FlatData::FieldInteractionExcel* arg)
		{
			return ((::MXField::Shared::Condition::ICondition*(*)(::FlatData::FieldInteractionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_CREATECONDITION_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Condition::ICondition* CreateAndOrCondition(Il2CppObject* arg)
		{
			return ((::MXField::Shared::Condition::ICondition*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_CREATEANDORCONDITION_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Condition::ICondition* CreateOrAndCondition(Il2CppObject* arg)
		{
			return ((::MXField::Shared::Condition::ICondition*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_CREATEORANDCONDITION_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Condition::ICondition* CreateMultiCondition(::FlatData::FieldInteractionExcel* arg)
		{
			return ((::MXField::Shared::Condition::ICondition*(*)(::FlatData::FieldInteractionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_CREATEMULTICONDITION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetInteractionIdsByType(::FlatData::FieldInteractionType* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::FieldInteractionType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO_GETINTERACTIONIDSBYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void _CreateCondition_g__CreateConditionDic|48_0(Il2CppObject&* arg, <>c__DisplayClass48_0&* arg2)
		{
			((::System::Void(*)(Il2CppObject&*, <>c__DisplayClass48_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONINFO__CREATECONDITION_G__CREATECONDITIONDIC|48_0_OFFSET))(arg, arg2, nullptr);
		}

	};
}

