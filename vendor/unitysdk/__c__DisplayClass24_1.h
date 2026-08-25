#pragma once
#include "unitysdk.h"

namespace MX::Conquest { class ConquestTile; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }

#define <>C__DISPLAYCLASS24_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xF96400)
#define <>C__DISPLAYCLASS24_1__CREATECONQUESTSTEPSUMMARY_B__3_OFFSET UNITYSDK_OFFSET(0xF96590)

	inline static constexpr unsigned int <>c__DisplayClass24_1_TypeDefinitionIndex = 12291;

	class <>c__DisplayClass24_1 : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTile* elem; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CreateConquestStepSummary_b__3(::MX::GameLogic::DBModel::ConquestTileDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_1__CREATECONQUESTSTEPSUMMARY_B__3_OFFSET))(arg, nullptr);
		}

	};

