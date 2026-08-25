#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_SHOWREWARDACTION_GET_DISPLAYSEQUENCE_OFFSET UNITYSDK_OFFSET(0xEF5190)
#define MXFIELD_ACTIONS_SHOWREWARDACTION_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xEF51A0)
#define MXFIELD_ACTIONS_SHOWREWARDACTION_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xEF51B0)
#define MXFIELD_ACTIONS_SHOWREWARDACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEE110)
#define MXFIELD_ACTIONS_SHOWREWARDACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF51C0)

namespace MXField::Actions
{
	inline static constexpr unsigned int ShowRewardAction_TypeDefinitionIndex = 11123;

	class ShowRewardAction : public Il2CppObject
	{
	public:
		Il2CppObject* _ParcelInfos_k__BackingField; // 0x40
		Il2CppObject* _DisplaySequence_k__BackingField; // 0x48

		Il2CppObject* get_DisplaySequence()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SHOWREWARDACTION_GET_DISPLAYSEQUENCE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SHOWREWARDACTION_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void OnFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SHOWREWARDACTION_ONFINISHED_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SHOWREWARDACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SHOWREWARDACTION_COEXECUTE_OFFSET))(nullptr);
		}

	};
}

