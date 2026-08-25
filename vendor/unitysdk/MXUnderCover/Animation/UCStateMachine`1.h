#pragma once
#include "../../unitysdk.h"

namespace MXUnderCover { class UCEntity; }
namespace Animancer { class AnimancerComponent; }
class UCRiggingController;
class CoroutineAsyncOperation;

#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_ID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SET_ID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_STATES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SET_STATES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_ANIMANCER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SET_ANIMANCER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_ENTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_EXIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_RIGGINGCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SET_RIGGINGCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_SAVESTATEIDASINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_ENTERASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_EXITASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_CHANGESTATEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_INITIALIZERIGGINGCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GETSTATEDURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_CO_WAITPLAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_HASENTERSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_FINDSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_CHANGEDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SAMPLING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCStateMachine`1_TypeDefinitionIndex = 10105;

	class UCStateMachine`1 : public Il2CppObject
	{
	public:
		::System::String* _Id_k__BackingField; // 0x0
		Il2CppObject* _States_k__BackingField; // 0x0
		::MXUnderCover::UCEntity* _Owner_k__BackingField; // 0x0
		::Animancer::AnimancerComponent* _Animancer_k__BackingField; // 0x0
		Il2CppObject* _Current_k__BackingField; // 0x0
		UCRiggingController* _RiggingController_k__BackingField; // 0x0

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SET_ID_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_States()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_STATES_OFFSET))(nullptr);
		}

		::System::Void set_States(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SET_STATES_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCEntity* get_Owner()
		{
			return ((::MXUnderCover::UCEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Void set_Owner(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SET_OWNER_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerComponent* get_Animancer()
		{
			return ((::Animancer::AnimancerComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_ANIMANCER_OFFSET))(nullptr);
		}

		::System::Void set_Animancer(::Animancer::AnimancerComponent* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerComponent*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SET_ANIMANCER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Current()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_Current(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Enter()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_ENTER_OFFSET))(nullptr);
		}

		Il2CppObject* get_Default()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_DEFAULT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Exit()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_EXIT_OFFSET))(nullptr);
		}

		UCRiggingController* get_RiggingController()
		{
			return ((UCRiggingController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_RIGGINGCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_RiggingController(UCRiggingController* arg)
		{
			((::System::Void(*)(UCRiggingController*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SET_RIGGINGCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SaveStateIdAsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GET_SAVESTATEIDASINT_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* EnterAsync()
		{
			return ((CoroutineAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_ENTERASYNC_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* ExitAsync()
		{
			return ((CoroutineAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_EXITASYNC_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* ChangeStateAsync(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((CoroutineAsyncOperation*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_CHANGESTATEASYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::MXUnderCover::UCEntity* arg2, ::Animancer::AnimancerComponent* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::MXUnderCover::UCEntity*, ::Animancer::AnimancerComponent*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(::System::String* str, ::MXUnderCover::UCEntity* arg, ::Animancer::AnimancerComponent* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::String*, ::MXUnderCover::UCEntity*, ::Animancer::AnimancerComponent*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_INITIALIZE_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void InitializeRiggingController(UCRiggingController* arg)
		{
			((::System::Void(*)(UCRiggingController*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_INITIALIZERIGGINGCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void ForceStop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_FORCESTOP_OFFSET))(nullptr);
		}

		::System::Single GetStateDuration(Il2CppObject* arg)
		{
			return ((::System::Single(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_GETSTATEDURATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_WaitPlay(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_CO_WAITPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean HasEnterState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_HASENTERSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* FindState(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_FINDSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ChangeDefaultState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_CHANGEDEFAULTSTATE_OFFSET))(nullptr);
		}

		::System::Boolean ChangeState(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_CHANGESTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Sampling(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_SAMPLING_OFFSET))(arg, nullptr);
		}

		::System::Boolean ChangeState(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_CHANGESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCSTATEMACHINE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

