#pragma once
#include "unitysdk.h"

class ColorInfo;

#define SHADERCOLORSANIMATIONDATA_SETSINGLESETTING_OFFSET UNITYSDK_OFFSET(0x20DAC60)
#define SHADERCOLORSANIMATIONDATA_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x20DAE50)
#define SHADERCOLORSANIMATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DAF00)
#define SHADERCOLORSANIMATIONDATA_SETFRAMEVALUES_OFFSET UNITYSDK_OFFSET(0x20DAF10)

	inline static constexpr unsigned int ShaderColorsAnimationData_TypeDefinitionIndex = 3744;

	class ShaderColorsAnimationData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Settings; // 0x38

		::System::Void SetSingleSetting(ColorInfo* arg, ::Il2CppArray<::System::Object*>* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(ColorInfo*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSANIMATIONDATA_SETSINGLESETTING_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean PreProcess(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSANIMATIONDATA_PREPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSANIMATIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetFrameValues(::Il2CppArray<::System::Object*>* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERCOLORSANIMATIONDATA_SETFRAMEVALUES_OFFSET))(arg, arg2, nullptr);
		}

	};

