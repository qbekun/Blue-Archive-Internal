#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Battles::Summary { class StatSnapshot; }

#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOTCOLLECTION_WRITEATINIT_OFFSET UNITYSDK_OFFSET(0x13AD330)
#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOTCOLLECTION_SHOULDWRITESTATTYPE_OFFSET UNITYSDK_OFFSET(0x13AFDB0)
#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOTCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x13B1910)
#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOTCOLLECTION_WRITEATFINALIZE_OFFSET UNITYSDK_OFFSET(0x13AD8A0)
#define MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13ABC20)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int StatSnapshotCollection_TypeDefinitionIndex = 14485;

	class StatSnapshotCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream
	{
	public:
		::System::Void WriteAtInit(::FlatData::StatType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::StatType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOTCOLLECTION_WRITEATINIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ShouldWriteStatType(::FlatData::StatType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOTCOLLECTION_SHOULDWRITESTATTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::StatType* GetKeyForItem(::MX::Logic::Battles::Summary::StatSnapshot* arg)
		{
			return ((::FlatData::StatType*(*)(::MX::Logic::Battles::Summary::StatSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOTCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

		::System::Void WriteAtFinalize(::FlatData::StatType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::StatType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOTCOLLECTION_WRITEATFINALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_STATSNAPSHOTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

