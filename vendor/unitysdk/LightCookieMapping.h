#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Light; }

#define LIGHTCOOKIEMAPPING_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA05CC10)

	inline static constexpr unsigned int LightCookieMapping_TypeDefinitionIndex = 32652;

	class LightCookieMapping : public Il2CppObject
	{
	public:
		::System::UInt16 visibleLightIndex; // 0x10
		::System::UInt16 lightBufferIndex; // 0x12
		::UnityEngine::Light* light; // 0x18
		Il2CppObject* s_CompareByCookieSize; // 0x0
		Il2CppObject* s_CompareByBufferIndex; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTCOOKIEMAPPING_.CCTOR_OFFSET))(nullptr);
		}

	};

