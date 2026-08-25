#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class LogicEffect; }

#define <>C__DISPLAYCLASS29_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x14543B0)
#define <>C__DISPLAYCLASS29_0__.CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1454890)

	inline static constexpr unsigned int <>c__DisplayClass29_0_TypeDefinitionIndex = 15015;

	class <>c__DisplayClass29_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* character; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS29_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__0(::MX::MinigameShooting::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS29_0__.CTOR_B__0_OFFSET))(arg, nullptr);
		}

	};

