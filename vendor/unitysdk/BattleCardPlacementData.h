#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class CCGCard; }
namespace MX::MinigameCCG { class CCGEntityLocation; }

#define BATTLECARDPLACEMENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4B7B0)

	inline static constexpr unsigned int BattleCardPlacementData_TypeDefinitionIndex = 451;

	class BattleCardPlacementData : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGCard* Entity; // 0x10
		::MX::MinigameCCG::CCGEntityLocation* Location; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGCard* arg, ::MX::MinigameCCG::CCGEntityLocation* arg2)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::MX::MinigameCCG::CCGEntityLocation*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLECARDPLACEMENTDATA_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

