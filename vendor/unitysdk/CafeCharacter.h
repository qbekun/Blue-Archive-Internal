#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine::AI { class NavMeshAgent; }
namespace UnityEngine::AI { class NavMeshObstacle; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
namespace MX::Core::Math { class IRandomService; }
class FxFollower;
namespace FlatData { class CafeCharacterState; }
namespace UnityEngine { class Coroutine; }
class CafeCharacterBubble;
namespace UnityEngine { class CapsuleCollider; }
class CafeTerrain;
class CafeCharacterLoader;
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class BubbleType; }
class ItemObject;
class FurnitureCharacterTouchRouter;

#define CAFECHARACTER_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19AC1B0)
#define CAFECHARACTER_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19AC1C0)
#define CAFECHARACTER_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x19AC1D0)
#define CAFECHARACTER_SET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x19AC1E0)
#define CAFECHARACTER_GET_ISCHARACTERTEST_OFFSET UNITYSDK_OFFSET(0x19AC1F0)
#define CAFECHARACTER_SET_ISCHARACTERTEST_OFFSET UNITYSDK_OFFSET(0x19AC200)
#define CAFECHARACTER_GET_BUBBLEIDLEDURATION_OFFSET UNITYSDK_OFFSET(0x19AC210)
#define CAFECHARACTER_SET_BUBBLEIDLEDURATION_OFFSET UNITYSDK_OFFSET(0x19AC220)
#define CAFECHARACTER_GET_PSEUDORANDOM_OFFSET UNITYSDK_OFFSET(0x19AC230)
#define CAFECHARACTER_GET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19AC240)
#define CAFECHARACTER_SET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19AC250)
#define CAFECHARACTER_GET_CHARACTERSTATE_OFFSET UNITYSDK_OFFSET(0x19AC270)
#define CAFECHARACTER_SET_CHARACTERSTATE_OFFSET UNITYSDK_OFFSET(0x19AC280)
#define CAFECHARACTER_ENABLEAGENT_OFFSET UNITYSDK_OFFSET(0x19AC450)
#define CAFECHARACTER_GET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x19ACA00)
#define CAFECHARACTER_SET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x19ACA10)
#define CAFECHARACTER_GET_ISFURNITUREATTACHEDSTATE_OFFSET UNITYSDK_OFFSET(0x19ACA20)
#define CAFECHARACTER_GET_TERRAIN_OFFSET UNITYSDK_OFFSET(0x19ACA30)
#define CAFECHARACTER_GET_LOADER_OFFSET UNITYSDK_OFFSET(0x19ACAD0)
#define CAFECHARACTER_GET_CANRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x19ACB70)
#define CAFECHARACTER_SET_CANRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x19ACB80)
#define CAFECHARACTER_GET_FLOATERDISTANCEFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x19ACB90)
#define CAFECHARACTER_SET_FLOATERDISTANCEFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x19ACBA0)
#define CAFECHARACTER_GET_ISFIRSTFAVOR_OFFSET UNITYSDK_OFFSET(0x19ACBB0)
#define CAFECHARACTER_GET_AVOIDANCEPRIORITY_OFFSET UNITYSDK_OFFSET(0x19ACEB0)
#define CAFECHARACTER_GET_AVAILABLEFURNITUREATTACH_OFFSET UNITYSDK_OFFSET(0x19ACED0)
#define CAFECHARACTER_GET_CANATTACHFURNITURE_OFFSET UNITYSDK_OFFSET(0x19ACEE0)
#define CAFECHARACTER_GET_BODY_OFFSET UNITYSDK_OFFSET(0x19ACF30)
#define CAFECHARACTER_SET_BODY_OFFSET UNITYSDK_OFFSET(0x19ACF40)
#define CAFECHARACTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19ACF60)
#define CAFECHARACTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19AD060)
#define CAFECHARACTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19AD1E0)
#define CAFECHARACTER_INITBUBBLE_OFFSET UNITYSDK_OFFSET(0x19ADF90)
#define CAFECHARACTER_INITNAVMESHAGENTSETTING_OFFSET UNITYSDK_OFFSET(0x19AD490)
#define CAFECHARACTER_INITANIMATOR_OFFSET UNITYSDK_OFFSET(0x19AD860)
#define CAFECHARACTER_INITBUBBLE_OFFSET UNITYSDK_OFFSET(0x19ADFB0)
#define CAFECHARACTER_INITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x19AD9F0)
#define CAFECHARACTER_TRYGETRANDOMGRIDLOCATION_OFFSET UNITYSDK_OFFSET(0x19AE200)
#define CAFECHARACTER_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x19AE4E0)
#define CAFECHARACTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19AE650)
#define CAFECHARACTER_IDLE_OFFSET UNITYSDK_OFFSET(0x19AC490)
#define CAFECHARACTER_COIDLE_OFFSET UNITYSDK_OFFSET(0x19AEDB0)
#define CAFECHARACTER_WALK_OFFSET UNITYSDK_OFFSET(0x19AC630)
#define CAFECHARACTER_YIELDWALK_OFFSET UNITYSDK_OFFSET(0x19AEEE0)
#define CAFECHARACTER_IDLEDURINGWALK_OFFSET UNITYSDK_OFFSET(0x19AEC20)
#define CAFECHARACTER_REACTION_OFFSET UNITYSDK_OFFSET(0x19AC860)
#define CAFECHARACTER_REACTIONTIMER_OFFSET UNITYSDK_OFFSET(0x19AEF80)
#define CAFECHARACTER_SHOWREACTION_OFFSET UNITYSDK_OFFSET(0x19AF010)
#define CAFECHARACTER_DECIDE_OFFSET UNITYSDK_OFFSET(0x19AEAC0)
#define CAFECHARACTER_ONCLICKCHARACTER_OFFSET UNITYSDK_OFFSET(0x19AF210)
#define CAFECHARACTER_HANDLECANRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x19AF2E0)
#define CAFECHARACTER_HANDLECLOSEFAVORDIRECTINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x19AF8C0)
#define CAFECHARACTER_HANDLECANNOTRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x19AF450)
#define CAFECHARACTER_LOOKATCAMERA_OFFSET UNITYSDK_OFFSET(0x19ADE30)
#define CAFECHARACTER_GETRANDOMTYPE_OFFSET UNITYSDK_OFFSET(0x19AFC10)
#define CAFECHARACTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19AFCC0)
#define CAFECHARACTER_UNLOADBUBBLE_OFFSET UNITYSDK_OFFSET(0x19AFD10)
#define CAFECHARACTER_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x19ACBC0)
#define CAFECHARACTER_REFRESHDISTANCEFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x19AFF60)
#define CAFECHARACTER_SETBUBBLEORDER_OFFSET UNITYSDK_OFFSET(0x19B00E0)
#define CAFECHARACTER_HIDEONEDITSTART_OFFSET UNITYSDK_OFFSET(0x19B0160)
#define CAFECHARACTER_SHOWONEDITEND_OFFSET UNITYSDK_OFFSET(0x19B0210)
#define CAFECHARACTER_SETHALOTARGETIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x19B03F0)
#define CAFECHARACTER_ONSTARTGIVEGIFTPROCESS_OFFSET UNITYSDK_OFFSET(0x19B0470)
#define CAFECHARACTER_ONENDGIVEGIFTPROCESS_OFFSET UNITYSDK_OFFSET(0x19B0710)
#define CAFECHARACTER_GET_MYANIMATOR_OFFSET UNITYSDK_OFFSET(0x19B09C0)
#define CAFECHARACTER_ONDETACHFROMFURNITURE_OFFSET UNITYSDK_OFFSET(0x19B09D0)
#define CAFECHARACTER_ONATTACHFURNITURE_OFFSET UNITYSDK_OFFSET(0x19B0C00)
#define CAFECHARACTER_SETFLOATER_OFFSET UNITYSDK_OFFSET(0x19B0F70)
#define CAFECHARACTER_CANATTACHSTATE_OFFSET UNITYSDK_OFFSET(0x19B1250)
#define CAFECHARACTER_CANATTACHSTATEANY_OFFSET UNITYSDK_OFFSET(0x19B12A0)
#define CAFECHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x19B1300)
#define CAFECHARACTER__INITANIMATOR_G__ADDSTATE|82_0_OFFSET UNITYSDK_OFFSET(0x19AE120)
#define CAFECHARACTER__HANDLECLOSEFAVORDIRECTINGMESSAGE_B__102_0_OFFSET UNITYSDK_OFFSET(0x19B1410)
#define CAFECHARACTER__ONENDGIVEGIFTPROCESS_G__WAITUNTILREACTIONFINISH|115_0_OFFSET UNITYSDK_OFFSET(0x19B0950)

	inline static constexpr unsigned int CafeCharacter_TypeDefinitionIndex = 1340;

	class CafeCharacter : public Il2CppObject
	{
	public:
		::UnityEngine::Animator* anim; // 0x18
		::UnityEngine::AI::NavMeshAgent* agent; // 0x20
		::UnityEngine::AI::NavMeshObstacle* obstacle; // 0x28
		::System::Single carvingTime; // 0x30
		::System::Single lastAgentUpdateTime; // 0x34
		::UnityEngine::Vector3* lastAgentPosition; // 0x38
		::UnityEngine::Transform* Floater; // 0x48
		::System::Int64 _UniqueId_k__BackingField; // 0x50
		::System::Int64 _CostumeId_k__BackingField; // 0x58
		::System::Boolean _IsCharacterTest_k__BackingField; // 0x60
		::System::Int64 _BubbleIdleDuration_k__BackingField; // 0x68
		::System::Single defaultSpeed; // 0x70
		::MX::Core::Math::IRandomService* _pseudoRandom_k__BackingField; // 0x78
		FxFollower* haloFollower; // 0x80
		::UnityEngine::Transform* _MyTransform_k__BackingField; // 0x88
		::FlatData::CafeCharacterState* cafeCharacterState; // 0x90
		::FlatData::CafeCharacterState* _PrevState_k__BackingField; // 0x94
		::UnityEngine::Coroutine* currentActionCoroutine; // 0x98
		CafeCharacterBubble* bubble; // 0xA0
		::UnityEngine::CapsuleCollider* col; // 0xA8
		Il2CppObject* boneColliders; // 0xB0
		CafeTerrain* terrain; // 0xB8
		CafeCharacterLoader* loader; // 0xC0
		::System::Boolean _CanReceiveReward_k__BackingField; // 0xC8
		::System::DateTime* bubbleIdleStartTime; // 0xD0
		::System::Single _FloaterDistanceFromCamera_k__BackingField; // 0xD8
		::UnityEngine::AI::NavMeshPath* path; // 0xE0
		::System::Int32 IdleAvoidancePriority; // 0x0
		Il2CppObject* availableFurnitureAttach; // 0xE8
		::UnityEngine::GameObject* _body_k__BackingField; // 0xF0
		::System::Single elapsedWalkTime; // 0xF8
		::System::Boolean idleDuringWalk; // 0xFC
		::System::Single idleStartTimeDuringWalk; // 0x100

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_CostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SET_COSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCharacterTest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_ISCHARACTERTEST_OFFSET))(nullptr);
		}

		::System::Void set_IsCharacterTest(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SET_ISCHARACTERTEST_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BubbleIdleDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_BUBBLEIDLEDURATION_OFFSET))(nullptr);
		}

		::System::Void set_BubbleIdleDuration(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SET_BUBBLEIDLEDURATION_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::IRandomService* get_pseudoRandom()
		{
			return ((::MX::Core::Math::IRandomService*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_PSEUDORANDOM_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_MyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_MYTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void set_MyTransform(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SET_MYTRANSFORM_OFFSET))(arg, nullptr);
		}

		::FlatData::CafeCharacterState* get_CharacterState()
		{
			return ((::FlatData::CafeCharacterState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_CHARACTERSTATE_OFFSET))(nullptr);
		}

		::System::Void set_CharacterState(::FlatData::CafeCharacterState* arg)
		{
			((::System::Void(*)(::FlatData::CafeCharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SET_CHARACTERSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void EnableAgent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_ENABLEAGENT_OFFSET))(arg, nullptr);
		}

		::FlatData::CafeCharacterState* get_PrevState()
		{
			return ((::FlatData::CafeCharacterState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_PREVSTATE_OFFSET))(nullptr);
		}

		::System::Void set_PrevState(::FlatData::CafeCharacterState* arg)
		{
			((::System::Void(*)(::FlatData::CafeCharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SET_PREVSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFurnitureAttachedState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_ISFURNITUREATTACHEDSTATE_OFFSET))(nullptr);
		}

		CafeTerrain* get_Terrain()
		{
			return ((CafeTerrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_TERRAIN_OFFSET))(nullptr);
		}

		CafeCharacterLoader* get_Loader()
		{
			return ((CafeCharacterLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_LOADER_OFFSET))(nullptr);
		}

		::System::Boolean get_CanReceiveReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_CANRECEIVEREWARD_OFFSET))(nullptr);
		}

		::System::Void set_CanReceiveReward(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SET_CANRECEIVEREWARD_OFFSET))(arg, nullptr);
		}

		::System::Single get_FloaterDistanceFromCamera()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_FLOATERDISTANCEFROMCAMERA_OFFSET))(nullptr);
		}

		::System::Void set_FloaterDistanceFromCamera(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SET_FLOATERDISTANCEFROMCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFirstFavor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_ISFIRSTFAVOR_OFFSET))(nullptr);
		}

		::System::Int32 get_AvoidancePriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_AVOIDANCEPRIORITY_OFFSET))(nullptr);
		}

		Il2CppObject* get_AvailableFurnitureAttach()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_AVAILABLEFURNITUREATTACH_OFFSET))(nullptr);
		}

		::System::Boolean get_CanAttachFurniture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_CANATTACHFURNITURE_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_body()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_BODY_OFFSET))(nullptr);
		}

		::System::Void set_body(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SET_BODY_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitBubble()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_INITBUBBLE_OFFSET))(nullptr);
		}

		::System::Void InitNavMeshAgentSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_INITNAVMESHAGENTSETTING_OFFSET))(nullptr);
		}

		::System::Void InitAnimator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_INITANIMATOR_OFFSET))(nullptr);
		}

		::System::Void InitBubble(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_INITBUBBLE_OFFSET))(arg, nullptr);
		}

		::System::Void InitCollider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_INITCOLLIDER_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRandomGridLocation(::UnityEngine::Vector3&* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_TRYGETRANDOMGRIDLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void InitPosition(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_INITPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Idle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_IDLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoIdle(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_COIDLE_OFFSET))(arg, nullptr);
		}

		::System::Void Walk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_WALK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* YieldWalk(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_YIELDWALK_OFFSET))(arg, nullptr);
		}

		::System::Void IdleDuringWalk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_IDLEDURINGWALK_OFFSET))(nullptr);
		}

		::System::Void Reaction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_REACTION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ReactionTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_REACTIONTIMER_OFFSET))(nullptr);
		}

		::System::Void ShowReaction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SHOWREACTION_OFFSET))(nullptr);
		}

		::System::Void Decide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_DECIDE_OFFSET))(nullptr);
		}

		::System::Void OnClickCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_ONCLICKCHARACTER_OFFSET))(nullptr);
		}

		::System::Void HandleCanReceiveReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_HANDLECANRECEIVEREWARD_OFFSET))(nullptr);
		}

		::System::Boolean HandleCloseFavorDirectingMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_HANDLECLOSEFAVORDIRECTINGMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void HandleCanNotReceiveReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_HANDLECANNOTRECEIVEREWARD_OFFSET))(nullptr);
		}

		::System::Void LookAtCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_LOOKATCAMERA_OFFSET))(nullptr);
		}

		::FlatData::BubbleType* GetRandomType()
		{
			return ((::FlatData::BubbleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GETRANDOMTYPE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void UnloadBubble()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_UNLOADBUBBLE_OFFSET))(nullptr);
		}

		::System::Boolean CanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_CANINTERACT_OFFSET))(nullptr);
		}

		::System::Void RefreshDistanceFromCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_REFRESHDISTANCEFROMCAMERA_OFFSET))(nullptr);
		}

		::System::Void SetBubbleOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SETBUBBLEORDER_OFFSET))(arg, nullptr);
		}

		::System::Void HideOnEditStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_HIDEONEDITSTART_OFFSET))(nullptr);
		}

		::System::Void ShowOnEditEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SHOWONEDITEND_OFFSET))(nullptr);
		}

		::System::Void SetHaloTargetImmediate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SETHALOTARGETIMMEDIATE_OFFSET))(nullptr);
		}

		::System::Void OnStartGiveGiftProcess(ItemObject* arg)
		{
			((::System::Void(*)(ItemObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_ONSTARTGIVEGIFTPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndGiveGiftProcess(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_ONENDGIVEGIFTPROCESS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animator* get_MyAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_GET_MYANIMATOR_OFFSET))(nullptr);
		}

		::System::Void OnDetachFromFurniture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_ONDETACHFROMFURNITURE_OFFSET))(nullptr);
		}

		::System::Void OnAttachFurniture(::UnityEngine::Transform* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_ONATTACHFURNITURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetFloater(FurnitureCharacterTouchRouter* arg)
		{
			((::System::Void(*)(FurnitureCharacterTouchRouter*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_SETFLOATER_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanAttachState(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_CANATTACHSTATE_OFFSET))(str, nullptr);
		}

		::System::Boolean CanAttachStateAny(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_CANATTACHSTATEANY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _InitAnimator_g__AddState|82_0(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER__INITANIMATOR_G__ADDSTATE|82_0_OFFSET))(str, nullptr);
		}

		::System::Void _HandleCloseFavorDirectingMessage_b__102_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER__HANDLECLOSEFAVORDIRECTINGMESSAGE_B__102_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnEndGiveGiftProcess_g__WaitUntilReactionFinish|115_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTER__ONENDGIVEGIFTPROCESS_G__WAITUNTILREACTIONFINISH|115_0_OFFSET))(nullptr);
		}

	};

