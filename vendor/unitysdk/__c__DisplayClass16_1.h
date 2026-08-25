#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }

#define <>C__DISPLAYCLASS16_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xFA4250)
#define <>C__DISPLAYCLASS16_1__VALIDCOMBATSTYLEINDEX_B__1_OFFSET UNITYSDK_OFFSET(0xFA4260)

	inline static constexpr unsigned int <>c__DisplayClass16_1_TypeDefinitionIndex = 12323;

	class <>c__DisplayClass16_1 : public Il2CppObject
	{
	public:
		::System::Int64 serverId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS16_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ValidCombatStyleIndex_b__1(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS16_1__VALIDCOMBATSTYLEINDEX_B__1_OFFSET))(arg, nullptr);
		}

	};

