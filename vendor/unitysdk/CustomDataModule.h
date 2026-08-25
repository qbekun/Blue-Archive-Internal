#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemCustomData; }

#define CUSTOMDATAMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297470)
#define CUSTOMDATAMODULE_SETCOLOR_OFFSET UNITYSDK_OFFSET(0xA298700)
#define CUSTOMDATAMODULE_SETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA298750)

	inline static constexpr unsigned int CustomDataModule_TypeDefinitionIndex = 36950;

	class CustomDataModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMDATAMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetColor(::UnityEngine::ParticleSystemCustomData* arg, MinMaxGradient* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystemCustomData*, MinMaxGradient*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMDATAMODULE_SETCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColor_Injected(CustomDataModule&* arg, ::UnityEngine::ParticleSystemCustomData* arg, MinMaxGradient&* arg)
		{
			((::System::Void(*)(CustomDataModule&*, ::UnityEngine::ParticleSystemCustomData*, MinMaxGradient&*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMDATAMODULE_SETCOLOR_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};

