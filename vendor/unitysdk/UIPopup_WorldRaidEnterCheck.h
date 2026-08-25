#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace MX::Data { class WorldRaidStageInfo; }

#define UIPOPUP_WORLDRAIDENTERCHECK_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0xBEB390)
#define UIPOPUP_WORLDRAIDENTERCHECK_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBEB420)
#define UIPOPUP_WORLDRAIDENTERCHECK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBE9C10)
#define UIPOPUP_WORLDRAIDENTERCHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0xBEB510)
#define UIPOPUP_WORLDRAIDENTERCHECK_AWAKE_OFFSET UNITYSDK_OFFSET(0xBEB520)

	inline static constexpr unsigned int UIPopup_WorldRaidEnterCheck_TypeDefinitionIndex = 8728;

	class UIPopup_WorldRaidEnterCheck : public Il2CppObject
	{
	public:
		UILabel* DifficultyLabel; // 0xD8
		UILabel* PriceLabel; // 0xE0
		MXButton* OkButton; // 0xE8
		UILabel* OkButtonLabel; // 0xF0
		::System::Action* okAction; // 0xF8

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTERCHECK_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTERCHECK_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Data::WorldRaidStageInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::WorldRaidStageInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTERCHECK_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTERCHECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTERCHECK_AWAKE_OFFSET))(nullptr);
		}

	};

