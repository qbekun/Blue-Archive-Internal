#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class IntRect; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTRECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTRECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9B20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int IntRect_TypeDefinitionIndex = 32435;

	class IntRect : public Il2CppObject
	{
	public:
		::System::Int64 left; // 0x10
		::System::Int64 top; // 0x18
		::System::Int64 right; // 0x20
		::System::Int64 bottom; // 0x28

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTRECT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::IntRect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IntRect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTRECT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

