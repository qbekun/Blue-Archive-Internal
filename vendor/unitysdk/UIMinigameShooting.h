#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace MX::MinigameShooting { class JoyStick; }
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector3; }
namespace MX::MinigameShooting { class MGSGameMode; }
namespace MX::MinigameShooting { class Character; }

#define UIMINIGAMESHOOTING_AWAKE_OFFSET UNITYSDK_OFFSET(0x2060040)
#define UIMINIGAMESHOOTING_UPDATE_OFFSET UNITYSDK_OFFSET(0x20601D0)
#define UIMINIGAMESHOOTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x2060720)
#define UIMINIGAMESHOOTING_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2060730)
#define UIMINIGAMESHOOTING_INPUTPOSITIONTOWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x20605C0)
#define UIMINIGAMESHOOTING_REFRESHSECTION_OFFSET UNITYSDK_OFFSET(0x2060B50)
#define UIMINIGAMESHOOTING_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x2060BD0)
#define UIMINIGAMESHOOTING_ONBACK_OFFSET UNITYSDK_OFFSET(0x2060C80)
#define UIMINIGAMESHOOTING_INITCHARACTER_OFFSET UNITYSDK_OFFSET(0x2060C90)

	inline static constexpr unsigned int UIMinigameShooting_TypeDefinitionIndex = 3398;

	class UIMinigameShooting : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* uiCamera; // 0xD8
		::MX::MinigameShooting::JoyStick* JoyStick; // 0xE0
		MXButton* Back; // 0xE8
		UILabel* TimeLabel; // 0xF0
		UILabel* SectionLabel; // 0xF8
		::UnityEngine::GameObject* LeftTop; // 0x100
		::UnityEngine::GameObject* RightTop; // 0x108

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTING_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTING_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTING_ONOPENED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* InputPositionToWorldPosition(::UnityEngine::Vector3* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTING_INPUTPOSITIONTOWORLDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSection(::MX::MinigameShooting::MGSGameMode* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::MGSGameMode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTING_REFRESHSECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTING_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTING_ONBACK_OFFSET))(nullptr);
		}

		::System::Void InitCharacter(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTING_INITCHARACTER_OFFSET))(arg, nullptr);
		}

	};

