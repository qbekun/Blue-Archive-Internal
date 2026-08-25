#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define SHADERALPHAANIMATIONDATA_POSTPROCESS_OFFSET UNITYSDK_OFFSET(0x20D9E50)
#define SHADERALPHAANIMATIONDATA_RESETBLENDINFO_OFFSET UNITYSDK_OFFSET(0x20D9E60)
#define SHADERALPHAANIMATIONDATA_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x20D9FD0)
#define SHADERALPHAANIMATIONDATA_RESET_OFFSET UNITYSDK_OFFSET(0x20DA300)
#define SHADERALPHAANIMATIONDATA_SETFRAMEVALUES_OFFSET UNITYSDK_OFFSET(0x20DA450)
#define SHADERALPHAANIMATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DA5F0)

	inline static constexpr unsigned int ShaderAlphaAnimationData_TypeDefinitionIndex = 3740;

	class ShaderAlphaAnimationData : public Il2CppObject
	{
	public:
		::System::Boolean ResetBlendOnFinish; // 0x38
		::System::String* ColorName; // 0x40
		::UnityEngine::AnimationCurve* Curve01; // 0x48
		::System::String* srcBlendName; // 0x0
		::System::String* dstBlendName; // 0x0
		::System::String* zWriteName; // 0x0
		::System::Int32 id; // 0x50
		Il2CppObject* blendInfoList; // 0x58

		::System::Void PostProcess(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERALPHAANIMATIONDATA_POSTPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void ResetBlendInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERALPHAANIMATIONDATA_RESETBLENDINFO_OFFSET))(nullptr);
		}

		::System::Boolean PreProcess(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERALPHAANIMATIONDATA_PREPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void Reset(::Il2CppArray<::System::Object*>* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERALPHAANIMATIONDATA_RESET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetFrameValues(::Il2CppArray<::System::Object*>* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERALPHAANIMATIONDATA_SETFRAMEVALUES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERALPHAANIMATIONDATA_.CTOR_OFFSET))(nullptr);
		}

	};

