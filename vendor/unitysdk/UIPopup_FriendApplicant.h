#pragma once
#include "unitysdk.h"

class UIFriendApplicantListController;

#define UIPOPUP_FRIENDAPPLICANT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x257C530)
#define UIPOPUP_FRIENDAPPLICANT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x257C570)
#define UIPOPUP_FRIENDAPPLICANT___N__0_OFFSET UNITYSDK_OFFSET(0x257C600)
#define UIPOPUP_FRIENDAPPLICANT_.CTOR_OFFSET UNITYSDK_OFFSET(0x257C610)
#define UIPOPUP_FRIENDAPPLICANT_SETDATA_OFFSET UNITYSDK_OFFSET(0x257C690)

	inline static constexpr unsigned int UIPopup_FriendApplicant_TypeDefinitionIndex = 6195;

	class UIPopup_FriendApplicant : public Il2CppObject
	{
	public:
		UIFriendApplicantListController* listController; // 0xD8
		Il2CppObject* StrangerIds; // 0xE0

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FRIENDAPPLICANT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FRIENDAPPLICANT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FRIENDAPPLICANT___N__0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FRIENDAPPLICANT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FRIENDAPPLICANT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

