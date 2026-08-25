#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Rigidbody2D; }

#define UNITYENGINE_JOINT2D_GET_CONNECTEDBODY_OFFSET UNITYSDK_OFFSET(0xA29E060)
#define UNITYENGINE_JOINT2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA29E0A0)

namespace UnityEngine
{
	inline static constexpr unsigned int Joint2D_TypeDefinitionIndex = 37715;

	class Joint2D : public Il2CppObject
	{
	public:
		::UnityEngine::Rigidbody2D* get_connectedBody()
		{
			return (return (::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOINT2D_GET_CONNECTEDBODY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOINT2D_.CTOR_OFFSET))(nullptr);
		}

	};
}

