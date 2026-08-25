#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class BulletTypeChangeEffect; }

#define <>C__DISPLAYCLASS64_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1298270)
#define <>C__DISPLAYCLASS64_0__PROCESSBULLETTYPECHANGEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1298280)

	inline static constexpr unsigned int <>c__DisplayClass64_0_TypeDefinitionIndex = 14085;

	class <>c__DisplayClass64_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::LogicEffects::BulletTypeChangeEffect* effect; // 0x10
		Il2CppObject* __9__0; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS64_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessBulletTypeChangeEffect_b__0(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS64_0__PROCESSBULLETTYPECHANGEEFFECT_B__0_OFFSET))(arg, nullptr);
		}

	};

