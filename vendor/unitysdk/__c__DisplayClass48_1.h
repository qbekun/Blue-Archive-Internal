#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }

#define <>C__DISPLAYCLASS48_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFBA00)
#define <>C__DISPLAYCLASS48_1__.CTOR_B__6_OFFSET UNITYSDK_OFFSET(0xFFBA10)
#define <>C__DISPLAYCLASS48_1__.CTOR_B__7_OFFSET UNITYSDK_OFFSET(0xFFBA30)

	inline static constexpr unsigned int <>c__DisplayClass48_1_TypeDefinitionIndex = 12588;

	class <>c__DisplayClass48_1 : public Il2CppObject
	{
	public:
		::System::Int64 leaderServerId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS48_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _.ctor_b__6(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS48_1__.CTOR_B__6_OFFSET))(arg, nullptr);
		}

		::System::Boolean _.ctor_b__7(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS48_1__.CTOR_B__7_OFFSET))(arg, nullptr);
		}

	};

