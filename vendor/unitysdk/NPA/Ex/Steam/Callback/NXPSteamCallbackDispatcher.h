#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam::Callback { class NXPSteamCallback; }
namespace NPA::Ex::Steam { class NXPSteamAPICall_t; }
namespace NPA::Ex::Steam::Callback { class NXPSteamCallResult; }

#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_EXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x9D3A220)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9D3A270)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9D35ED0)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9D36150)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_REGISTER_OFFSET UNITYSDK_OFFSET(0x9D3AC90)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_REGISTER_OFFSET UNITYSDK_OFFSET(0x9D3B0E0)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x9D3B3D0)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x9D3B630)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_UNREGISTERALL_OFFSET UNITYSDK_OFFSET(0x9D3A2C0)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_RUNFRAME_OFFSET UNITYSDK_OFFSET(0x9D36330)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D3B8A0)

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamCallbackDispatcher_TypeDefinitionIndex = 26083;

	class NXPSteamCallbackDispatcher : public Il2CppObject
	{
	public:
		Il2CppObject* m_registeredCallbacks; // 0x0
		Il2CppObject* m_registeredGameServerCallbacks; // 0x8
		Il2CppObject* m_registeredCallResults; // 0x10
		::System::Object* m_sync; // 0x18
		::System::Int32 m_pCallbackMsg; // 0x20
		::System::Int32 m_initCount; // 0x28

		::System::Void ExceptionHandler(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_EXCEPTIONHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Shutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void Register(::NPA::Ex::Steam::Callback::NXPSteamCallback* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamCallback*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_REGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void Register(::NPA::Ex::Steam::NXPSteamAPICall_t* arg, ::NPA::Ex::Steam::Callback::NXPSteamCallResult* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAPICall_t*, ::NPA::Ex::Steam::Callback::NXPSteamCallResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_REGISTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Unregister(::NPA::Ex::Steam::Callback::NXPSteamCallback* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamCallback*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_UNREGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void Unregister(::NPA::Ex::Steam::NXPSteamAPICall_t* arg, ::NPA::Ex::Steam::Callback::NXPSteamCallResult* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAPICall_t*, ::NPA::Ex::Steam::Callback::NXPSteamCallResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_UNREGISTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnregisterAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_UNREGISTERALL_OFFSET))(nullptr);
		}

		::System::Void RunFrame(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_RUNFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKDISPATCHER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

