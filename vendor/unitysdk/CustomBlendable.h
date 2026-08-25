#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Object; }

#define CUSTOMBLENDABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2851A10)

	inline static constexpr unsigned int CustomBlendable_TypeDefinitionIndex = 34278;

	class CustomBlendable : public Il2CppObject
	{
	public:
		::UnityEngine::Object* m_Custom; // 0x10
		::System::Single m_Weight; // 0x18

		::System::Void .ctor(::UnityEngine::Object* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMBLENDABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

