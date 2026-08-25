#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class LightCookieManager; }

#define INITPARAMS_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0xA0B4E90)

	inline static constexpr unsigned int InitParams_TypeDefinitionIndex = 32862;

	class InitParams : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::LightCookieManager* lightCookieManager; // 0x10
		::System::Boolean clusteredRendering; // 0x18
		::System::Int32 tileSize; // 0x1C

		InitParams* GetDefault()
		{
			return (return (InitParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + INITPARAMS_GETDEFAULT_OFFSET))(nullptr);
		}

	};

