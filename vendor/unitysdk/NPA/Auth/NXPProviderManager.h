#pragma once
#include "../../unitysdk.h"

namespace NPA::Auth { class NXPProviderManager; }

#define NPA_AUTH_NXPPROVIDERMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD98F0)
#define NPA_AUTH_NXPPROVIDERMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9CD9900)
#define NPA_AUTH_NXPPROVIDERMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9CD9B20)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPProviderManager_TypeDefinitionIndex = 27482;

	class NXPProviderManager : public Il2CppObject
	{
	public:
		::NPA::Auth::NXPProviderManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPPROVIDERMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Auth::NXPProviderManager* get_Instance()
		{
			return (return (::NPA::Auth::NXPProviderManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPPROVIDERMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPPROVIDERMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

