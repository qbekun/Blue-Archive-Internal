#pragma once
#include "unitysdk.h"

namespace MX::Visual::Battles::SkillRange { class SkillGuideProcess; }
namespace UnityEngine { class GameObject; }

#define <>C__DISPLAYCLASS87_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F460)
#define <>C__DISPLAYCLASS87_1__CREATEADDITIONALGUIDES_B__0_OFFSET UNITYSDK_OFFSET(0x1D9F470)

	inline static constexpr unsigned int <>c__DisplayClass87_1_TypeDefinitionIndex = 20385;

	class <>c__DisplayClass87_1 : public Il2CppObject
	{
	public:
		AsyncHandler* handler; // 0x10
		::MX::Visual::Battles::SkillRange::SkillGuideProcess* process; // 0x18
		<>c__DisplayClass87_0* CS$__8__locals1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS87_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CreateAdditionalGuides_b__0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS87_1__CREATEADDITIONALGUIDES_B__0_OFFSET))(arg, nullptr);
		}

	};

