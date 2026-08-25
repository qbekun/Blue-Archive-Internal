#pragma once
#include "unitysdk.h"

#define UIDICERACEREWARDSCROLLCONTROLLER_SET_DICERECERECEIVEREWARDLAPCOUNT_OFFSET UNITYSDK_OFFSET(0x23D7940)
#define UIDICERACEREWARDSCROLLCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D7950)
#define UIDICERACEREWARDSCROLLCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x23D7990)
#define UIDICERACEREWARDSCROLLCONTROLLER_GET_DICERECERECEIVEREWARDLAPCOUNT_OFFSET UNITYSDK_OFFSET(0x23D7B90)

	inline static constexpr unsigned int UIDiceRaceRewardScrollController_TypeDefinitionIndex = 5348;

	class UIDiceRaceRewardScrollController : public ::System::Xml::DocumentXPathNodeIterator_ElemChildren_AndSelf_NoLocalName
	{
	public:
		::System::Int64 diceReceReceiveRewardLapCount; // 0x90

		::System::Void set_DiceReceReceiveRewardLapCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDICERACEREWARDSCROLLCONTROLLER_SET_DICERECERECEIVEREWARDLAPCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDICERACEREWARDSCROLLCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDICERACEREWARDSCROLLCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Int64 get_DiceReceReceiveRewardLapCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDICERACEREWARDSCROLLCONTROLLER_GET_DICERECERECEIVEREWARDLAPCOUNT_OFFSET))(nullptr);
		}

	};

