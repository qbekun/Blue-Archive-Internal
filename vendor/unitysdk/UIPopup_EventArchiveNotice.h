#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class UILabel;
class GuideMissionArchiveItem;

#define UIPOPUP_EVENTARCHIVENOTICE_START_OFFSET UNITYSDK_OFFSET(0x2474130)
#define UIPOPUP_EVENTARCHIVENOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2474250)
#define UIPOPUP_EVENTARCHIVENOTICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x246C020)

	inline static constexpr unsigned int UIPopup_EventArchiveNotice_TypeDefinitionIndex = 5651;

	class UIPopup_EventArchiveNotice : public Il2CppObject
	{
	public:
		MXButton* confirmButton; // 0xD8
		UITexture* texture; // 0xE0
		UILabel* descLabel; // 0xE8

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EVENTARCHIVENOTICE_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EVENTARCHIVENOTICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(GuideMissionArchiveItem* arg)
		{
			((::System::Void(*)(GuideMissionArchiveItem*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EVENTARCHIVENOTICE_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

