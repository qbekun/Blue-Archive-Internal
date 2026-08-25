#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexaTile; }
class StrategyVisual;
class HexaUnitVisual;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class ShaderBaseAnimationData;
namespace UnityEngine { class ParticleSystem; }
class DelayAnimationData;
class UICampaign;
namespace MX::Campaign { class HexaTileState; }

#define HEXATILEVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0xF80AA0)
#define HEXATILEVISUAL_PLAYSHOWSHADERANI_OFFSET UNITYSDK_OFFSET(0xF74800)
#define HEXATILEVISUAL_ROTATETILE_OFFSET UNITYSDK_OFFSET(0xF80C70)
#define HEXATILEVISUAL_REFRESH_OFFSET UNITYSDK_OFFSET(0xF73740)
#define HEXATILEVISUAL_CREATERUNTIMEOBJECT_OFFSET UNITYSDK_OFFSET(0xF809D0)
#define HEXATILEVISUAL_SETHEXATILEPOSITION_OFFSET UNITYSDK_OFFSET(0xF80910)
#define HEXATILEVISUAL_SETFOG_OFFSET UNITYSDK_OFFSET(0xF70490)
#define HEXATILEVISUAL_SELECT_OFFSET UNITYSDK_OFFSET(0xF812D0)
#define HEXATILEVISUAL_PLAYTELEPORTINEFFECT_OFFSET UNITYSDK_OFFSET(0xF77990)
#define HEXATILEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF81370)
#define HEXATILEVISUAL_PLAYTELEPORTINDELAY_OFFSET UNITYSDK_OFFSET(0xF77A20)
#define HEXATILEVISUAL_SETHIDE_OFFSET UNITYSDK_OFFSET(0xF80D20)
#define HEXATILEVISUAL_PLAYHIDESHADERANI_OFFSET UNITYSDK_OFFSET(0xF75080)
#define HEXATILEVISUAL_SET_RENDERERS_OFFSET UNITYSDK_OFFSET(0xF813C0)
#define HEXATILEVISUAL_SHOWEDITORONLYOBJECTS_OFFSET UNITYSDK_OFFSET(0xF813D0)
#define HEXATILEVISUAL_PLAYTELEPORTOUTEFFECT_OFFSET UNITYSDK_OFFSET(0xF77510)
#define HEXATILEVISUAL_HIDEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xF81470)
#define HEXATILEVISUAL_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0xF814B0)
#define HEXATILEVISUAL_SYNCFROMTILESTATE_OFFSET UNITYSDK_OFFSET(0xF814C0)

	inline static constexpr unsigned int HexaTileVisual_TypeDefinitionIndex = 857;

	class HexaTileVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTile* Data; // 0x18
		StrategyVisual* StrategyVisual; // 0x20
		HexaUnitVisual* UnitVisual; // 0x28
		HexaUnitVisual* ChallengeUnitVisual; // 0x30
		::UnityEngine::GameObject* EditorOnlyObject; // 0x38
		::UnityEngine::GameObject* FogObject; // 0x40
		::UnityEngine::GameObject* HighLight; // 0x48
		::UnityEngine::GameObject* CenterHighLight; // 0x50
		::UnityEngine::GameObject* Fog; // 0x58
		::System::Boolean IsSelect; // 0x60
		Il2CppObject* _Renderers_k__BackingField; // 0x68
		::UnityEngine::Animation* hideAni; // 0x70
		::Il2CppArray<::System::Object*>* mats; // 0x78
		ShaderBaseAnimationData* hideAnimation; // 0x80
		ShaderBaseAnimationData* showAnimation; // 0x88
		::UnityEngine::ParticleSystem* teleportOutEffect; // 0x90
		::UnityEngine::ParticleSystem* teleportInEffect; // 0x98
		DelayAnimationData* teleportInDelay; // 0xA0
		UICampaign* uiCampaign; // 0xA8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayShowShaderAni(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_PLAYSHOWSHADERANI_OFFSET))(arg, nullptr);
		}

		::System::Void RotateTile()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_ROTATETILE_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_REFRESH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateRuntimeObject(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_CREATERUNTIMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetHexaTilePosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_SETHEXATILEPOSITION_OFFSET))(nullptr);
		}

		::System::Void SetFog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_SETFOG_OFFSET))(arg, nullptr);
		}

		::System::Void Select(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_SELECT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayTeleportInEffect(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_PLAYTELEPORTINEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayTeleportInDelay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_PLAYTELEPORTINDELAY_OFFSET))(nullptr);
		}

		::System::Void SetHide(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_SETHIDE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayHideShaderAni(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_PLAYHIDESHADERANI_OFFSET))(arg, nullptr);
		}

		::System::Void set_Renderers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_SET_RENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void ShowEditorOnlyObjects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_SHOWEDITORONLYOBJECTS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayTeleportOutEffect(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_PLAYTELEPORTOUTEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void HideHighLight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_HIDEHIGHLIGHT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Renderers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_GET_RENDERERS_OFFSET))(nullptr);
		}

		::System::Void SyncFromTileState(::MX::Campaign::HexaTileState* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileState*, ::PVOID))((::PBYTE)hIl2Cpp + HEXATILEVISUAL_SYNCFROMTILESTATE_OFFSET))(arg, nullptr);
		}

	};

