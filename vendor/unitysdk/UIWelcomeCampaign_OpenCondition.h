#pragma once
#include "unitysdk.h"

class UIWidget;
class UILabel;

#define UIWELCOMECAMPAIGN_OPENCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD7740)
#define UIWELCOMECAMPAIGN_OPENCONDITION_REFRESH_OFFSET UNITYSDK_OFFSET(0xBD4B50)

	inline static constexpr unsigned int UIWelcomeCampaign_OpenCondition_TypeDefinitionIndex = 8687;

	class UIWelcomeCampaign_OpenCondition : public Il2CppObject
	{
	public:
		UIWidget* lockedImage; // 0x18
		UIWidget* openedImage; // 0x20
		UILabel* openConditionLabel; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_OPENCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_OPENCONDITION_REFRESH_OFFSET))(arg, arg2, nullptr);
		}

	};

