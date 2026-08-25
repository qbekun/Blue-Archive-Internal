#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UIGeas;

#define UIMINIGAMESHOOTINGGEASSELECT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2063D90)
#define UIMINIGAMESHOOTINGGEASSELECT___N__0_OFFSET UNITYSDK_OFFSET(0x2064310)
#define UIMINIGAMESHOOTINGGEASSELECT_ONGEASSELECT_OFFSET UNITYSDK_OFFSET(0x2064320)
#define UIMINIGAMESHOOTINGGEASSELECT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2064340)
#define UIMINIGAMESHOOTINGGEASSELECT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x20643D0)
#define UIMINIGAMESHOOTINGGEASSELECT_SELECTGEAS_OFFSET UNITYSDK_OFFSET(0x205FAB0)
#define UIMINIGAMESHOOTINGGEASSELECT_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2064450)
#define UIMINIGAMESHOOTINGGEASSELECT_COGEASSELECT_OFFSET UNITYSDK_OFFSET(0x2064670)
#define UIMINIGAMESHOOTINGGEASSELECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2064700)
#define UIMINIGAMESHOOTINGGEASSELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2064830)

	inline static constexpr unsigned int UIMiniGameShootingGeasSelect_TypeDefinitionIndex = 3411;

	class UIMiniGameShootingGeasSelect : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* UIGeas; // 0xD8
		MXButton* OKButton; // 0xE0
		::UnityEngine::GameObject* ButtonDisable; // 0xE8
		::System::Action* selectGeasCallback; // 0xF0
		UIGeas* selectGeasId; // 0xF8
		::System::Boolean isEmpty; // 0x100
		::System::String* openAni; // 0x0
		::System::String* closeAni; // 0x0

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGGEASSELECT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGGEASSELECT___N__0_OFFSET))(nullptr);
		}

		::System::Void OnGeasSelect(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGGEASSELECT_ONGEASSELECT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGGEASSELECT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGGEASSELECT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SelectGeas(UIGeas* arg)
		{
			((::System::Void(*)(UIGeas*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGGEASSELECT_SELECTGEAS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOK()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGGEASSELECT_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoGeasSelect()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGGEASSELECT_COGEASSELECT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGGEASSELECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGGEASSELECT_.CTOR_OFFSET))(nullptr);
		}

	};

