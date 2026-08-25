#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define SHADERFLOATANIMATIONDATA_SETFRAMEVALUES_OFFSET UNITYSDK_OFFSET(0x20DBD40)
#define SHADERFLOATANIMATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DBE50)
#define SHADERFLOATANIMATIONDATA_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x20DBEA0)

	inline static constexpr unsigned int ShaderFloatAnimationData_TypeDefinitionIndex = 3747;

	class ShaderFloatAnimationData : public Il2CppObject
	{
	public:
		::System::String* FloatName; // 0x38
		::UnityEngine::AnimationCurve* Curve01; // 0x40
		::System::Single MinValue; // 0x48
		::System::Single MaxValue; // 0x4C
		::System::Int32 id; // 0x50
		::System::Single curveScale; // 0x54

		::System::Void SetFrameValues(::Il2CppArray<::System::Object*>* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHADERFLOATANIMATIONDATA_SETFRAMEVALUES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERFLOATANIMATIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean PreProcess(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERFLOATANIMATIONDATA_PREPROCESS_OFFSET))(arg, nullptr);
		}

	};

