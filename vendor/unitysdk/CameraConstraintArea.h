#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
class CameraConstraintArea;
namespace UnityEngine { class Component; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Camera; }

#define CAMERACONSTRAINTAREA_REFRESH_OFFSET UNITYSDK_OFFSET(0xE47ED0)
#define CAMERACONSTRAINTAREA__ISINTERSECTED_G__ISINTERSECTED_INTERNAL|14_0_OFFSET UNITYSDK_OFFSET(0xE47FC0)
#define CAMERACONSTRAINTAREA_GET_WORLDPOINTS_OFFSET UNITYSDK_OFFSET(0xE481F0)
#define CAMERACONSTRAINTAREA_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xE48200)
#define CAMERACONSTRAINTAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE48210)
#define CAMERACONSTRAINTAREA_ISVALIDTARGET_OFFSET UNITYSDK_OFFSET(0xE48270)
#define CAMERACONSTRAINTAREA_ISINTERSECTED_OFFSET UNITYSDK_OFFSET(0xE48410)
#define CAMERACONSTRAINTAREA_ISCONSTRAINED_OFFSET UNITYSDK_OFFSET(0xE475F0)
#define CAMERACONSTRAINTAREA_AWAKE_OFFSET UNITYSDK_OFFSET(0xE485E0)
#define CAMERACONSTRAINTAREA_ISVALID_OFFSET UNITYSDK_OFFSET(0xE48160)
#define CAMERACONSTRAINTAREA_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xE485F0)
#define CAMERACONSTRAINTAREA_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xE48600)

	inline static constexpr unsigned int CameraConstraintArea_TypeDefinitionIndex = 731;

	class CameraConstraintArea : public Il2CppObject
	{
	public:
		::System::Single left; // 0x18
		::System::Single right; // 0x1C
		::System::Single forward; // 0x20
		::System::Single backward; // 0x24
		::Il2CppArray<::System::Object*>* worldPoints; // 0x28

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERACONSTRAINTAREA_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean _IsIntersected_g__IsIntersected_Internal|14_0(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERACONSTRAINTAREA__ISINTERSECTED_G__ISINTERSECTED_INTERNAL|14_0_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_WorldPoints()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERACONSTRAINTAREA_GET_WORLDPOINTS_OFFSET))(nullptr);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERACONSTRAINTAREA_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERACONSTRAINTAREA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsValidTarget(CameraConstraintArea* arg, ::UnityEngine::Component* arg2)
		{
			return ((::System::Boolean(*)(CameraConstraintArea*, ::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERACONSTRAINTAREA_ISVALIDTARGET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsIntersected(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERACONSTRAINTAREA_ISINTERSECTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsConstrained(::UnityEngine::Camera* arg, CameraConstraintArea* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, CameraConstraintArea*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERACONSTRAINTAREA_ISCONSTRAINED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERACONSTRAINTAREA_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean IsValid(CameraConstraintArea* arg)
		{
			return ((::System::Boolean(*)(CameraConstraintArea*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERACONSTRAINTAREA_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Single get_width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERACONSTRAINTAREA_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERACONSTRAINTAREA_ONVALIDATE_OFFSET))(nullptr);
		}

	};

