#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define MATERIALPROPERTYVALUECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x20BBC10)
#define MATERIALPROPERTYVALUECONTROLLER_PROGRESS_OFFSET UNITYSDK_OFFSET(0x20BBC30)
#define MATERIALPROPERTYVALUECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BB7B0)

	inline static constexpr unsigned int MaterialPropertyValueController_TypeDefinitionIndex = 3618;

	class MaterialPropertyValueController : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationCurve* CurveValue; // 0x18

		::System::Void Init(::System::Int32 arg, MaterialPropertyAnimation&* arg2)
		{
			((::System::Void(*)(::System::Int32, MaterialPropertyAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYVALUECONTROLLER_INIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Progress(::UnityEngine::Material&* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Material&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYVALUECONTROLLER_PROGRESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYVALUECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

