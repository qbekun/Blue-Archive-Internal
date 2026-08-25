#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamAPICall_t; }

#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_ADD_M_FUNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_REMOVE_M_FUNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_FINALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_SET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_CANCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_GETCALLBACKTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_ONRUNCALLRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_SETUNREGISTERED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamCallResult`1_TypeDefinitionIndex = 26089;

	class NXPSteamCallResult`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_Func; // 0x0
		::NPA::Ex::Steam::NXPSteamAPICall_t* m_hAPICall; // 0x0
		::System::Boolean m_bDisposed; // 0x0

		::System::Void add_m_Func(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_ADD_M_FUNC_OFFSET))(arg, nullptr);
		}

		::System::Void remove_m_Func(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_REMOVE_M_FUNC_OFFSET))(arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamAPICall_t* get_Handle()
		{
			return (return (::NPA::Ex::Steam::NXPSteamAPICall_t*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_GET_HANDLE_OFFSET))(nullptr);
		}

		Il2CppObject* Create(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Set(::NPA::Ex::Steam::NXPSteamAPICall_t* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAPICall_t*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_CANCEL_OFFSET))(nullptr);
		}

		::System::Type* GetCallbackType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_GETCALLBACKTYPE_OFFSET))(nullptr);
		}

		::System::Void OnRunCallResult(::System::Int32 arg, ::System::Boolean arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_ONRUNCALLRESULT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetUnregistered()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT`1_SETUNREGISTERED_OFFSET))(nullptr);
		}

	};
}

