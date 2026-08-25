#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class ParticleSystem; }
class ObjectHPBar;
class MXToggle;
namespace UnityEngine { class GameObject; }

#define UIBATTLESUBLAYOUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2232980)

	inline static constexpr unsigned int UIBattleSubLayout_TypeDefinitionIndex = 4451;

	class UIBattleSubLayout : public Il2CppObject
	{
	public:
		Il2CppObject* SkillCardSet; // 0x18
		MXButton* AutoLockButton; // 0x20
		MXButton* AutoOnButton; // 0x28
		MXButton* AutoOffButton; // 0x30
		MXButton* SpeedLockButton; // 0x38
		::Il2CppArray<::System::Object*>* SpeedButtonList; // 0x40
		::UnityEngine::ParticleSystem* SpeedOnButtonParticle; // 0x48
		ObjectHPBar* UIObjectHPBar; // 0x50
		Il2CppObject* CarrierSkillCards; // 0x58
		MXToggle* CarrierToggle; // 0x60
		::UnityEngine::GameObject* CarrierCardParent; // 0x68
		::UnityEngine::GameObject* SingleCarrierCardParent; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLESUBLAYOUT_.CTOR_OFFSET))(nullptr);
		}

	};

