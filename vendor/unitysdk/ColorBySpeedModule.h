#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define COLORBYSPEEDMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297200)
#define COLORBYSPEEDMODULE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xA298680)
#define COLORBYSPEEDMODULE_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2986C0)

	inline static constexpr unsigned int ColorBySpeedModule_TypeDefinitionIndex = 36941;

	class ColorBySpeedModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + COLORBYSPEEDMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_color(MinMaxGradient* arg)
		{
			((::System::Void(*)(MinMaxGradient*, ::PVOID))((::PBYTE)hIl2Cpp + COLORBYSPEEDMODULE_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_color_Injected(ColorBySpeedModule&* arg, MinMaxGradient&* arg)
		{
			((::System::Void(*)(ColorBySpeedModule&*, MinMaxGradient&*, ::PVOID))((::PBYTE)hIl2Cpp + COLORBYSPEEDMODULE_SET_COLOR_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};

