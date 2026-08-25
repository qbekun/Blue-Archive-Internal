#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestEventObjectDB; }
namespace MX::Conquest { class ConquestTile; }

#define <>C__DISPLAYCLASS23_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xF94F40)
#define <>C__DISPLAYCLASS23_1__GETCALCULATEREWARDS_B__4_OFFSET UNITYSDK_OFFSET(0xF962E0)

	inline static constexpr unsigned int <>c__DisplayClass23_1_TypeDefinitionIndex = 12289;

	class <>c__DisplayClass23_1 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ConquestEventObjectDB* erosionDB; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS23_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetCalculateRewards_b__4(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS23_1__GETCALCULATEREWARDS_B__4_OFFSET))(arg, nullptr);
		}

	};

