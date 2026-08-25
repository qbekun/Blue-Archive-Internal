#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace TMPro { class TMP_Text; }
namespace MX::MinigameCCG { class CCGSpecial; }
namespace MX::MinigameCCG { class CCGEntity; }

#define CCGVISUALSPECIAL_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x26E9E90)
#define CCGVISUALSPECIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E9EA0)
#define CCGVISUALSPECIAL_REFRESH_OFFSET UNITYSDK_OFFSET(0x26E9F20)
#define CCGVISUALSPECIAL_SETCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x26EA060)
#define CCGVISUALSPECIAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26EA140)
#define CCGVISUALSPECIAL_ONCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x26EA360)

	inline static constexpr unsigned int CCGVisualSpecial_TypeDefinitionIndex = 407;

	class CCGVisualSpecial : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* coolDownRoot; // 0x90
		::TMPro::TMP_Text* coolDownCount; // 0x98
		::UnityEngine::GameObject* blank; // 0xA0
		::MX::MinigameCCG::CCGSpecial* character; // 0xA8

		::MX::MinigameCCG::CCGSpecial* get_Character()
		{
			return ((::MX::MinigameCCG::CCGSpecial*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSPECIAL_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSPECIAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSPECIAL_REFRESH_OFFSET))(nullptr);
		}

		::System::Void SetCoolDown(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSPECIAL_SETCOOLDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSPECIAL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALSPECIAL_ONCLICKEVENT_OFFSET))(arg, nullptr);
		}

	};

