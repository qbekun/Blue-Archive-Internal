#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }

#define CAMERAPROPERTIES_SET_LEFTMARGIN_OFFSET UNITYSDK_OFFSET(0xE49BD0)
#define CAMERAPROPERTIES_SET_CAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xE49BE0)
#define CAMERAPROPERTIES_SET_VIEWPORTCENTER_OFFSET UNITYSDK_OFFSET(0xE49BF0)
#define CAMERAPROPERTIES_SET_IGNOREENEMIES_OFFSET UNITYSDK_OFFSET(0xE49C00)
#define CAMERAPROPERTIES_GET_VIEWPORTCENTER_OFFSET UNITYSDK_OFFSET(0xE49C10)
#define CAMERAPROPERTIES_GET_IGNOREENEMIES_OFFSET UNITYSDK_OFFSET(0xE49C20)
#define CAMERAPROPERTIES_.CTOR_OFFSET UNITYSDK_OFFSET(0xE43A60)
#define CAMERAPROPERTIES_GET_LEFTMARGIN_OFFSET UNITYSDK_OFFSET(0xE49C30)
#define CAMERAPROPERTIES_SET_BOTTOMMARGIN_OFFSET UNITYSDK_OFFSET(0xE49C40)
#define CAMERAPROPERTIES_GET_BOTTOMMARGIN_OFFSET UNITYSDK_OFFSET(0xE49C50)
#define CAMERAPROPERTIES_GET_CAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xE49C60)

	inline static constexpr unsigned int CameraProperties_TypeDefinitionIndex = 736;

	class CameraProperties : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* _ViewportCenter_k__BackingField; // 0x10
		::System::Boolean _IgnoreEnemies_k__BackingField; // 0x18
		::UnityEngine::Vector3* _CameraForward_k__BackingField; // 0x1C
		::System::Single _LeftMargin_k__BackingField; // 0x28
		::System::Single _BottomMargin_k__BackingField; // 0x2C

		::System::Void set_LeftMargin(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAPROPERTIES_SET_LEFTMARGIN_OFFSET))(arg, nullptr);
		}

		::System::Void set_CameraForward(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAPROPERTIES_SET_CAMERAFORWARD_OFFSET))(arg, nullptr);
		}

		::System::Void set_ViewportCenter(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAPROPERTIES_SET_VIEWPORTCENTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_IgnoreEnemies(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAPROPERTIES_SET_IGNOREENEMIES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_ViewportCenter()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAPROPERTIES_GET_VIEWPORTCENTER_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreEnemies()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAPROPERTIES_GET_IGNOREENEMIES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::System::Boolean arg2, ::UnityEngine::Vector3* arg3, ::System::Single arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Boolean, ::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAPROPERTIES_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Single get_LeftMargin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAPROPERTIES_GET_LEFTMARGIN_OFFSET))(nullptr);
		}

		::System::Void set_BottomMargin(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAPROPERTIES_SET_BOTTOMMARGIN_OFFSET))(arg, nullptr);
		}

		::System::Single get_BottomMargin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAPROPERTIES_GET_BOTTOMMARGIN_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_CameraForward()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAPROPERTIES_GET_CAMERAFORWARD_OFFSET))(nullptr);
		}

	};

