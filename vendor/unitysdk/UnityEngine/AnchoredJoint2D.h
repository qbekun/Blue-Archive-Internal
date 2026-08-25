#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector2&; }

#define UNITYENGINE_ANCHOREDJOINT2D_GET_CONNECTEDANCHOR_OFFSET UNITYSDK_OFFSET(0xA29E0B0)
#define UNITYENGINE_ANCHOREDJOINT2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA29E140)
#define UNITYENGINE_ANCHOREDJOINT2D_GET_CONNECTEDANCHOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29E100)

namespace UnityEngine
{
	inline static constexpr unsigned int AnchoredJoint2D_TypeDefinitionIndex = 37716;

	class AnchoredJoint2D : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* get_connectedAnchor()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D_GET_CONNECTEDANCHOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D_.CTOR_OFFSET))(nullptr);
		}

		::System::Void get_connectedAnchor_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D_GET_CONNECTEDANCHOR_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

