#pragma once
#include "unitysdk.h"

#define UNSHARED`3_GET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`3_SET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`3_GET_SERIALIZEDEVENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`3_SET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`3_ONSETBASESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`3_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`3_GET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UnShared`3_TypeDefinitionIndex = 35215;

	class UnShared`3 : public ::UnityEngine::InputSystem::LowLevel::DeviceRemoveEvent
	{
	public:
		Il2CppObject* _State; // 0x0

		Il2CppObject* get_Transition()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`3_GET_TRANSITION_OFFSET))(nullptr);
		}

		::System::Void set_State(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`3_SET_STATE_OFFSET))(arg, nullptr);
		}

		Serializable&* get_SerializedEvents()
		{
			return (return (Serializable&*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`3_GET_SERIALIZEDEVENTS_OFFSET))(nullptr);
		}

		::System::Void set_Transition(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`3_SET_TRANSITION_OFFSET))(arg, nullptr);
		}

		::System::Void OnSetBaseState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`3_ONSETBASESTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`3_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* CreateState()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`3_CREATESTATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_State()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`3_GET_STATE_OFFSET))(nullptr);
		}

	};

