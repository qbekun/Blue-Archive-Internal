#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class MGSManager; }
namespace MX::MinigameShooting { class LogicEffect; }

#define <>C__DISPLAYCLASS95_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1478AB0)
#define <>C__DISPLAYCLASS95_0__MOVETOSECTION_B__0_OFFSET UNITYSDK_OFFSET(0x147C220)
#define <>C__DISPLAYCLASS95_0__MOVETOSECTION_B__1_OFFSET UNITYSDK_OFFSET(0x147C270)
#define <>C__DISPLAYCLASS95_0__MOVETOSECTION_B__2_OFFSET UNITYSDK_OFFSET(0x147C3A0)
#define <>C__DISPLAYCLASS95_0__MOVETOSECTION_B__3_OFFSET UNITYSDK_OFFSET(0x147C4A0)

	inline static constexpr unsigned int <>c__DisplayClass95_0_TypeDefinitionIndex = 15161;

	class <>c__DisplayClass95_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::MGSManager* __4__this; // 0x10
		::System::Int32 index; // 0x18
		::System::Action* __9__3; // 0x20
		::System::Action* __9__2; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS95_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _MoveToSection_b__0(::MX::MinigameShooting::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS95_0__MOVETOSECTION_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _MoveToSection_b__1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS95_0__MOVETOSECTION_B__1_OFFSET))(nullptr);
		}

		::System::Void _MoveToSection_b__2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS95_0__MOVETOSECTION_B__2_OFFSET))(nullptr);
		}

		::System::Void _MoveToSection_b__3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS95_0__MOVETOSECTION_B__3_OFFSET))(nullptr);
		}

	};

