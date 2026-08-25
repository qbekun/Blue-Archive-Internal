#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamErrorCode; }

#define NPA_EX_STEAM_NXPMICROTRANSACTIONEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2B960)
#define NPA_EX_STEAM_NXPMICROTRANSACTIONEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D2BA30)
#define NPA_EX_STEAM_NXPMICROTRANSACTIONEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D2BA40)
#define NPA_EX_STEAM_NXPMICROTRANSACTIONEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D2BAB0)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPMicroTransactionEvent_TypeDefinitionIndex = 26043;

	class NXPMicroTransactionEvent : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPMICROTRANSACTIONEVENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::NPA::Ex::Steam::NXPSteamErrorCode* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPMICROTRANSACTIONEVENT_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::NPA::Ex::Steam::NXPSteamErrorCode* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::NPA::Ex::Steam::NXPSteamErrorCode*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPMICROTRANSACTIONEVENT_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPMICROTRANSACTIONEVENT_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

