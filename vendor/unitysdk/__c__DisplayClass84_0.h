#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::Data::Excel { class MiniGameShootingGeasExcel; }
namespace MX::MinigameShooting { class LogicEffect; }

#define <>C__DISPLAYCLASS84_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1458EB0)
#define <>C__DISPLAYCLASS84_0__ADDGEAS_B__0_OFFSET UNITYSDK_OFFSET(0x1458EC0)

	inline static constexpr unsigned int <>c__DisplayClass84_0_TypeDefinitionIndex = 15028;

	class <>c__DisplayClass84_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* __4__this; // 0x10
		::System::Int64 id; // 0x18
		::MX::Data::Excel::MiniGameShootingGeasExcel* excel; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS84_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _AddGeas_b__0(::MX::MinigameShooting::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS84_0__ADDGEAS_B__0_OFFSET))(arg, nullptr);
		}

	};

