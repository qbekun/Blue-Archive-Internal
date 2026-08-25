#pragma once
#include "unitysdk.h"

namespace MX::Conquest { class ConquestTile; }
class <>c__DisplayClass4_0;
namespace MX::GameLogic::DBModel { class ConquestTileDB; }

#define <>C__DISPLAYCLASS4_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x142D6C0)
#define <>C__DISPLAYCLASS4_1__CHECKCONDITION_B__1_OFFSET UNITYSDK_OFFSET(0x142D7D0)

	inline static constexpr unsigned int <>c__DisplayClass4_1_TypeDefinitionIndex = 14868;

	class <>c__DisplayClass4_1 : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTile* tile; // 0x10
		<>c__DisplayClass4_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS4_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CheckCondition_b__1(::MX::GameLogic::DBModel::ConquestTileDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS4_1__CHECKCONDITION_B__1_OFFSET))(arg, nullptr);
		}

	};

