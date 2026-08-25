#pragma once
#include "unitysdk.h"

class UIServerSelectClickButton;
class UIGrid;
class UIScrollView;
class MXButton;
class UILabel;

#define UIGLOBALOPTIONGROUPPOPUP_ONTOGGLECHAGED_OFFSET UNITYSDK_OFFSET(0xCD0D80)
#define UIGLOBALOPTIONGROUPPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xCD0E10)
#define UIGLOBALOPTIONGROUPPOPUP_ONCLICKBTNS_OFFSET UNITYSDK_OFFSET(0xCD0E70)
#define UIGLOBALOPTIONGROUPPOPUP_OPENPOPUP_OFFSET UNITYSDK_OFFSET(0xCD0EA0)
#define UIGLOBALOPTIONGROUPPOPUP_SETTOGGLEVALUE_OFFSET UNITYSDK_OFFSET(0xCD1880)
#define UIGLOBALOPTIONGROUPPOPUP_SETTOGGLEACTIVE_OFFSET UNITYSDK_OFFSET(0xCD1920)
#define UIGLOBALOPTIONGROUPPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD19E0)
#define UIGLOBALOPTIONGROUPPOPUP_CLEAR_OFFSET UNITYSDK_OFFSET(0xCD1700)
#define UIGLOBALOPTIONGROUPPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD1A60)
#define UIGLOBALOPTIONGROUPPOPUP_CLOSE_OFFSET UNITYSDK_OFFSET(0xCD0E40)

	inline static constexpr unsigned int UIGlobalOptionGroupPopup_TypeDefinitionIndex = 9146;

	class UIGlobalOptionGroupPopup : public Il2CppObject
	{
	public:
		UIServerSelectClickButton* clickButtonPrefab; // 0x18
		UIGrid* grid; // 0x20
		UIScrollView* scrollView; // 0x28
		MXButton* closeButton; // 0x30
		UILabel* title; // 0x38
		::System::Type* currentEnumType; // 0x40
		Il2CppObject* callbackAction; // 0x48
		Il2CppObject* toggleDictionary; // 0x50

		::System::Void OnToggleChaged(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALOPTIONGROUPPOPUP_ONTOGGLECHAGED_OFFSET))(str, nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALOPTIONGROUPPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickBtns(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALOPTIONGROUPPOPUP_ONCLICKBTNS_OFFSET))(str, nullptr);
		}

		::System::Void OpenPopup(::System::String* str, Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALOPTIONGROUPPOPUP_OPENPOPUP_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void SetToggleValue(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALOPTIONGROUPPOPUP_SETTOGGLEVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetToggleActive(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALOPTIONGROUPPOPUP_SETTOGGLEACTIVE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALOPTIONGROUPPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALOPTIONGROUPPOPUP_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALOPTIONGROUPPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALOPTIONGROUPPOPUP_CLOSE_OFFSET))(nullptr);
		}

	};

