#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RectTransform; }

#define REAPPLYDRIVENPROPERTIES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA23DD10)
#define REAPPLYDRIVENPROPERTIES_INVOKE_OFFSET UNITYSDK_OFFSET(0xA23DDE0)

	inline static constexpr unsigned int ReapplyDrivenProperties_TypeDefinitionIndex = 31210;

	class ReapplyDrivenProperties : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REAPPLYDRIVENPROPERTIES_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::RectTransform* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + REAPPLYDRIVENPROPERTIES_INVOKE_OFFSET))(arg, nullptr);
		}

	};

