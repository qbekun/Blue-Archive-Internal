#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class SubPartDummySetting; }

#define MX_LOGIC_DATA_SUBPARTDUMMYSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E4ED0)
#define MX_LOGIC_DATA_SUBPARTDUMMYSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E4EE0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SubPartDummySetting_TypeDefinitionIndex = 13447;

	class SubPartDummySetting : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* MainCharacterId; // 0x10
		::System::String* PartName; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUBPARTDUMMYSETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::SubPartDummySetting* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SubPartDummySetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUBPARTDUMMYSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

