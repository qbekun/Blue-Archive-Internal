#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UIGeasPacel;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class UIMiniGameShootingGeasSelect;
namespace MX::Data::Excel { class MiniGameShootingGeasExcel; }

#define UIGEAS_GET_GEASID_OFFSET UNITYSDK_OFFSET(0x205F590)
#define UIGEAS_AWAKE_OFFSET UNITYSDK_OFFSET(0x205F5A0)
#define UIGEAS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x205F700)
#define UIGEAS_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x205FA90)
#define UIGEAS_.CTOR_OFFSET UNITYSDK_OFFSET(0x205FBC0)
#define UIGEAS_PLAYGEASSELECTANI_OFFSET UNITYSDK_OFFSET(0x205FBD0)
#define UIGEAS_SELECTTOGGLE_OFFSET UNITYSDK_OFFSET(0x205FC80)
#define UIGEAS_SET_GEASID_OFFSET UNITYSDK_OFFSET(0x205FCA0)
#define UIGEAS_RESETANI_OFFSET UNITYSDK_OFFSET(0x205FCB0)

	inline static constexpr unsigned int UIGeas_TypeDefinitionIndex = 3392;

	class UIGeas : public Il2CppObject
	{
	public:
		MXButton* Button; // 0x18
		UILabel* NameLabel; // 0x20
		UILabel* DescLabel; // 0x28
		UIGeasPacel* GeasParcel; // 0x30
		::UnityEngine::GameObject* ActionTag; // 0x38
		::UnityEngine::GameObject* EffectTag; // 0x40
		::UnityEngine::GameObject* Select; // 0x48
		::System::Int64 _GeasId_k__BackingField; // 0x50
		::UnityEngine::Animation* ani; // 0x58
		::System::String* selectAni; // 0x0
		::System::String* fadeAni; // 0x0
		UIMiniGameShootingGeasSelect* parent; // 0x60

		::System::Int64 get_GeasId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEAS_GET_GEASID_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEAS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIMiniGameShootingGeasSelect* arg, ::MX::Data::Excel::MiniGameShootingGeasExcel* arg2)
		{
			((::System::Void(*)(UIMiniGameShootingGeasSelect*, ::MX::Data::Excel::MiniGameShootingGeasExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEAS_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEAS_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEAS_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayGeasSelectAni(::System::Boolean arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEAS_PLAYGEASSELECTANI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SelectToggle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGEAS_SELECTTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_GeasId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGEAS_SET_GEASID_OFFSET))(arg, nullptr);
		}

		::System::Void ResetAni()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEAS_RESETANI_OFFSET))(nullptr);
		}

	};

