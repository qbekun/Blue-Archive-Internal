#pragma once
#include "unitysdk.h"

class CameraConstraintArea;
class RenderingAreaController;
namespace UnityEngine { class Component; }

#define RENDERINGAREACONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE4E800)
#define RENDERINGAREACONTROLLER_FINDVALIDAREA_OFFSET UNITYSDK_OFFSET(0xE474F0)
#define RENDERINGAREACONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xE4E810)

	inline static constexpr unsigned int RenderingAreaController_TypeDefinitionIndex = 756;

	class RenderingAreaController : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* constraintAreas; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERINGAREACONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		CameraConstraintArea* FindValidArea(RenderingAreaController* arg, ::UnityEngine::Component* arg2)
		{
			return ((CameraConstraintArea*(*)(RenderingAreaController*, ::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERINGAREACONTROLLER_FINDVALIDAREA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERINGAREACONTROLLER_START_OFFSET))(nullptr);
		}

	};

