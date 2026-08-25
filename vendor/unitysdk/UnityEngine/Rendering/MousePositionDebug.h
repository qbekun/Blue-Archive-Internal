#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class MousePositionDebug; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9FB5160)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x9FB5170)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETINPUTMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x9FB5180)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9FB5250)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETMOUSECLICKPOSITION_OFFSET UNITYSDK_OFFSET(0x9FB5300)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB52F0)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_BUILD_OFFSET UNITYSDK_OFFSET(0x9FB5340)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MousePositionDebug_TypeDefinitionIndex = 33980;

	class MousePositionDebug : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::MousePositionDebug* s_Instance; // 0x0

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_CLEANUP_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetMousePosition(::System::Single arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETMOUSEPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetInputMousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETINPUTMOUSEPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::MousePositionDebug* get_instance()
		{
			return (return (::UnityEngine::Rendering::MousePositionDebug*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GET_INSTANCE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetMouseClickPosition(::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETMOUSECLICKPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Build()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_BUILD_OFFSET))(nullptr);
		}

	};
}

