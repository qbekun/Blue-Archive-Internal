#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::Battles { class ProjectileSpawnedEventArgs; }
namespace MX::Logic::Battles { class NormalAttackSpawnedEventArgs; }

#define <>C__DISPLAYCLASS60_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS60_0__COAMMOHITCHECK_B__0_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS60_0__COAMMOHITCHECK_B__1_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS60_0__COAMMOHITCHECK_B__2_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS60_0__COAMMOHITCHECK_B__3_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass60_0_TypeDefinitionIndex = 13276;

	class <>c__DisplayClass60_0 : public Il2CppObject
	{
	public:
		Il2CppObject* __4__this; // 0x0
		Il2CppObject* frameAndHitTargetList; // 0x0
		::System::Int64 count; // 0x0
		Il2CppObject* startHandler; // 0x0
		Il2CppObject* startNormalHandler; // 0x0
		::System::Boolean isLogicEffectHitAdded; // 0x0
		Il2CppObject* handler; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CoAmmoHitCheck_b__0(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_0__COAMMOHITCHECK_B__0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _CoAmmoHitCheck_b__1(::System::Object* arg, ::MX::Logic::Battles::ProjectileSpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ProjectileSpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_0__COAMMOHITCHECK_B__1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _CoAmmoHitCheck_b__2(::System::Object* arg, ::MX::Logic::Battles::NormalAttackSpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::NormalAttackSpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_0__COAMMOHITCHECK_B__2_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _CoAmmoHitCheck_b__3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_0__COAMMOHITCHECK_B__3_OFFSET))(nullptr);
		}

	};

