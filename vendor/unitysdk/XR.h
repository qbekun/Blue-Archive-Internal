#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }

#define XR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA08D3E0)

	inline static constexpr unsigned int XR_TypeDefinitionIndex = 32790;

	class XR : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ProfilingSampler* mirrorView; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XR_.CCTOR_OFFSET))(nullptr);
		}

	};

