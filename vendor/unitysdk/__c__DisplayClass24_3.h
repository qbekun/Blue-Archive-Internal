#pragma once
#include "unitysdk.h"

namespace MX::Conquest { class ConquestTile; }
namespace MX::GameLogic::DBModel { class ConquestEventObjectDB; }

#define <>C__DISPLAYCLASS24_3_.CTOR_OFFSET UNITYSDK_OFFSET(0xF966C0)
#define <>C__DISPLAYCLASS24_3__CREATECONQUESTSTEPSUMMARY_B__10_OFFSET UNITYSDK_OFFSET(0xF966D0)

	inline static constexpr unsigned int <>c__DisplayClass24_3_TypeDefinitionIndex = 12293;

	class <>c__DisplayClass24_3 : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTile* tile; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CreateConquestStepSummary_b__10(::MX::GameLogic::DBModel::ConquestEventObjectDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestEventObjectDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_3__CREATECONQUESTSTEPSUMMARY_B__10_OFFSET))(arg, nullptr);
		}

	};

