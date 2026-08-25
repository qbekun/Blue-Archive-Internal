#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define UIPOPUP_NOTICE_SELECTPICKUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA7A680)
#define UIPOPUP_NOTICE_SELECTPICKUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA79930)
#define UIPOPUP_NOTICE_SELECTPICKUP_ONBACK_OFFSET UNITYSDK_OFFSET(0xA7A6A0)
#define UIPOPUP_NOTICE_SELECTPICKUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xA7A6F0)

	inline static constexpr unsigned int UIPopup_Notice_SelectPickup_TypeDefinitionIndex = 7876;

	class UIPopup_Notice_SelectPickup : public Il2CppObject
	{
	public:
		UILabel* description1; // 0xD8
		UILabel* description2; // 0xE0
		MXButton* confirm; // 0xE8
		::System::Action* _onCloseCallback; // 0xF0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NOTICE_SELECTPICKUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::Excel::ShopRecruitExcel* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NOTICE_SELECTPICKUP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NOTICE_SELECTPICKUP_ONBACK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NOTICE_SELECTPICKUP_AWAKE_OFFSET))(nullptr);
		}

	};

