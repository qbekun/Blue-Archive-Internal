#pragma once
#include "unitysdk.h"

class MXToggle;
class MXButton;
namespace MX::GameLogic::DBModel { class FriendIdCardDB; }
namespace Assets::_MX::Program::Scripts::Network { class TaskState; }

#define UIPOPUP_SEARCHEXPOSURE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2772990)
#define UIPOPUP_SEARCHEXPOSURE_SETTOGGLES_OFFSET UNITYSDK_OFFSET(0x2772C40)
#define UIPOPUP_SEARCHEXPOSURE___N__0_OFFSET UNITYSDK_OFFSET(0x2772D30)
#define UIPOPUP_SEARCHEXPOSURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2772D40)
#define UIPOPUP_SEARCHEXPOSURE_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x2772D50)
#define UIPOPUP_SEARCHEXPOSURE__ONOPENED_B__6_0_OFFSET UNITYSDK_OFFSET(0x2772F00)
#define UIPOPUP_SEARCHEXPOSURE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2772F10)
#define UIPOPUP_SEARCHEXPOSURE__ONTOGGLECHANGED_G__SETTOGGLEVALUE|8_0_OFFSET UNITYSDK_OFFSET(0x2772FA0)
#define UIPOPUP_SEARCHEXPOSURE_ONTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x2773010)
#define UIPOPUP_SEARCHEXPOSURE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27730E0)

	inline static constexpr unsigned int UIPopup_SearchExposure_TypeDefinitionIndex = 7350;

	class UIPopup_SearchExposure : public Il2CppObject
	{
	public:
		MXToggle* toggleAllow; // 0xD8
		MXToggle* toggleDisallow; // 0xE0
		MXButton* confirmButton; // 0xE8
		::MX::GameLogic::DBModel::FriendIdCardDB* myIdCardClone; // 0xF0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SEARCHEXPOSURE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetToggles(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SEARCHEXPOSURE_SETTOGGLES_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SEARCHEXPOSURE___N__0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SEARCHEXPOSURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SEARCHEXPOSURE_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_b__6_0(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SEARCHEXPOSURE__ONOPENED_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SEARCHEXPOSURE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void _OnToggleChanged_g__SetToggleValue|8_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SEARCHEXPOSURE__ONTOGGLECHANGED_G__SETTOGGLEVALUE|8_0_OFFSET))(nullptr);
		}

		::System::Void OnToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SEARCHEXPOSURE_ONTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SEARCHEXPOSURE_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

