#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class MeshRenderer; }
namespace MX::Audio { class AudioPlayer; }
namespace MX::Audio { class AnimationAudioEvent; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace UnityEngine { class Collider; }
namespace MX::MinigameCCG::UI { class CCGToastPosition; }
namespace MX::MinigameCCG::UI { class CCGToastLifetime; }
class DpadPoint;
namespace UnityEngine { class Material; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_HUD; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }

#define CCGVISUALENTITY_ADDCONTROLLERDPADPOINTINHUD_OFFSET UNITYSDK_OFFSET(0x26E92F0)
#define CCGVISUALENTITY_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x26E9770)
#define CCGVISUALENTITY_REMOVECONTROLLERDPADPOINT_OFFSET UNITYSDK_OFFSET(0x26E9780)
#define CCGVISUALENTITY_FLOATTOAST_OFFSET UNITYSDK_OFFSET(0x26E8DD0)
#define CCGVISUALENTITY_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x26E9A50)
#define CCGVISUALENTITY_GET_FRAMEMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x26E9A60)
#define CCGVISUALENTITY__REMOVECONTROLLERDPADPOINT_B__40_1_OFFSET UNITYSDK_OFFSET(0x26E9A70)
#define CCGVISUALENTITY_HIDETOAST_OFFSET UNITYSDK_OFFSET(0x26E9AE0)
#define CCGVISUALENTITY_GET_HASENTITY_OFFSET UNITYSDK_OFFSET(0x26E9B70)
#define CCGVISUALENTITY_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x26E7CA0)
#define CCGVISUALENTITY__REMOVECONTROLLERDPADPOINT_B__40_0_OFFSET UNITYSDK_OFFSET(0x26E9B90)
#define CCGVISUALENTITY_ONCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CCGVISUALENTITY_GET_HUD_OFFSET UNITYSDK_OFFSET(0x26E9C00)
#define CCGVISUALENTITY_PLAYONESHOTFLIPAUDIO_OFFSET UNITYSDK_OFFSET(0x26E9C90)
#define CCGVISUALENTITY__ADDCONTROLLERDPADPOINT_B__39_0_OFFSET UNITYSDK_OFFSET(0x26E9CC0)
#define CCGVISUALENTITY_GET_ALLMESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x26E9D30)
#define CCGVISUALENTITY_GET_BONE_OFFSET UNITYSDK_OFFSET(0x26E9D40)
#define CCGVISUALENTITY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26E7C40)
#define CCGVISUALENTITY_ONCLICKPRESSEVENT_OFFSET UNITYSDK_OFFSET(0x26E9D50)
#define CCGVISUALENTITY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x26E9D60)
#define CCGVISUALENTITY_START_OFFSET UNITYSDK_OFFSET(0x26E8890)
#define CCGVISUALENTITY_GET_FXPOSTIONBONE_OFFSET UNITYSDK_OFFSET(0x26E9D70)
#define CCGVISUALENTITY_TRYUSEENTITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define CCGVISUALENTITY_ADDCONTROLLERDPADPOINT_OFFSET UNITYSDK_OFFSET(0x26E93B0)
#define CCGVISUALENTITY_GET_PROCESSOR_OFFSET UNITYSDK_OFFSET(0x26E8690)
#define CCGVISUALENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E8070)

	inline static constexpr unsigned int CCGVisualEntity_TypeDefinitionIndex = 406;

	class CCGVisualEntity : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* bone; // 0x18
		::UnityEngine::Transform* fxPostionBone; // 0x20
		::UnityEngine::MeshRenderer* meshRenderer; // 0x28
		::MX::Audio::AudioPlayer* audioPlayer; // 0x30
		::MX::Audio::AnimationAudioEvent* flipAudioEvent; // 0x38
		Il2CppObject* allMeshRenderers; // 0x40
		::MX::MinigameCCG::CCGPlayer* player; // 0x48
		::MX::MinigameCCG::CCGEntity* entity; // 0x50
		::System::Int32 entityId; // 0x58
		::UnityEngine::Collider* _dpadCollider; // 0x60

		::System::Void AddControllerDpadPointInHUD()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_ADDCONTROLLERDPADPOINTINHUD_OFFSET))(nullptr);
		}

		::System::Int32 get_EntityId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void RemoveControllerDpadPoint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_REMOVECONTROLLERDPADPOINT_OFFSET))(nullptr);
		}

		::System::Void FloatToast(::MX::MinigameCCG::UI::CCGToastPosition* arg, ::MX::MinigameCCG::UI::CCGToastLifetime* arg2, ::System::String* str, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGToastPosition*, ::MX::MinigameCCG::UI::CCGToastLifetime*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_FLOATTOAST_OFFSET))(arg, arg2, str, arg3, nullptr);
		}

		::MX::MinigameCCG::CCGEntity* get_Entity()
		{
			return ((::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_GET_ENTITY_OFFSET))(nullptr);
		}

		::UnityEngine::MeshRenderer* get_FrameMeshRenderer()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_GET_FRAMEMESHRENDERER_OFFSET))(nullptr);
		}

		::System::Boolean _RemoveControllerDpadPoint_b__40_1(DpadPoint* arg)
		{
			return ((::System::Boolean(*)(DpadPoint*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY__REMOVECONTROLLERDPADPOINT_B__40_1_OFFSET))(arg, nullptr);
		}

		::System::Void HideToast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_HIDETOAST_OFFSET))(nullptr);
		}

		::System::Boolean get_HasEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_GET_HASENTITY_OFFSET))(nullptr);
		}

		::System::Void SetTexture(::System::String* str, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_SETTEXTURE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean _RemoveControllerDpadPoint_b__40_0(DpadPoint* arg)
		{
			return ((::System::Boolean(*)(DpadPoint*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY__REMOVECONTROLLERDPADPOINT_B__40_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_ONCLICKEVENT_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::UI::UICardGame_InGame_HUD* get_HUD()
		{
			return ((::MX::MinigameCCG::UI::UICardGame_InGame_HUD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_GET_HUD_OFFSET))(nullptr);
		}

		::System::Void PlayOneShotFlipAudio()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_PLAYONESHOTFLIPAUDIO_OFFSET))(nullptr);
		}

		::System::Boolean _AddControllerDpadPoint_b__39_0(DpadPoint* arg)
		{
			return ((::System::Boolean(*)(DpadPoint*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY__ADDCONTROLLERDPADPOINT_B__39_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AllMeshRenderers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_GET_ALLMESHRENDERERS_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Bone()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_GET_BONE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPressEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_ONCLICKPRESSEVENT_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_START_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_FXPostionBone()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_GET_FXPOSTIONBONE_OFFSET))(nullptr);
		}

		::System::Boolean TryUseEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_TRYUSEENTITY_OFFSET))(nullptr);
		}

		::System::Void AddControllerDpadPoint(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_ADDCONTROLLERDPADPOINT_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::Visual::CCGFlowProcessor* get_processor()
		{
			return ((::MX::MinigameCCG::Visual::CCGFlowProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_GET_PROCESSOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALENTITY_.CTOR_OFFSET))(nullptr);
		}

	};

