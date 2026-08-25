#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::EnhancedTouch { class Finger; }
namespace UnityEngine::InputSystem::EnhancedTouch { class Touch; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9F4EBC0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F4EBD0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F4B030)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x9F4ECF0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9F4ED90)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F4EC60)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int TouchHistory_TypeDefinitionIndex = 28686;

	class TouchHistory : public Il2CppObject
	{
	public:
		Il2CppObject* m_History; // 0x10
		::UnityEngine::InputSystem::EnhancedTouch::Finger* m_Finger; // 0x18
		::System::Int32 m_Count; // 0x20
		::System::Int32 m_StartIndex; // 0x24
		::System::UInt32 m_Version; // 0x28

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::EnhancedTouch::Finger*, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CheckValid()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_CHECKVALID_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::EnhancedTouch::Touch* get_Item(::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::EnhancedTouch::Touch*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHHISTORY_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

