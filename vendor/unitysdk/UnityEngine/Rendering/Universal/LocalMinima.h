#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class TEdge; }
namespace UnityEngine::Rendering::Universal { class LocalMinima; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LOCALMINIMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9BB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LocalMinima_TypeDefinitionIndex = 32446;

	class LocalMinima : public Il2CppObject
	{
	public:
		::System::Int64 Y; // 0x10
		::UnityEngine::Rendering::Universal::TEdge* LeftBound; // 0x18
		::UnityEngine::Rendering::Universal::TEdge* RightBound; // 0x20
		::UnityEngine::Rendering::Universal::LocalMinima* Next; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOCALMINIMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

