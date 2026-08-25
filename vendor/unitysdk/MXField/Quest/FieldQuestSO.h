#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Quest { class FieldQuest; }

#define MXFIELD_QUEST_FIELDQUESTSO_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xEBB2F0)
#define MXFIELD_QUEST_FIELDQUESTSO_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xEBB300)
#define MXFIELD_QUEST_FIELDQUESTSO_.CTOR_OFFSET UNITYSDK_OFFSET(0xEBB310)

namespace MXField::Quest
{
	inline static constexpr unsigned int FieldQuestSO_TypeDefinitionIndex = 10823;

	class FieldQuestSO : public Il2CppObject
	{
	public:
		::MXField::Shared::Quest::FieldQuest* Quest; // 0x18
		Il2CppObject* ClearActions; // 0x20

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSO_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSO_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSO_.CTOR_OFFSET))(nullptr);
		}

	};
}

