#pragma once
#include "unitysdk.h"

#define MATERIALPROPERTYANIMATIONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x20BBBF0)
#define MATERIALPROPERTYANIMATIONCONTROLLER_PROGRESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MATERIALPROPERTYANIMATIONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BBC00)

	inline static constexpr unsigned int MaterialPropertyAnimationController_TypeDefinitionIndex = 3617;

	class MaterialPropertyAnimationController : public Il2CppObject
	{
	public:
		::System::Int32 PropertyID; // 0x10

		::System::Void Init(::System::Int32 arg, MaterialPropertyAnimation&* arg2)
		{
			((::System::Void(*)(::System::Int32, MaterialPropertyAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYANIMATIONCONTROLLER_INIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Progress(::UnityEngine::Material&* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Material&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYANIMATIONCONTROLLER_PROGRESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYANIMATIONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

