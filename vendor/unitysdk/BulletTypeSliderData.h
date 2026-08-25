#pragma once
#include "unitysdk.h"

namespace FlatData { class BulletType; }
class ICharacter;
namespace MX::Logic::Battles { class BattleBlackboard; }
namespace MX::Logic::Battles { class BlackboardKey; }

#define BULLETTYPESLIDERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F5EB0)

	inline static constexpr unsigned int BulletTypeSliderData_TypeDefinitionIndex = 6435;

	class BulletTypeSliderData : public Il2CppObject
	{
	public:
		::FlatData::BulletType* BulletType; // 0x10
		ICharacter* WatchTarget; // 0x18
		::MX::Logic::Battles::BattleBlackboard* Board; // 0x20
		::MX::Logic::Battles::BlackboardKey* Key; // 0x28
		::System::Int64 MaxValue; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BULLETTYPESLIDERDATA_.CTOR_OFFSET))(nullptr);
		}

	};

