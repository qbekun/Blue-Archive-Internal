#pragma once
#include "unitysdk.h"

namespace MX::Conquest { class ConquestUnit; }
class UIConquest;
class HexaUIConquestUnitInfo;
namespace UnityEngine { class Animator; }
class ShaderBaseAnimationData;
namespace FlatData { class AnimatorData; }
class ConquestBossShieldFx;
class ConquestTileVisual;
class ConquestUnitVisual;
namespace UnityEngine { class GameObject; }

#define CONQUESTUNITVISUAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D09C50)
#define CONQUESTUNITVISUAL_INITVISUAL_OFFSET UNITYSDK_OFFSET(0x1D05970)
#define CONQUESTUNITVISUAL_PLAYIDLEAFTER_OFFSET UNITYSDK_OFFSET(0x1D09E90)
#define CONQUESTUNITVISUAL_PLAYSHOWANI_OFFSET UNITYSDK_OFFSET(0x1D09B40)
#define CONQUESTUNITVISUAL_DESELECT_OFFSET UNITYSDK_OFFSET(0x1D09F30)
#define CONQUESTUNITVISUAL_SELECT_OFFSET UNITYSDK_OFFSET(0x1D09FC0)
#define CONQUESTUNITVISUAL_SETFOG_OFFSET UNITYSDK_OFFSET(0x1D08E00)
#define CONQUESTUNITVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D0A050)
#define CONQUESTUNITVISUAL_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0x1D0A4D0)
#define CONQUESTUNITVISUAL_MAKEHEXAUICONQUESTUNITINFO_OFFSET UNITYSDK_OFFSET(0x1D09D00)
#define CONQUESTUNITVISUAL_SETCONQUESTUNIT_OFFSET UNITYSDK_OFFSET(0x1D04F60)
#define CONQUESTUNITVISUAL_APPLYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D0A590)
#define CONQUESTUNITVISUAL_PLAYDYNAMICANIMATION_OFFSET UNITYSDK_OFFSET(0x1D082C0)
#define CONQUESTUNITVISUAL_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0x1D0A620)
#define CONQUESTUNITVISUAL_START_OFFSET UNITYSDK_OFFSET(0x1D0A6E0)
#define CONQUESTUNITVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A730)
#define CONQUESTUNITVISUAL_INITDATA_OFFSET UNITYSDK_OFFSET(0x1D050F0)
#define CONQUESTUNITVISUAL_PLAYIDLE_OFFSET UNITYSDK_OFFSET(0x1D09CA0)

	inline static constexpr unsigned int ConquestUnitVisual_TypeDefinitionIndex = 1580;

	class ConquestUnitVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestUnit* Data; // 0x18
		UIConquest* uiConquest; // 0x20
		HexaUIConquestUnitInfo* HexaUIConquestUnitInfo; // 0x28
		Il2CppObject* renderers; // 0x30
		::UnityEngine::Animator* animator; // 0x38
		ShaderBaseAnimationData* showAni; // 0x40
		::Il2CppArray<::System::Object*>* mats; // 0x48
		::FlatData::AnimatorData* animatorData; // 0x50
		ConquestBossShieldFx* BossShieldFx; // 0x60
		::System::Boolean IsLocked; // 0x68

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void InitVisual(ConquestTileVisual* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(ConquestTileVisual*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_INITVISUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* PlayIdleAfter(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_PLAYIDLEAFTER_OFFSET))(arg, nullptr);
		}

		::System::Void PlayShowAni(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_PLAYSHOWANI_OFFSET))(arg, nullptr);
		}

		::System::Void Deselect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_DESELECT_OFFSET))(nullptr);
		}

		::System::Void Select()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_SELECT_OFFSET))(nullptr);
		}

		::System::Void SetFog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_SETFOG_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RotateRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_ROTATERIGHT_OFFSET))(nullptr);
		}

		HexaUIConquestUnitInfo* MakeHexaUIConquestUnitInfo(ConquestTileVisual* arg)
		{
			return ((HexaUIConquestUnitInfo*(*)(ConquestTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_MAKEHEXAUICONQUESTUNITINFO_OFFSET))(arg, nullptr);
		}

		ConquestUnitVisual* SetConquestUnit(::UnityEngine::GameObject* arg)
		{
			return ((ConquestUnitVisual*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_SETCONQUESTUNIT_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_APPLYTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void PlayDynamicAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_PLAYDYNAMICANIMATION_OFFSET))(nullptr);
		}

		::System::Void RotateLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_ROTATELEFT_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitData(::MX::Conquest::ConquestUnit* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestUnit*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_INITDATA_OFFSET))(arg, nullptr);
		}

		::System::Void PlayIdle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUNITVISUAL_PLAYIDLE_OFFSET))(nullptr);
		}

	};

