#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

	inline static constexpr unsigned int Settings_TypeDefinitionIndex = 2905;

	class Settings : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* TargetObject; // 0x10
		::System::Int32 TargetLayer; // 0x18
		::System::Boolean IncludeChildren; // 0x1C

	};

