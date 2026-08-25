#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class LightType; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Rendering { class VisibleLightFlags; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering { class VisibleLight; }

#define UNITYENGINE_RENDERING_VISIBLELIGHT_GET_LIGHT_OFFSET UNITYSDK_OFFSET(0xA266680)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GET_LIGHTTYPE_OFFSET UNITYSDK_OFFSET(0xA266700)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GET_FINALCOLOR_OFFSET UNITYSDK_OFFSET(0xA266710)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0xA266720)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GET_RANGE_OFFSET UNITYSDK_OFFSET(0xA266750)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GET_SPOTANGLE_OFFSET UNITYSDK_OFFSET(0xA266760)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA266770)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA266A60)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA266B30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VisibleLight_TypeDefinitionIndex = 31581;

	class VisibleLight : public Il2CppObject
	{
	public:
		::UnityEngine::LightType* m_LightType; // 0x10
		::UnityEngine::Color* m_FinalColor; // 0x14
		::UnityEngine::Rect* m_ScreenRect; // 0x24
		::UnityEngine::Matrix4x4* m_LocalToWorldMatrix; // 0x34
		::System::Single m_Range; // 0x74
		::System::Single m_SpotAngle; // 0x78
		::System::Int32 m_InstanceId; // 0x7C
		::UnityEngine::Rendering::VisibleLightFlags* m_Flags; // 0x80

		::UnityEngine::Light* get_light()
		{
			return (return (::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GET_LIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::LightType* get_lightType()
		{
			return (return (::UnityEngine::LightType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GET_LIGHTTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_finalColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GET_FINALCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::Matrix4x4* get_localToWorldMatrix()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GET_LOCALTOWORLDMATRIX_OFFSET))(nullptr);
		}

		::System::Single get_range()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GET_RANGE_OFFSET))(nullptr);
		}

		::System::Single get_spotAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GET_SPOTANGLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::VisibleLight* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::VisibleLight*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

