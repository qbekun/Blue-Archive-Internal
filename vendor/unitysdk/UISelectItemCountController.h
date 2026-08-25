#pragma once
#include "unitysdk.h"

class MXButton;
class UIBase;
class ItemObject;

#define UISELECTITEMCOUNTCONTROLLER_ONCLICKEXCHANGE_OFFSET UNITYSDK_OFFSET(0x2732650)
#define UISELECTITEMCOUNTCONTROLLER__ONCLICKEXCHANGE_B__5_0_OFFSET UNITYSDK_OFFSET(0x2732760)
#define UISELECTITEMCOUNTCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2732830)
#define UISELECTITEMCOUNTCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2732840)
#define UISELECTITEMCOUNTCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x27329A0)
#define UISELECTITEMCOUNTCONTROLLER__ONCLICKEXCHANGE_G__CLOSEUI|5_1_OFFSET UNITYSDK_OFFSET(0x2732770)

	inline static constexpr unsigned int UISelectItemCountController_TypeDefinitionIndex = 7197;

	class UISelectItemCountController : public Il2CppObject
	{
	public:
		MXButton* UseButton; // 0x78
		UIBase* uiParent; // 0x80
		::System::Action* onClickExchange; // 0x88

		::System::Void OnClickExchange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISELECTITEMCOUNTCONTROLLER_ONCLICKEXCHANGE_OFFSET))(nullptr);
		}

		::System::Void _OnClickExchange_b__5_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISELECTITEMCOUNTCONTROLLER__ONCLICKEXCHANGE_B__5_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISELECTITEMCOUNTCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISELECTITEMCOUNTCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Init(ItemObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(ItemObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTITEMCOUNTCONTROLLER_INIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickExchange_g__CloseUI|5_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISELECTITEMCOUNTCONTROLLER__ONCLICKEXCHANGE_G__CLOSEUI|5_1_OFFSET))(nullptr);
		}

	};

