#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles::EventSnapshot { class BattleEventSnapshot; }

#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_EVENTSNAPSHOTCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x13B32E0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_EVENTSNAPSHOTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B3350)

namespace MX::Logic::Battles::EventSnapshot
{
	inline static constexpr unsigned int EventSnapshotCollection_TypeDefinitionIndex = 14492;

	class EventSnapshotCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfTree
	{
	public:
		::System::Int32 GetKeyForItem(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_EVENTSNAPSHOTCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_EVENTSNAPSHOTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

