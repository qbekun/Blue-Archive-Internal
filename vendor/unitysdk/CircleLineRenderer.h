#pragma once
#include "unitysdk.h"

namespace UnityEngine { class LineRenderer; }

#define CIRCLELINERENDERER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x20B20B0)
#define CIRCLELINERENDERER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x20B20C0)
#define CIRCLELINERENDERER_REFRESHLINES_OFFSET UNITYSDK_OFFSET(0x20B20E0)
#define CIRCLELINERENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B2480)
#define CIRCLELINERENDERER_REFRESHLINE_OFFSET UNITYSDK_OFFSET(0x20B2250)

	inline static constexpr unsigned int CircleLineRenderer_TypeDefinitionIndex = 3585;

	class CircleLineRenderer : public Il2CppObject
	{
	public:
		::System::Single minRadius; // 0x0
		::UnityEngine::LineRenderer* frontLine; // 0x18
		::UnityEngine::LineRenderer* rearLine; // 0x20
		::System::Single radius; // 0x28
		::System::Single height; // 0x2C

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CIRCLELINERENDERER_GET_RADIUS_OFFSET))(nullptr);
		}

		::System::Void set_Radius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCLELINERENDERER_SET_RADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshLines()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIRCLELINERENDERER_REFRESHLINES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIRCLELINERENDERER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshLine(::UnityEngine::LineRenderer* arg, ::System::Int32 arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::LineRenderer*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCLELINERENDERER_REFRESHLINE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

