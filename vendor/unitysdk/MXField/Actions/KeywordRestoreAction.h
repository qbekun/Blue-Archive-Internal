#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_KEYWORDRESTOREACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEEF770)
#define MXFIELD_ACTIONS_KEYWORDRESTOREACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEF9C0)

namespace MXField::Actions
{
	inline static constexpr unsigned int KeywordRestoreAction_TypeDefinitionIndex = 11079;

	class KeywordRestoreAction : public Il2CppObject
	{
	public:
		Il2CppObject* KeywordIds; // 0x30

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_KEYWORDRESTOREACTION_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_KEYWORDRESTOREACTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

