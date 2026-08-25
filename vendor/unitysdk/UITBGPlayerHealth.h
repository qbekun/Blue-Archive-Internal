#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class Color; }
namespace UnityEngine { class GameObject; }
class MXButton;

#define UITBGPLAYERHEALTH_SETREVIVEBUTTON_OFFSET UNITYSDK_OFFSET(0xB58280)
#define UITBGPLAYERHEALTH_AWAKE_OFFSET UNITYSDK_OFFSET(0xB582B0)
#define UITBGPLAYERHEALTH_.CTOR_OFFSET UNITYSDK_OFFSET(0xB58430)
#define UITBGPLAYERHEALTH_SETHEALTH_OFFSET UNITYSDK_OFFSET(0xB58440)
#define UITBGPLAYERHEALTH_ONCLICKREVIVEBUTTON_OFFSET UNITYSDK_OFFSET(0xB58810)
#define UITBGPLAYERHEALTH_REFRESH_OFFSET UNITYSDK_OFFSET(0xB58970)

	inline static constexpr unsigned int UITBGPlayerHealth_TypeDefinitionIndex = 8400;

	class UITBGPlayerHealth : public Il2CppObject
	{
	public:
		UILabel* CurrentHealthLabel; // 0x18
		::UnityEngine::Color* DefaultHealthColor; // 0x20
		::UnityEngine::Color* NoHealthColor; // 0x30
		UILabel* MaxHealthLabelNormal; // 0x40
		UILabel* MaxHealthLabelMax; // 0x48
		Il2CppObject* Hearts; // 0x50
		Il2CppObject* HeartGrids; // 0x58
		::UnityEngine::GameObject* ReviveButtonObject; // 0x60
		MXButton* ReviveButton; // 0x68
		::System::Int32 currentMaxHealth; // 0x70

		::System::Void SetReviveButton(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITBGPLAYERHEALTH_SETREVIVEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGPLAYERHEALTH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGPLAYERHEALTH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetHealth(::System::Int32 arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITBGPLAYERHEALTH_SETHEALTH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickReviveButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGPLAYERHEALTH_ONCLICKREVIVEBUTTON_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITBGPLAYERHEALTH_REFRESH_OFFSET))(arg, nullptr);
		}

	};

