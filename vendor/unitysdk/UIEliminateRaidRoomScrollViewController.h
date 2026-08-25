#pragma once
#include "unitysdk.h"

#define UIELIMINATERAIDROOMSCROLLVIEWCONTROLLER_COWAITUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x23E4290)
#define UIELIMINATERAIDROOMSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x23E4320)
#define UIELIMINATERAIDROOMSCROLLVIEWCONTROLLER_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x23E2600)
#define UIELIMINATERAIDROOMSCROLLVIEWCONTROLLER_GET_NEEDPLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x23E24D0)

	inline static constexpr unsigned int UIEliminateRaidRoomScrollViewController_TypeDefinitionIndex = 5383;

	class UIEliminateRaidRoomScrollViewController : public ::System::Xml::XmlDocument
	{
	public:
		::System::Collections::IEnumerator* CoWaitUnlockAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWCONTROLLER_COWAITUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayUnlockAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWCONTROLLER_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedPlayUnlockAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMSCROLLVIEWCONTROLLER_GET_NEEDPLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

	};

