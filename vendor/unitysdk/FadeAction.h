#pragma once
#include "unitysdk.h"

namespace MXField::UI { class UIFieldHUD_Quest; }

#define FADEACTION_GET_SHOWEMPTYDISPLAY_OFFSET UNITYSDK_OFFSET(0xE96820)
#define FADEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE95460)
#define FADEACTION_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xE96830)
#define FADEACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xE96840)
#define FADEACTION_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xE968D0)
#define FADEACTION_SET_SHOWEMPTYDISPLAY_OFFSET UNITYSDK_OFFSET(0xE968E0)

	inline static constexpr unsigned int FadeAction_TypeDefinitionIndex = 10693;

	class FadeAction : public Il2CppObject
	{
	public:
		::MXField::UI::UIFieldHUD_Quest* _Owner_k__BackingField; // 0x40
		::System::Boolean _ShowEmptyDisplay_k__BackingField; // 0x48

		::System::Boolean get_ShowEmptyDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FADEACTION_GET_SHOWEMPTYDISPLAY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXField::UI::UIFieldHUD_Quest* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MXField::UI::UIFieldHUD_Quest*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FADEACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MXField::UI::UIFieldHUD_Quest* get_Owner()
		{
			return ((::MXField::UI::UIFieldHUD_Quest*(*)(::PVOID))((::PBYTE)hIl2Cpp + FADEACTION_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FADEACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Void set_Owner(::MXField::UI::UIFieldHUD_Quest* arg)
		{
			((::System::Void(*)(::MXField::UI::UIFieldHUD_Quest*, ::PVOID))((::PBYTE)hIl2Cpp + FADEACTION_SET_OWNER_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShowEmptyDisplay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FADEACTION_SET_SHOWEMPTYDISPLAY_OFFSET))(arg, nullptr);
		}

	};

