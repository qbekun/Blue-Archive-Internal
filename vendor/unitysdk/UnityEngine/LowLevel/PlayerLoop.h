#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::LowLevel { class PlayerLoopSystem; }

#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_GETCURRENTPLAYERLOOP_OFFSET UNITYSDK_OFFSET(0xA24D210)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_SETPLAYERLOOP_OFFSET UNITYSDK_OFFSET(0xA24D5A0)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_PLAYERLOOPSYSTEMTOINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24D680)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_INTERNALTOPLAYERLOOPSYSTEM_OFFSET UNITYSDK_OFFSET(0xA24D2D0)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_GETCURRENTPLAYERLOOPINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24D290)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOP_SETPLAYERLOOPINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24D900)

namespace UnityEngine::LowLevel
{
	inline static constexpr unsigned int PlayerLoop_TypeDefinitionIndex = 31321;

	class PlayerLoop : public Il2CppObject
	{
	public:
		::UnityEngine::LowLevel::PlayerLoopSystem* GetCurrentPlayerLoop()
		{
			return (return (::UnityEngine::LowLevel::PlayerLoopSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_GETCURRENTPLAYERLOOP_OFFSET))(nullptr);
		}

		::System::Void SetPlayerLoop(::UnityEngine::LowLevel::PlayerLoopSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::LowLevel::PlayerLoopSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_SETPLAYERLOOP_OFFSET))(arg, nullptr);
		}

		::System::Int32 PlayerLoopSystemToInternal(::UnityEngine::LowLevel::PlayerLoopSystem* arg, Il2CppObject&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::LowLevel::PlayerLoopSystem*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_PLAYERLOOPSYSTEMTOINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::LowLevel::PlayerLoopSystem* InternalToPlayerLoopSystem(::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			return (return (::UnityEngine::LowLevel::PlayerLoopSystem*(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_INTERNALTOPLAYERLOOPSYSTEM_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCurrentPlayerLoopInternal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_GETCURRENTPLAYERLOOPINTERNAL_OFFSET))(nullptr);
		}

		::System::Void SetPlayerLoopInternal(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOP_SETPLAYERLOOPINTERNAL_OFFSET))(arg, nullptr);
		}

	};
}

