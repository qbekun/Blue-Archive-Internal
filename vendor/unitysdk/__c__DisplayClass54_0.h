#pragma once
#include "unitysdk.h"

namespace MXField::Shared::Data { class FieldQuestInfo; }
namespace MXField::Shared::Model { class FieldQuestDB; }

#define <>C__DISPLAYCLASS54_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xE738F0)
#define <>C__DISPLAYCLASS54_0__CREATEDAILYQUESTS_B__1_OFFSET UNITYSDK_OFFSET(0xE73900)

	inline static constexpr unsigned int <>c__DisplayClass54_0_TypeDefinitionIndex = 10550;

	class <>c__DisplayClass54_0 : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldQuestInfo* questInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS54_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CreateDailyQuests_b__1(::MXField::Shared::Model::FieldQuestDB* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Model::FieldQuestDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS54_0__CREATEDAILYQUESTS_B__1_OFFSET))(arg, nullptr);
		}

	};

