#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }

#define PROFILINGSCOPEPASSDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9A5D0)

	inline static constexpr unsigned int ProfilingScopePassData_TypeDefinitionIndex = 33841;

	class ProfilingScopePassData : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ProfilingSampler* sampler; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGSCOPEPASSDATA_.CTOR_OFFSET))(nullptr);
		}

	};

