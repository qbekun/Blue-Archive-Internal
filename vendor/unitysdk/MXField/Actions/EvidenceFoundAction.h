#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_EVIDENCEFOUNDACTION_GET_EVIDENCEID_OFFSET UNITYSDK_OFFSET(0xEEAE40)
#define MXFIELD_ACTIONS_EVIDENCEFOUNDACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEAE50)
#define MXFIELD_ACTIONS_EVIDENCEFOUNDACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEEAE80)

namespace MXField::Actions
{
	inline static constexpr unsigned int EvidenceFoundAction_TypeDefinitionIndex = 11047;

	class EvidenceFoundAction : public Il2CppObject
	{
	public:
		::System::Int64 _EvidenceId_k__BackingField; // 0x40

		::System::Int64 get_EvidenceId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_EVIDENCEFOUNDACTION_GET_EVIDENCEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_EVIDENCEFOUNDACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_EVIDENCEFOUNDACTION_COEXECUTE_OFFSET))(nullptr);
		}

	};
}

