#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class SpawnPoint; }
namespace MX::Data::Excel { class MiniGameShootingCharacterExcel; }
namespace MX::MinigameShooting { class Character; }

#define <>C__DISPLAYCLASS1_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x14749B0)
#define <>C__DISPLAYCLASS1_0__SPAWN_B__0_OFFSET UNITYSDK_OFFSET(0x1474A70)

	inline static constexpr unsigned int <>c__DisplayClass1_0_TypeDefinitionIndex = 15140;

	class <>c__DisplayClass1_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::SpawnPoint* __4__this; // 0x10
		::MX::Data::Excel::MiniGameShootingCharacterExcel* excel; // 0x18
		::System::Int32 section; // 0x28
		::System::String* key; // 0x30
		::System::Boolean isPlayer; // 0x38
		Il2CppObject* onLoaded; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS1_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Spawn_b__0(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS1_0__SPAWN_B__0_OFFSET))(arg, nullptr);
		}

	};

