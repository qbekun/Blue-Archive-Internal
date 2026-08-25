#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UIEchelonInfo;

#define ECHELONINFOPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x24D7670)
#define ECHELONINFOPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D7820)
#define ECHELONINFOPOPUP_INITUI_OFFSET UNITYSDK_OFFSET(0x24D7830)
#define ECHELONINFOPOPUP_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x24D7840)
#define ECHELONINFOPOPUP_OPEN_OFFSET UNITYSDK_OFFSET(0x24D7870)

	inline static constexpr unsigned int EchelonInfoPopup_TypeDefinitionIndex = 5962;

	class EchelonInfoPopup : public Il2CppObject
	{
	public:
		MXButton* BackButton; // 0x18
		::Il2CppArray<::System::Object*>* MainInfo; // 0x20
		::Il2CppArray<::System::Object*>* supportInfo; // 0x28
		UILabel* CostRegen; // 0x30
		UILabel* SupportPower; // 0x38
		UIEchelonInfo* uiEchelonInfo; // 0x40

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONINFOPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONINFOPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitUI(UIEchelonInfo* arg)
		{
			((::System::Void(*)(UIEchelonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONINFOPOPUP_INITUI_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONINFOPOPUP_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONINFOPOPUP_OPEN_OFFSET))(nullptr);
		}

	};

