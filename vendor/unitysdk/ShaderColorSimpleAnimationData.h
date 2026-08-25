#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Material; }

#define SHADERCOLORSIMPLEANIMATIONDATA_SETFRAMEVALUES_OFFSET UNITYSDK_OFFSET(0x20DAFC0)
#define SHADERCOLORSIMPLEANIMATIONDATA_OVERRIDESTARTCOLORWITHMATERIALSCURRENT_OFFSET UNITYSDK_OFFSET(0x20DB1C0)
#define SHADERCOLORSIMPLEANIMATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DB250)
#define SHADERCOLORSIMPLEANIMATIONDATA_OVERRIDEENDCOLOR_OFFSET UNITYSDK_OFFSET(0x20DB300)
#define SHADERCOLORSIMPLEANIMATIONDATA_RESETENDCOLOR_OFFSET UNITYSDK_OFFSET(0x20DB310)
#define SHADERCOLORSIMPLEANIMATIONDATA_POSTPROCESS_OFFSET UNITYSDK_OFFSET(0x20DB320)
#define SHADERCOLORSIMPLEANIMATIONDATA_RESETSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x20DB3A0)
#define SHADERCOLORSIMPLEANIMATIONDATA_OVERRIDESTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x20DB3B0)
#define SHADERCOLORSIMPLEANIMATIONDATA_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x20DB3C0)
#define SHADERCOLORSIMPLEANIMATIONDATA_OVERRIDEENDCOLORWITHMATERIALSCURRENT_OFFSET UNITYSDK_OFFSET(0x20DB420)

	inline static constexpr unsigned int ShaderColorSimpleAnimationData_TypeDefinitionIndex = 3745;

	class ShaderColorSimpleAnimationData : public Il2CppObject
	{
	public:
		::System::String* ColorName; // 0x38
		::UnityEngine::AnimationCurve* Curve01; // 0x40
		::UnityEngine::Color* StartColor; // 0x48
		::UnityEngine::Color* EndColor; // 0x58
		::System::Int32 id; // 0x68
		::UnityEngine::Vector4* startValue; // 0x6C
		::UnityEngine::Vector4* endValue; // 0x7C

		::System::Void SetFrameValues(::Il2CppArray<::System::Object*>* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSIMPLEANIMATIONDATA_SETFRAMEVALUES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OverrideStartColorWithMaterialsCurrent(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSIMPLEANIMATIONDATA_OVERRIDESTARTCOLORWITHMATERIALSCURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSIMPLEANIMATIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OverrideEndColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSIMPLEANIMATIONDATA_OVERRIDEENDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void ResetEndColor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSIMPLEANIMATIONDATA_RESETENDCOLOR_OFFSET))(nullptr);
		}

		::System::Void PostProcess(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSIMPLEANIMATIONDATA_POSTPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void ResetStartColor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSIMPLEANIMATIONDATA_RESETSTARTCOLOR_OFFSET))(nullptr);
		}

		::System::Void OverrideStartColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSIMPLEANIMATIONDATA_OVERRIDESTARTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean PreProcess(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSIMPLEANIMATIONDATA_PREPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void OverrideEndColorWithMaterialsCurrent(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSIMPLEANIMATIONDATA_OVERRIDEENDCOLORWITHMATERIALSCURRENT_OFFSET))(arg, nullptr);
		}

	};

