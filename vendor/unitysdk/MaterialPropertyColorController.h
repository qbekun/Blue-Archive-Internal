#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Gradient; }

#define MATERIALPROPERTYCOLORCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BB7C0)
#define MATERIALPROPERTYCOLORCONTROLLER_PROGRESS_OFFSET UNITYSDK_OFFSET(0x20BBC80)
#define MATERIALPROPERTYCOLORCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x20BBCE0)

	inline static constexpr unsigned int MaterialPropertyColorController_TypeDefinitionIndex = 3619;

	class MaterialPropertyColorController : public Il2CppObject
	{
	public:
		::UnityEngine::Gradient* GradientColor; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYCOLORCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Progress(::UnityEngine::Material&* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Material&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYCOLORCONTROLLER_PROGRESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Init(::System::Int32 arg, MaterialPropertyAnimation&* arg2)
		{
			((::System::Void(*)(::System::Int32, MaterialPropertyAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYCOLORCONTROLLER_INIT_OFFSET))(arg, arg2, nullptr);
		}

	};

