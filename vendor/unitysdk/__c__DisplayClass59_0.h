#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class CharacterBulletCountChangedEventArgs; }

#define <>C__DISPLAYCLASS59_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS59_0__COAMMOCOUNTCHECK_B__0_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS59_0__COAMMOCOUNTCHECK_B__1_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass59_0_TypeDefinitionIndex = 13274;

	class <>c__DisplayClass59_0 : public Il2CppObject
	{
	public:
		::System::Int64 count; // 0x0
		Il2CppObject* __4__this; // 0x0
		Il2CppObject* handler; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS59_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CoAmmoCountCheck_b__0(::System::Object* arg, ::MX::Logic::Battles::CharacterBulletCountChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterBulletCountChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS59_0__COAMMOCOUNTCHECK_B__0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _CoAmmoCountCheck_b__1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS59_0__COAMMOCOUNTCHECK_B__1_OFFSET))(nullptr);
		}

	};

