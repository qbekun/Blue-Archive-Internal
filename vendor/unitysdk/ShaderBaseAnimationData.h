#pragma once
#include "unitysdk.h"

#define SHADERBASEANIMATIONDATA_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x20DA6A0)
#define SHADERBASEANIMATIONDATA_COPLAY_OFFSET UNITYSDK_OFFSET(0x20D4F40)
#define SHADERBASEANIMATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DA690)
#define SHADERBASEANIMATIONDATA_SETFRAMEVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SHADERBASEANIMATIONDATA_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x20DA6E0)
#define SHADERBASEANIMATIONDATA_POSTPROCESS_OFFSET UNITYSDK_OFFSET(0x20DA6F0)
#define SHADERBASEANIMATIONDATA_RESET_OFFSET UNITYSDK_OFFSET(0x20DA330)

	inline static constexpr unsigned int ShaderBaseAnimationData_TypeDefinitionIndex = 3742;

	class ShaderBaseAnimationData : public Il2CppObject
	{
	public:
		::System::Single PreDelay; // 0x18
		::System::String* EnableKeyword; // 0x20
		::System::Boolean DisableKeywordOnFinish; // 0x28
		::System::Single Duration; // 0x2C
		::System::Boolean IsUnscaledTime; // 0x30
		::System::Boolean Loop; // 0x31

		::System::Single GetDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERBASEANIMATIONDATA_GETDELTATIME_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::Il2CppArray<::System::Object*>* arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::Il2CppArray<::System::Object*>*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERBASEANIMATIONDATA_COPLAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERBASEANIMATIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetFrameValues(::Il2CppArray<::System::Object*>* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERBASEANIMATIONDATA_SETFRAMEVALUES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean PreProcess(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERBASEANIMATIONDATA_PREPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void PostProcess(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERBASEANIMATIONDATA_POSTPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void Reset(::Il2CppArray<::System::Object*>* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERBASEANIMATIONDATA_RESET_OFFSET))(arg, arg2, nullptr);
		}

	};

