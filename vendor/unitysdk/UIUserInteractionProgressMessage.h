#pragma once
#include "unitysdk.h"

class UserInteractionClip;

#define UIUSERINTERACTIONPROGRESSMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB85A70)
#define UIUSERINTERACTIONPROGRESSMESSAGE_GETPROGRESSRATIO_OFFSET UNITYSDK_OFFSET(0xB855C0)

	inline static constexpr unsigned int UIUserInteractionProgressMessage_TypeDefinitionIndex = 8538;

	class UIUserInteractionProgressMessage : public ::TriInspector::TitleAttribute
	{
	public:
		UserInteractionClip* Clip; // 0x18
		::System::Single InputProgress; // 0x20

		::System::Void .ctor(UserInteractionClip* arg, ::System::Single arg2)
		{
			((::System::Void(*)(UserInteractionClip*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONPROGRESSMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single GetProgressRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONPROGRESSMESSAGE_GETPROGRESSRATIO_OFFSET))(nullptr);
		}

	};

