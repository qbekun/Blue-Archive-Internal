#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }

#define <>C__DISPLAYCLASS60_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS60_1__COAMMOHITCHECK_B__4_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass60_1_TypeDefinitionIndex = 13277;

	class <>c__DisplayClass60_1 : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::LogicEffectHitEventArgs* e; // 0x0
		::System::Int32 frame; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CoAmmoHitCheck_b__4(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_1__COAMMOHITCHECK_B__4_OFFSET))(arg, nullptr);
		}

	};

