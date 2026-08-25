#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class GUIStyle; }

#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_RELEASESCREENPOS_OFFSET UNITYSDK_OFFSET(0x2883660)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_RETURNTOPOOL_OFFSET UNITYSDK_OFFSET(0x2883700)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_GETSCREENPOS_OFFSET UNITYSDK_OFFSET(0x2883840)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_.CTOR_OFFSET UNITYSDK_OFFSET(0x2883C20)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_SBFROMPOOL_OFFSET UNITYSDK_OFFSET(0x2883C30)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int CinemachineDebug_TypeDefinitionIndex = 34405;

	class CinemachineDebug : public Il2CppObject
	{
	public:
		Il2CppObject* mClients; // 0x0
		OnGUIDelegate* OnGUIHandlers; // 0x8
		Il2CppObject* mAvailableStringBuilders; // 0x10

		::System::Void ReleaseScreenPos(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_RELEASESCREENPOS_OFFSET))(arg, nullptr);
		}

		::System::Void ReturnToPool(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_RETURNTOPOOL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* GetScreenPos(::UnityEngine::Object* arg, ::System::String* str, ::UnityEngine::GUIStyle* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Object*, ::System::String*, ::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_GETSCREENPOS_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_.CTOR_OFFSET))(nullptr);
		}

		::System::Text::StringBuilder* SBFromPool()
		{
			return (return (::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_SBFROMPOOL_OFFSET))(nullptr);
		}

	};
}

