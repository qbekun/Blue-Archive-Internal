#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }

#define <>C__DISPLAYCLASS48_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFBA60)
#define <>C__DISPLAYCLASS48_2__.CTOR_B__1_OFFSET UNITYSDK_OFFSET(0xFFBA70)

	inline static constexpr unsigned int <>c__DisplayClass48_2_TypeDefinitionIndex = 12589;

	class <>c__DisplayClass48_2 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClanAssistUseInfo* assistUseInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS48_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _.ctor_b__1(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS48_2__.CTOR_B__1_OFFSET))(arg, nullptr);
		}

	};

