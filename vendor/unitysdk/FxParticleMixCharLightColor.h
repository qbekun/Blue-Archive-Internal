#pragma once
#include "unitysdk.h"

class MinMaxGradient;
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Color; }

#define FXPARTICLEMIXCHARLIGHTCOLOR_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x20BBD00)
#define FXPARTICLEMIXCHARLIGHTCOLOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20BC760)
#define FXPARTICLEMIXCHARLIGHTCOLOR_INITPROPERTYID_OFFSET UNITYSDK_OFFSET(0x20BC290)
#define FXPARTICLEMIXCHARLIGHTCOLOR_GETLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x20BC340)
#define FXPARTICLEMIXCHARLIGHTCOLOR_APPLYSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x20BC3F0)
#define FXPARTICLEMIXCHARLIGHTCOLOR_APPLYCOLOROVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x20BC4C0)
#define FXPARTICLEMIXCHARLIGHTCOLOR_APPLYCOLORBYSPEED_OFFSET UNITYSDK_OFFSET(0x20BC590)
#define FXPARTICLEMIXCHARLIGHTCOLOR_APPLYCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x20BC670)
#define FXPARTICLEMIXCHARLIGHTCOLOR_MULTIPLYLIGHTCOLORTOINFO_OFFSET UNITYSDK_OFFSET(0x20BCCA0)
#define FXPARTICLEMIXCHARLIGHTCOLOR_MULTIPLYLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x20BD180)
#define FXPARTICLEMIXCHARLIGHTCOLOR_MULTIPLYLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x20BD0A0)
#define FXPARTICLEMIXCHARLIGHTCOLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BD550)

	inline static constexpr unsigned int FxParticleMixCharLightColor_TypeDefinitionIndex = 3624;

	class FxParticleMixCharLightColor : public Il2CppObject
	{
	public:
		::System::String* lightToneName; // 0x0
		::System::String* lightDataName; // 0x0
		::System::Int32 lightToneId; // 0x0
		::System::Int32 lightDataId; // 0x4
		::System::Boolean mixStartColor; // 0x18
		MinMaxGradient* startColorInfo; // 0x20
		::System::Boolean mixColorOverLifetime; // 0x58
		MinMaxGradient* lifetimeInfo; // 0x60
		::System::Boolean mixColorBySpeed; // 0x98
		MinMaxGradient* speedInfo; // 0xA0
		::System::Int32 mixCustomData; // 0xD8
		MinMaxGradient* customInfo; // 0xE0
		::UnityEngine::ParticleSystem* particle; // 0x118
		::UnityEngine::Vector4* lightColor; // 0x120

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXPARTICLEMIXCHARLIGHTCOLOR_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXPARTICLEMIXCHARLIGHTCOLOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void InitPropertyId()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXPARTICLEMIXCHARLIGHTCOLOR_INITPROPERTYID_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* GetLightColor()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + FXPARTICLEMIXCHARLIGHTCOLOR_GETLIGHTCOLOR_OFFSET))(nullptr);
		}

		::System::Void ApplyStartColor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXPARTICLEMIXCHARLIGHTCOLOR_APPLYSTARTCOLOR_OFFSET))(nullptr);
		}

		::System::Void ApplyColorOverLifetime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXPARTICLEMIXCHARLIGHTCOLOR_APPLYCOLOROVERLIFETIME_OFFSET))(nullptr);
		}

		::System::Void ApplyColorBySpeed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXPARTICLEMIXCHARLIGHTCOLOR_APPLYCOLORBYSPEED_OFFSET))(nullptr);
		}

		::System::Void ApplyCustomData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXPARTICLEMIXCHARLIGHTCOLOR_APPLYCUSTOMDATA_OFFSET))(nullptr);
		}

		MinMaxGradient* MultiplyLightColorToInfo(MinMaxGradient* arg)
		{
			return ((MinMaxGradient*(*)(MinMaxGradient*, ::PVOID))((::PBYTE)hIl2Cpp + FXPARTICLEMIXCHARLIGHTCOLOR_MULTIPLYLIGHTCOLORTOINFO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Gradient* MultiplyLightColor(::UnityEngine::Gradient* arg)
		{
			return ((::UnityEngine::Gradient*(*)(::UnityEngine::Gradient*, ::PVOID))((::PBYTE)hIl2Cpp + FXPARTICLEMIXCHARLIGHTCOLOR_MULTIPLYLIGHTCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* MultiplyLightColor(::UnityEngine::Color* arg)
		{
			return ((::UnityEngine::Color*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + FXPARTICLEMIXCHARLIGHTCOLOR_MULTIPLYLIGHTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXPARTICLEMIXCHARLIGHTCOLOR_.CTOR_OFFSET))(nullptr);
		}

	};

