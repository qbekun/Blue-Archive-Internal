#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class Maxima; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MAXIMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9BD0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Maxima_TypeDefinitionIndex = 32448;

	class Maxima : public Il2CppObject
	{
	public:
		::System::Int64 X; // 0x10
		::UnityEngine::Rendering::Universal::Maxima* Next; // 0x18
		::UnityEngine::Rendering::Universal::Maxima* Prev; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MAXIMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

