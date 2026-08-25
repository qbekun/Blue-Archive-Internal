#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_STEAM_NXPSTEAMAPIWARNINGMESSAGEHOOK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1FDE0)
#define NPA_EX_STEAM_NXPSTEAMAPIWARNINGMESSAGEHOOK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1FEB0)
#define NPA_EX_STEAM_NXPSTEAMAPIWARNINGMESSAGEHOOK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1FEC0)
#define NPA_EX_STEAM_NXPSTEAMAPIWARNINGMESSAGEHOOK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1FF40)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamAPIWarningMessageHook_TypeDefinitionIndex = 25994;

	class NXPSteamAPIWarningMessageHook : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPIWARNINGMESSAGEHOOK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPIWARNINGMESSAGEHOOK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Text::StringBuilder* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::Text::StringBuilder*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPIWARNINGMESSAGEHOOK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPIWARNINGMESSAGEHOOK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

