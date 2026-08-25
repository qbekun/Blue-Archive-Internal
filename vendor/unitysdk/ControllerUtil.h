#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider; }

#define CONTROLLERUTIL_GETDPADPOINTS_OFFSET UNITYSDK_OFFSET(0xC83630)
#define CONTROLLERUTIL_CONVERTNGUIPOS_OFFSET UNITYSDK_OFFSET(0xC83BF0)
#define CONTROLLERUTIL_.CCTOR_OFFSET UNITYSDK_OFFSET(0xC83F10)
#define CONTROLLERUTIL_.CTOR_OFFSET UNITYSDK_OFFSET(0xC84090)
#define CONTROLLERUTIL_ISBATTLEUI_OFFSET UNITYSDK_OFFSET(0xC7CD20)

	inline static constexpr unsigned int ControllerUtil_TypeDefinitionIndex = 9070;

	class ControllerUtil : public Il2CppObject
	{
	public:
		Il2CppObject* _dpadPointNames; // 0x0

		Il2CppObject* GetDpadPoints(::UnityEngine::GameObject* arg, ::UnityEngine::Camera* arg2, ::System::Int32 arg3)
		{
			return ((Il2CppObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::Camera*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUTIL_GETDPADPOINTS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ConvertNguiPos(::UnityEngine::Camera* arg, ::UnityEngine::Collider* arg2, UIControllerDpadPoint&* arg3)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Collider*, UIControllerDpadPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUTIL_CONVERTNGUIPOS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUTIL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUTIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsBattleUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUTIL_ISBATTLEUI_OFFSET))(nullptr);
		}

	};

