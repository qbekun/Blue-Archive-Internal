#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class Section; }
namespace MX::MinigameShooting { class Character; }

#define <>C__DISPLAYCLASS38_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1474140)
#define <>C__DISPLAYCLASS38_0__SPAWNENEMY_B__1_OFFSET UNITYSDK_OFFSET(0x1474150)

	inline static constexpr unsigned int <>c__DisplayClass38_0_TypeDefinitionIndex = 15135;

	class <>c__DisplayClass38_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Section* __4__this; // 0x10
		::System::Int32 groupId; // 0x18
		::System::Int32 spawnCount; // 0x1C
		Il2CppObject* __9__1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS38_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SpawnEnemy_b__1(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS38_0__SPAWNENEMY_B__1_OFFSET))(arg, nullptr);
		}

	};

