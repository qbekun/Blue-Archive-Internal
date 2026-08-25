#pragma once
#include "unitysdk.h"

class UISprite;
class UISlider;
class HpAnimationData;
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define ANIMATIONHPBAR_APPLYCOLOR_OFFSET UNITYSDK_OFFSET(0x25CCF90)
#define ANIMATIONHPBAR_ONLINECHANGED_OFFSET UNITYSDK_OFFSET(0x25CD1A0)
#define ANIMATIONHPBAR_GET_TARGETSTEP_OFFSET UNITYSDK_OFFSET(0x25CD2B0)
#define ANIMATIONHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25CD3B0)
#define ANIMATIONHPBAR_REFRESHWIDGETS_OFFSET UNITYSDK_OFFSET(0x25CD470)
#define ANIMATIONHPBAR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25CDA50)
#define ANIMATIONHPBAR_UPDATE_OFFSET UNITYSDK_OFFSET(0x25CDBC0)

	inline static constexpr unsigned int AnimationHPBar_TypeDefinitionIndex = 6340;

	class AnimationHPBar : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* hpColorsHuman; // 0x18
		::Il2CppArray<::System::Object*>* hpColorsMechanic; // 0x20
		::Il2CppArray<::System::Object*>* hpColorsTerror; // 0x28
		::Il2CppArray<::System::Object*>* hpColorsNormal; // 0x30
		::Il2CppArray<::System::Object*>* hpColorsElastic; // 0x38
		::Il2CppArray<::System::Object*>* hpColorsComposite; // 0x40
		UISprite* NextHpBar; // 0x48
		UISprite* CurrentHpBar; // 0x50
		UISprite* ThumbSprite; // 0x58
		UISlider* AniSlider; // 0x60
		UISlider* HpBarSlider; // 0x68
		UISlider* hpBarMaxHPCap; // 0x70
		UISlider* temporaryHPSlider; // 0x78
		HpAnimationData* hpAnimationData; // 0x80
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* character; // 0x88
		Il2CppObject* onUpdateFinished; // 0x90

		::System::Void ApplyColor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONHPBAR_APPLYCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnLineChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONHPBAR_ONLINECHANGED_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONHPBAR_GET_TARGETSTEP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONHPBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshWidgets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONHPBAR_REFRESHWIDGETS_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONHPBAR_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONHPBAR_UPDATE_OFFSET))(nullptr);
		}

	};

