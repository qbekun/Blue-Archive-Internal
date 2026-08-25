#pragma once
#include "../../unitysdk.h"

namespace Animancer { class AnimancerComponent; }
class CoroutineAsyncOperation;
class UCRiggingController;
namespace MXUnderCover { class UCEntity; }
class EntityCompositionData;
namespace Animancer { class ClipTransition; }

#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SAMPLING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_APPLYDEFAULTENABLESETTINGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_ADDSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SET_CURRENTSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_GET_DEFAULTENABLESETTINGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_GET_STATEMACHINES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_GET_CHANGEMACHINEASYNCOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SET_STATEMACHINES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SET_DEFAULTENABLESETTINGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_REBIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_CO_CHANGEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_CHANGESTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SETDEFAULTENABLESETTING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_GET_NEXTSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SET_RIGGINGCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_GET_RIGGINGCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_GET_CURRENTSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SET_CHANGEMACHINEASYNCOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SET_NEXTSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_WAITPLAYOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_CO_WAITPLAY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCEntityAniController`1_TypeDefinitionIndex = 10114;

	class UCEntityAniController`1 : public Il2CppObject
	{
	public:
		::Animancer::AnimancerComponent* Animancer; // 0x0
		Il2CppObject* AnimationStatesDataAssets; // 0x0
		Il2CppObject* _StateMachines_k__BackingField; // 0x0
		Il2CppObject* _CurrentStateMachine_k__BackingField; // 0x0
		Il2CppObject* _NextStateMachine_k__BackingField; // 0x0
		CoroutineAsyncOperation* _ChangeMachineAsyncOperation_k__BackingField; // 0x0
		UCRiggingController* _RiggingController_k__BackingField; // 0x0
		Il2CppObject* _DefaultEnableSettings_k__BackingField; // 0x0

		::System::Boolean Sampling(::System::String* str, Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SAMPLING_OFFSET))(str, arg, nullptr);
		}

		::System::Void ApplyDefaultEnableSettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_APPLYDEFAULTENABLESETTINGS_OFFSET))(nullptr);
		}

		Il2CppObject* AddStateMachine()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_ADDSTATEMACHINE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentStateMachine(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SET_CURRENTSTATEMACHINE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DefaultEnableSettings()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_GET_DEFAULTENABLESETTINGS_OFFSET))(nullptr);
		}

		Il2CppObject* get_StateMachines()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_GET_STATEMACHINES_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* get_ChangeMachineAsyncOperation()
		{
			return ((CoroutineAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_GET_CHANGEMACHINEASYNCOPERATION_OFFSET))(nullptr);
		}

		::System::Void set_StateMachines(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SET_STATEMACHINES_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultEnableSettings(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SET_DEFAULTENABLESETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void Rebind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_REBIND_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_ChangeMachine(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_CO_CHANGEMACHINE_OFFSET))(str, arg, nullptr);
		}

		CoroutineAsyncOperation* ChangeStateMachine(::System::String* str, ::System::Boolean arg)
		{
			return ((CoroutineAsyncOperation*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_CHANGESTATEMACHINE_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetDefaultEnableSetting(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SETDEFAULTENABLESETTING_OFFSET))(str, arg, nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg, EntityCompositionData* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, EntityCompositionData*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_NextStateMachine()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_GET_NEXTSTATEMACHINE_OFFSET))(nullptr);
		}

		::System::Void set_RiggingController(UCRiggingController* arg)
		{
			((::System::Void(*)(UCRiggingController*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SET_RIGGINGCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_.CTOR_OFFSET))(nullptr);
		}

		UCRiggingController* get_RiggingController()
		{
			return ((UCRiggingController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_GET_RIGGINGCONTROLLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentStateMachine()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_GET_CURRENTSTATEMACHINE_OFFSET))(nullptr);
		}

		::System::Void set_ChangeMachineAsyncOperation(CoroutineAsyncOperation* arg)
		{
			((::System::Void(*)(CoroutineAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SET_CHANGEMACHINEASYNCOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_NextStateMachine(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_SET_NEXTSTATEMACHINE_OFFSET))(arg, nullptr);
		}

		CoroutineAsyncOperation* WaitPlayOperation(::Animancer::ClipTransition* arg)
		{
			return ((CoroutineAsyncOperation*(*)(::Animancer::ClipTransition*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_WAITPLAYOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_WaitPlay(::Animancer::ClipTransition* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::Animancer::ClipTransition*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCENTITYANICONTROLLER`1_CO_WAITPLAY_OFFSET))(arg, nullptr);
		}

	};
}

