#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_GUILAYOUTOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA27D2D0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayoutOption_TypeDefinitionIndex = 36540;

	class GUILayoutOption : public Il2CppObject
	{
	public:
		Type* type; // 0x10
		::System::Object* value; // 0x18

		::System::Void .ctor(Type* arg, ::System::Object* arg)
		{
			((::System::Void(*)(Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTOPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

