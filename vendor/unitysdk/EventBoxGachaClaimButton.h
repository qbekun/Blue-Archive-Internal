#pragma once
#include "unitysdk.h"

class ButtonActivator;
class UIEventBoxGacha;
class EventContentBoxGachaProgress;

#define EVENTBOXGACHACLAIMBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x247ADC0)
#define EVENTBOXGACHACLAIMBUTTON_GET_AVALIABLECOUNT_OFFSET UNITYSDK_OFFSET(0x247ADD0)
#define EVENTBOXGACHACLAIMBUTTON_SETDATA_OFFSET UNITYSDK_OFFSET(0x247ADE0)
#define EVENTBOXGACHACLAIMBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x247B440)
#define EVENTBOXGACHACLAIMBUTTON_ONCLICKCLAIM_OFFSET UNITYSDK_OFFSET(0x247B5A0)

	inline static constexpr unsigned int EventBoxGachaClaimButton_TypeDefinitionIndex = 5665;

	class EventBoxGachaClaimButton : public Il2CppObject
	{
	public:
		ButtonActivator* button; // 0x18
		::Il2CppArray<::System::Object*>* currencyImages; // 0x20
		::Il2CppArray<::System::Object*>* costLabels; // 0x28
		::Il2CppArray<::System::Object*>* textLabels; // 0x30
		::System::Int64 eventContentId; // 0x38
		::System::Int64 availableCount; // 0x40
		UIEventBoxGacha* boxGachaUI; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHACLAIMBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_AvaliableCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHACLAIMBUTTON_GET_AVALIABLECOUNT_OFFSET))(nullptr);
		}

		::System::Void SetData(EventContentBoxGachaProgress* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(EventContentBoxGachaProgress*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHACLAIMBUTTON_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHACLAIMBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickClaim()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHACLAIMBUTTON_ONCLICKCLAIM_OFFSET))(nullptr);
		}

	};

