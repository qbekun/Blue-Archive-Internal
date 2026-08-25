#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntityType; }
namespace MX::Logic::Data { class BattleSetting; }
namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Logic::Data { class BattleTypes; }

#define MX_LOGIC_BATTLEENTITIES_BATTLEENTITYIDPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D1FF0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEENTITYIDPROVIDER_RESET_OFFSET UNITYSDK_OFFSET(0x11D2080)
#define MX_LOGIC_BATTLEENTITIES_BATTLEENTITYIDPROVIDER_NEXTID_OFFSET UNITYSDK_OFFSET(0x11D23D0)
#define MX_LOGIC_BATTLEENTITIES_BATTLEENTITYIDPROVIDER_PROVIDE_OFFSET UNITYSDK_OFFSET(0x11D2650)
#define MX_LOGIC_BATTLEENTITIES_BATTLEENTITYIDPROVIDER_PROVIDE_OFFSET UNITYSDK_OFFSET(0x11D2700)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int BattleEntityIdProvider_TypeDefinitionIndex = 13371;

	class BattleEntityIdProvider : public Il2CppObject
	{
	public:
		Il2CppObject* lastInstanceIds; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEENTITYIDPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEENTITYIDPROVIDER_RESET_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* NextId(::MX::Logic::BattleEntities::BattleEntityType* arg)
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::MX::Logic::BattleEntities::BattleEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEENTITYIDPROVIDER_NEXTID_OFFSET))(arg, nullptr);
		}

		::System::Void Provide(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEENTITYIDPROVIDER_PROVIDE_OFFSET))(arg, nullptr);
		}

		::System::Void Provide(::MX::Logic::Data::TeamSetting* arg, ::MX::Logic::Data::BattleTypes* arg2)
		{
			((::System::Void(*)(::MX::Logic::Data::TeamSetting*, ::MX::Logic::Data::BattleTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BATTLEENTITYIDPROVIDER_PROVIDE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

