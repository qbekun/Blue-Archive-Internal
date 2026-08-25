#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define COLOROVERLIFETIMEMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2971D0)
#define COLOROVERLIFETIMEMODULE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xA298600)
#define COLOROVERLIFETIMEMODULE_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA298640)

	inline static constexpr unsigned int ColorOverLifetimeModule_TypeDefinitionIndex = 36940;

	class ColorOverLifetimeModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + COLOROVERLIFETIMEMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_color(MinMaxGradient* arg)
		{
			((::System::Void(*)(MinMaxGradient*, ::PVOID))((::PBYTE)hIl2Cpp + COLOROVERLIFETIMEMODULE_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_color_Injected(ColorOverLifetimeModule&* arg, MinMaxGradient&* arg)
		{
			((::System::Void(*)(ColorOverLifetimeModule&*, MinMaxGradient&*, ::PVOID))((::PBYTE)hIl2Cpp + COLOROVERLIFETIMEMODULE_SET_COLOR_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};

