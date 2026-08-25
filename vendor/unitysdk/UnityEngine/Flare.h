#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Flare; }

#define UNITYENGINE_FLARE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA205150)
#define UNITYENGINE_FLARE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA2051C0)

namespace UnityEngine
{
	inline static constexpr unsigned int Flare_TypeDefinitionIndex = 31017;

	class Flare : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FLARE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::Flare* arg)
		{
			((::System::Void(*)(::UnityEngine::Flare*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FLARE_INTERNAL_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

