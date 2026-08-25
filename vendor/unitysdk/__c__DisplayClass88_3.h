#pragma once
#include "unitysdk.h"

namespace MX::Visual::Battles::SkillRange { class SkillGuideProcess; }
namespace UnityEngine { class GameObject; }

#define <>C__DISPLAYCLASS88_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F7F0)
#define <>C__DISPLAYCLASS88_3__INITIALIZESELECTABLEEX_B__1_OFFSET UNITYSDK_OFFSET(0x1D9F800)

	inline static constexpr unsigned int <>c__DisplayClass88_3_TypeDefinitionIndex = 20389;

	class <>c__DisplayClass88_3 : public Il2CppObject
	{
	public:
		AsyncHandler* handler; // 0x10
		::MX::Visual::Battles::SkillRange::SkillGuideProcess* process; // 0x18
		<>c__DisplayClass88_2* CS$__8__locals3; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS88_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _InitializeSelectableEx_b__1(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS88_3__INITIALIZESELECTABLEEX_B__1_OFFSET))(arg, nullptr);
		}

	};

