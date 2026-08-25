#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UIFriendApplicantListController;

#define UIPOPUP_BLOCKLIST_REFRESH_OFFSET UNITYSDK_OFFSET(0x257AB60)
#define UIPOPUP_BLOCKLIST___N__0_OFFSET UNITYSDK_OFFSET(0x257AE40)
#define UIPOPUP_BLOCKLIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0x257AE50)
#define UIPOPUP_BLOCKLIST_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x257AE80)
#define UIPOPUP_BLOCKLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x257AF10)

	inline static constexpr unsigned int UIPopup_Blocklist_TypeDefinitionIndex = 6187;

	class UIPopup_Blocklist : public Il2CppObject
	{
	public:
		UILabel* blockCount; // 0xD8
		::UnityEngine::GameObject* empty; // 0xE0
		UIFriendApplicantListController* listController; // 0xE8

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BLOCKLIST_REFRESH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BLOCKLIST___N__0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BLOCKLIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BLOCKLIST_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BLOCKLIST_.CTOR_OFFSET))(nullptr);
		}

	};

