#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class CardSummary; }

#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARYCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13AA530)
#define MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARYCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x13AA570)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int CardSummaryCollection_TypeDefinitionIndex = 14465;

	class CardSummaryCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::StaticTree
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARYCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetKeyForItem(::MX::Logic::Battles::Summary::CardSummary* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Summary::CardSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_CARDSUMMARYCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

	};
}

