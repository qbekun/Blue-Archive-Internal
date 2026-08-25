#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace DebugMX { class DrawType; }
namespace MX::Core::Physics2D::Shapes { class Circle; }
namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Shapes { class OBB; }
namespace MX::Core::Physics2D::Shapes { class Donut; }
namespace MX::Core::Physics2D::Shapes { class Fan; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }

#define DEBUGMX_DRAW_DRAWLINE_OFFSET UNITYSDK_OFFSET(0xDE0B40)
#define DEBUGMX_DRAW_DRAWRAY_OFFSET UNITYSDK_OFFSET(0xDE0B50)
#define DEBUGMX_DRAW_DRAWSHAPE_OFFSET UNITYSDK_OFFSET(0xDE0B60)
#define DEBUGMX_DRAW_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0xDE0B70)
#define DEBUGMX_DRAW_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0xDE0B80)
#define DEBUGMX_DRAW_DRAWOBB_OFFSET UNITYSDK_OFFSET(0xDE0B90)
#define DEBUGMX_DRAW_DRAWOBB_OFFSET UNITYSDK_OFFSET(0xDE0BA0)
#define DEBUGMX_DRAW_DRAWDONUT_OFFSET UNITYSDK_OFFSET(0xDE0BB0)
#define DEBUGMX_DRAW_DRAWDONUT_OFFSET UNITYSDK_OFFSET(0xDE0BC0)
#define DEBUGMX_DRAW_DRAWFAN_OFFSET UNITYSDK_OFFSET(0xDE0BD0)
#define DEBUGMX_DRAW_DRAWFAN_OFFSET UNITYSDK_OFFSET(0xDE0BE0)
#define DEBUGMX_DRAW_DRAWARROW_OFFSET UNITYSDK_OFFSET(0xDE0BF0)
#define DEBUGMX_DRAW_DRAWARROW_OFFSET UNITYSDK_OFFSET(0xDE0C00)
#define DEBUGMX_DRAW_DRAWBODY2D_OFFSET UNITYSDK_OFFSET(0xDE0C10)

namespace DebugMX
{
	inline static constexpr unsigned int Draw_TypeDefinitionIndex = 10137;

	class Draw : public Il2CppObject
	{
	public:
		::System::Void DrawLine(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Color* arg3, ::System::Single arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Color*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWLINE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void DrawRay(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Color* arg3, ::System::Single arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Color*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWRAY_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void DrawShape(::MX::Core::Physics2D::Shapes::Shape* arg, ::UnityEngine::Color* arg2, ::DebugMX::DrawType* arg3)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Shape*, ::UnityEngine::Color*, ::DebugMX::DrawType*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWSHAPE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void DrawCircle(::MX::Core::Physics2D::Shapes::Circle* arg, ::UnityEngine::Color* arg2, ::DebugMX::DrawType* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Circle*, ::UnityEngine::Color*, ::DebugMX::DrawType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWCIRCLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void DrawCircle(::UnityEngine::Vector2* arg, ::System::Single arg2, ::UnityEngine::Color* arg3, ::DebugMX::DrawType* arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Single, ::UnityEngine::Color*, ::DebugMX::DrawType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWCIRCLE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void DrawOBB(::MX::Core::Physics2D::Shapes::OBB* arg, ::UnityEngine::Color* arg2, ::DebugMX::DrawType* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::OBB*, ::UnityEngine::Color*, ::DebugMX::DrawType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWOBB_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void DrawOBB(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::System::Single arg4, ::System::Single arg5, ::UnityEngine::Color* arg6, ::DebugMX::DrawType* arg7, ::System::Boolean arg8)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::UnityEngine::Color*, ::DebugMX::DrawType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWOBB_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void DrawDonut(::MX::Core::Physics2D::Shapes::Donut* arg, ::UnityEngine::Color* arg2, ::DebugMX::DrawType* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Donut*, ::UnityEngine::Color*, ::DebugMX::DrawType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWDONUT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void DrawDonut(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5, ::UnityEngine::Color* arg6, ::DebugMX::DrawType* arg7, ::System::Boolean arg8)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color*, ::DebugMX::DrawType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWDONUT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void DrawFan(::MX::Core::Physics2D::Shapes::Fan* arg, ::UnityEngine::Color* arg2, ::DebugMX::DrawType* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Fan*, ::UnityEngine::Color*, ::DebugMX::DrawType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWFAN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void DrawFan(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Single arg4, ::UnityEngine::Color* arg5, ::DebugMX::DrawType* arg6, ::System::Boolean arg7)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::UnityEngine::Color*, ::DebugMX::DrawType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWFAN_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void DrawArrow(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWARROW_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void DrawArrow(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Color* arg3, ::System::Single arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Color*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWARROW_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void DrawBody2D(::MX::Core::Physics2D::Bodies::Body2D* arg, ::UnityEngine::Color* arg2)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_DRAW_DRAWBODY2D_OFFSET))(arg, arg2, nullptr);
		}

	};
}

