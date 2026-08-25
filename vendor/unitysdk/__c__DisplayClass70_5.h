#pragma once
#include "unitysdk.h"

class UIDefeat;
class UIReturnParcels;

#define <>C__DISPLAYCLASS70_5_.CTOR_OFFSET UNITYSDK_OFFSET(0x23CD750)
#define <>C__DISPLAYCLASS70_5__SHOWPOPUP_B__7_OFFSET UNITYSDK_OFFSET(0x23CD760)

	inline static constexpr unsigned int <>c__DisplayClass70_5_TypeDefinitionIndex = 5293;

	class <>c__DisplayClass70_5 : public Il2CppObject
	{
	public:
		::System::Boolean complete; // 0x10
		UIDefeat* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS70_5_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowPopup_b__7(UIReturnParcels* arg)
		{
			((::System::Void(*)(UIReturnParcels*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS70_5__SHOWPOPUP_B__7_OFFSET))(arg, nullptr);
		}

	};

