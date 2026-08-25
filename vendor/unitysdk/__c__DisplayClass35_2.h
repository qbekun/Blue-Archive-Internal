#pragma once
#include "unitysdk.h"

namespace MXField::Quest { class FieldQuestStatus; }

#define <>C__DISPLAYCLASS35_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC00A0)
#define <>C__DISPLAYCLASS35_2__BUILDQUESTHISTORYBYSKIP_B__2_OFFSET UNITYSDK_OFFSET(0xEC08C0)

	inline static constexpr unsigned int <>c__DisplayClass35_2_TypeDefinitionIndex = 10835;

	class <>c__DisplayClass35_2 : public Il2CppObject
	{
	public:
		::MXField::Quest::FieldQuestStatus* inProgressQuest; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS35_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _BuildQuestHistoryBySkip_b__2(::MXField::Quest::FieldQuestStatus* arg)
		{
			return ((::System::Boolean(*)(::MXField::Quest::FieldQuestStatus*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS35_2__BUILDQUESTHISTORYBYSKIP_B__2_OFFSET))(arg, nullptr);
		}

	};

