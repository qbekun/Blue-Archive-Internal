#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_INTERACTIONREWARDACTION_GET_ISWAITING_OFFSET UNITYSDK_OFFSET(0xEEEE60)
#define MXFIELD_ACTIONS_INTERACTIONREWARDACTION_SET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xEEEE70)
#define MXFIELD_ACTIONS_INTERACTIONREWARDACTION_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xEEEE80)
#define MXFIELD_ACTIONS_INTERACTIONREWARDACTION_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xEEEE90)
#define MXFIELD_ACTIONS_INTERACTIONREWARDACTION_SET_ISWAITING_OFFSET UNITYSDK_OFFSET(0xEEEEA0)
#define MXFIELD_ACTIONS_INTERACTIONREWARDACTION_GET_DISPLAYSEQUENCE_OFFSET UNITYSDK_OFFSET(0xEEEEB0)
#define MXFIELD_ACTIONS_INTERACTIONREWARDACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEEEEC0)
#define MXFIELD_ACTIONS_INTERACTIONREWARDACTION_REQUESTPARCELFOUND_OFFSET UNITYSDK_OFFSET(0xEEEF50)
#define MXFIELD_ACTIONS_INTERACTIONREWARDACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEF040)
#define MXFIELD_ACTIONS_INTERACTIONREWARDACTION_GET_INTERACTIONID_OFFSET UNITYSDK_OFFSET(0xEEF070)
#define MXFIELD_ACTIONS_INTERACTIONREWARDACTION_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xEEF080)
#define MXFIELD_ACTIONS_INTERACTIONREWARDACTION_SET_DISPLAYSEQUENCE_OFFSET UNITYSDK_OFFSET(0xEEF090)

namespace MXField::Actions
{
	inline static constexpr unsigned int InteractionRewardAction_TypeDefinitionIndex = 11075;

	class InteractionRewardAction : public Il2CppObject
	{
	public:
		::System::Int64 _InteractionId_k__BackingField; // 0x40
		::System::Int64 _RewardId_k__BackingField; // 0x48
		::System::Boolean _IsWaiting_k__BackingField; // 0x50
		Il2CppObject* _ParcelInfos_k__BackingField; // 0x58
		Il2CppObject* _DisplaySequence_k__BackingField; // 0x60

		::System::Boolean get_IsWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONREWARDACTION_GET_ISWAITING_OFFSET))(nullptr);
		}

		::System::Void set_ParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONREWARDACTION_SET_PARCELINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONREWARDACTION_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONREWARDACTION_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Void set_IsWaiting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONREWARDACTION_SET_ISWAITING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DisplaySequence()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONREWARDACTION_GET_DISPLAYSEQUENCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONREWARDACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Void RequestParcelFound()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONREWARDACTION_REQUESTPARCELFOUND_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONREWARDACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_InteractionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONREWARDACTION_GET_INTERACTIONID_OFFSET))(nullptr);
		}

		::System::Void OnFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONREWARDACTION_ONFINISHED_OFFSET))(nullptr);
		}

		::System::Void set_DisplaySequence(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONREWARDACTION_SET_DISPLAYSEQUENCE_OFFSET))(arg, nullptr);
		}

	};
}

