#pragma once
#include "unitysdk.h"

class CampaignTask;
class UIReturnParcels;

#define <>C__DISPLAYCLASS70_6_.CTOR_OFFSET UNITYSDK_OFFSET(0x23CDA60)
#define <>C__DISPLAYCLASS70_6__SHOWPOPUP_B__10_OFFSET UNITYSDK_OFFSET(0x23CDA70)

	inline static constexpr unsigned int <>c__DisplayClass70_6_TypeDefinitionIndex = 5294;

	class <>c__DisplayClass70_6 : public Il2CppObject
	{
	public:
		CampaignTask* campaignTask; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS70_6_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowPopup_b__10(UIReturnParcels* arg)
		{
			((::System::Void(*)(UIReturnParcels*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS70_6__SHOWPOPUP_B__10_OFFSET))(arg, nullptr);
		}

	};

