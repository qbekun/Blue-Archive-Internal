#pragma once
#include "../../../../unitysdk.h"

#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_ADD_M_FUNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_REMOVE_M_FUNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_CREATEGAMESERVER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_FINALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_REGISTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_GET_ISGAMESERVER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_GETCALLBACKTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_ONRUNCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_SETUNREGISTERED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamCallback`1_TypeDefinitionIndex = 26086;

	class NXPSteamCallback`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_Func; // 0x0
		::System::Boolean m_bGameServer; // 0x0
		::System::Boolean m_bIsRegistered; // 0x0
		::System::Boolean m_bDisposed; // 0x0

		::System::Void add_m_Func(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_ADD_M_FUNC_OFFSET))(arg, nullptr);
		}

		::System::Void remove_m_Func(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_REMOVE_M_FUNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Create(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_CREATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateGameServer(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_CREATEGAMESERVER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Register(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_REGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void Unregister()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_UNREGISTER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsGameServer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_GET_ISGAMESERVER_OFFSET))(nullptr);
		}

		::System::Type* GetCallbackType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_GETCALLBACKTYPE_OFFSET))(nullptr);
		}

		::System::Void OnRunCallback(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_ONRUNCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetUnregistered()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK`1_SETUNREGISTERED_OFFSET))(nullptr);
		}

	};
}

