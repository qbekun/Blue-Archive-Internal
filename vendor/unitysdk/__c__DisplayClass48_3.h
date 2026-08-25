#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }

#define <>C__DISPLAYCLASS48_3_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFBAA0)
#define <>C__DISPLAYCLASS48_3__.CTOR_B__2_OFFSET UNITYSDK_OFFSET(0xFFBAB0)
#define <>C__DISPLAYCLASS48_3__.CTOR_B__3_OFFSET UNITYSDK_OFFSET(0xFFBAD0)

	inline static constexpr unsigned int <>c__DisplayClass48_3_TypeDefinitionIndex = 12590;

	class <>c__DisplayClass48_3 : public Il2CppObject
	{
	public:
		::System::Int64 serverId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS48_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _.ctor_b__2(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS48_3__.CTOR_B__2_OFFSET))(arg, nullptr);
		}

		::System::Boolean _.ctor_b__3(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS48_3__.CTOR_B__3_OFFSET))(arg, nullptr);
		}

	};

