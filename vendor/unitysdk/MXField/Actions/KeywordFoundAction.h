#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_KEYWORDFOUNDACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEF290)
#define MXFIELD_ACTIONS_KEYWORDFOUNDACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEEF2C0)
#define MXFIELD_ACTIONS_KEYWORDFOUNDACTION_GET_KEYWORDID_OFFSET UNITYSDK_OFFSET(0xEEF350)

namespace MXField::Actions
{
	inline static constexpr unsigned int KeywordFoundAction_TypeDefinitionIndex = 11078;

	class KeywordFoundAction : public Il2CppObject
	{
	public:
		::System::Int64 _KeywordId_k__BackingField; // 0x40

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_KEYWORDFOUNDACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_KEYWORDFOUNDACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Int64 get_KeywordId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_KEYWORDFOUNDACTION_GET_KEYWORDID_OFFSET))(nullptr);
		}

	};
}

