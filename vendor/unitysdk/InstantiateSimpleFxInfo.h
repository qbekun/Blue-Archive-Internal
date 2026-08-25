#pragma once
#include "unitysdk.h"

class ParentType;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define INSTANTIATESIMPLEFXINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C1220)
#define INSTANTIATESIMPLEFXINFO_INSTANTIATEFX_OFFSET UNITYSDK_OFFSET(0x20C1240)

	inline static constexpr unsigned int InstantiateSimpleFxInfo_TypeDefinitionIndex = 3640;

	class InstantiateSimpleFxInfo : public Il2CppObject
	{
	public:
		ParentType* setParentType; // 0x28
		::System::Boolean setPositionZero; // 0x2C
		::System::Boolean setRotationZero; // 0x2D
		::System::Boolean setScaleOne; // 0x2E

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANTIATESIMPLEFXINFO_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* InstantiateFx(::UnityEngine::Component* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Component*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + INSTANTIATESIMPLEFXINFO_INSTANTIATEFX_OFFSET))(arg, arg2, nullptr);
		}

	};

