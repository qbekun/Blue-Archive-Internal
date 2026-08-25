#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Color&; }
namespace UnityEngine { class Matrix4x4&; }

#define UNITYENGINE_GIZMOS_DRAWLINE_OFFSET UNITYSDK_OFFSET(0xA1F0C80)
#define UNITYENGINE_GIZMOS_DRAWWIRESPHERE_OFFSET UNITYSDK_OFFSET(0xA1F0D00)
#define UNITYENGINE_GIZMOS_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0xA1F0DA0)
#define UNITYENGINE_GIZMOS_DRAWICON_OFFSET UNITYSDK_OFFSET(0xA1F0E40)
#define UNITYENGINE_GIZMOS_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xA1F0EE0)
#define UNITYENGINE_GIZMOS_SET_MATRIX_OFFSET UNITYSDK_OFFSET(0xA1F0F60)
#define UNITYENGINE_GIZMOS_DRAWFRUSTUM_OFFSET UNITYSDK_OFFSET(0xA1F0FE0)
#define UNITYENGINE_GIZMOS_DRAWRAY_OFFSET UNITYSDK_OFFSET(0xA1F10C0)
#define UNITYENGINE_GIZMOS_DRAWLINE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F0CC0)
#define UNITYENGINE_GIZMOS_DRAWWIRESPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F0D50)
#define UNITYENGINE_GIZMOS_DRAWSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F0DF0)
#define UNITYENGINE_GIZMOS_DRAWICON_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F0E90)
#define UNITYENGINE_GIZMOS_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F0F20)
#define UNITYENGINE_GIZMOS_SET_MATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F0FA0)
#define UNITYENGINE_GIZMOS_DRAWFRUSTUM_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F1050)

namespace UnityEngine
{
	inline static constexpr unsigned int Gizmos_TypeDefinitionIndex = 30985;

	class Gizmos : public Il2CppObject
	{
	public:
		::System::Void DrawLine(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWLINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawWireSphere(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIRESPHERE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawSphere(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWSPHERE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawIcon(::UnityEngine::Vector3* arg, ::System::String* str, ::System::Boolean arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::String*, ::System::Boolean, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWICON_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void set_color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_matrix(::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_SET_MATRIX_OFFSET))(arg, nullptr);
		}

		::System::Void DrawFrustum(::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWFRUSTUM_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawRay(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawLine_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWLINE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawWireSphere_Injected(::UnityEngine::Vector3&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIRESPHERE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawSphere_Injected(::UnityEngine::Vector3&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWSPHERE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawIcon_Injected(::UnityEngine::Vector3&* arg, ::System::String* str, ::System::Boolean arg, ::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::String*, ::System::Boolean, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWICON_INJECTED_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void set_color_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_SET_COLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_matrix_Injected(::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_SET_MATRIX_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void DrawFrustum_Injected(::UnityEngine::Vector3&* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWFRUSTUM_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

