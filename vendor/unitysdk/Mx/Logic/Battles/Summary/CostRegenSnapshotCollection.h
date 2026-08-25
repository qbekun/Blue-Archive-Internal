#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class SkillCostRegenSnapshot; }

#define MX_LOGIC_BATTLES_SUMMARY_COSTREGENSNAPSHOTCOLLECTION_WRITEIFCHANGED_OFFSET UNITYSDK_OFFSET(0x13B15E0)
#define MX_LOGIC_BATTLES_SUMMARY_COSTREGENSNAPSHOTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B1670)
#define MX_LOGIC_BATTLES_SUMMARY_COSTREGENSNAPSHOTCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x13B16B0)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int CostRegenSnapshotCollection_TypeDefinitionIndex = 14482;

	class CostRegenSnapshotCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZOutputStream
	{
	public:
		::MX::Logic::Battles::Summary::SkillCostRegenSnapshot* _lastSnapshot; // 0x30

		::System::Void WriteIfChanged(::System::Int64 arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_COSTREGENSNAPSHOTCOLLECTION_WRITEIFCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_COSTREGENSNAPSHOTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 GetKeyForItem(::MX::Logic::Battles::Summary::SkillCostRegenSnapshot* arg)
		{
			return ((::System::Int64(*)(::MX::Logic::Battles::Summary::SkillCostRegenSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_COSTREGENSNAPSHOTCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

	};
}

