#pragma once
#include "unitysdk.h"

class UILabel;
class UIScrollView;
namespace MX::Data { class RaidStageInfo; }

#define UIPOPUP_RAIDSTORY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27A12D0)
#define UIPOPUP_RAIDSTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x27A1420)
#define UIPOPUP_RAIDSTORY_CORESETSCROLL_OFFSET UNITYSDK_OFFSET(0x27A13B0)
#define UIPOPUP_RAIDSTORY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27A1450)

	inline static constexpr unsigned int UIPopup_RaidStory_TypeDefinitionIndex = 7474;

	class UIPopup_RaidStory : public Il2CppObject
	{
	public:
		UILabel* Label; // 0xD8
		UIScrollView* ScrollView; // 0xE0

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDSTORY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDSTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoResetScroll()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDSTORY_CORESETSCROLL_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::RaidStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::RaidStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDSTORY_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

