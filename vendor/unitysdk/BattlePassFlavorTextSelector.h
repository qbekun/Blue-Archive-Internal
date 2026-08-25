#pragma once
#include "unitysdk.h"

#define BATTLEPASSFLAVORTEXTSELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2243FF0)
#define BATTLEPASSFLAVORTEXTSELECTOR__REBUILDQUEUE_G__PREVENTSAMEGROUPONSHUFFLE|5_0_OFFSET UNITYSDK_OFFSET(0x22446C0)
#define BATTLEPASSFLAVORTEXTSELECTOR_REBUILDQUEUE_OFFSET UNITYSDK_OFFSET(0x2244390)
#define BATTLEPASSFLAVORTEXTSELECTOR_GETNEXT_OFFSET UNITYSDK_OFFSET(0x2243B90)

	inline static constexpr unsigned int BattlePassFlavorTextSelector_TypeDefinitionIndex = 4494;

	class BattlePassFlavorTextSelector : public Il2CppObject
	{
	public:
		Il2CppObject* orderedGroups; // 0x10
		Il2CppObject* entries; // 0x18
		Il2CppObject* lastGroupKey; // 0x20

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSFLAVORTEXTSELECTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void _RebuildQueue_g__PreventSameGroupOnShuffle|5_0(<>c__DisplayClass5_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass5_0&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSFLAVORTEXTSELECTOR__REBUILDQUEUE_G__PREVENTSAMEGROUPONSHUFFLE|5_0_OFFSET))(arg, nullptr);
		}

		::System::Void RebuildQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSFLAVORTEXTSELECTOR_REBUILDQUEUE_OFFSET))(nullptr);
		}

		::System::UInt32 GetNext()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSFLAVORTEXTSELECTOR_GETNEXT_OFFSET))(nullptr);
		}

	};

