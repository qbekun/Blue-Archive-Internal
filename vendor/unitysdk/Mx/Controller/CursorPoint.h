#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
class UIPanel;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class MonoBehaviour; }

#define MX_CONTROLLER_CURSORPOINT_GET_ISMOVEABLEDPAD_OFFSET UNITYSDK_OFFSET(0xEF7F20)
#define MX_CONTROLLER_CURSORPOINT_ISINPANEL_OFFSET UNITYSDK_OFFSET(0xEF7F30)
#define MX_CONTROLLER_CURSORPOINT_GET_TRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0xEF8080)
#define MX_CONTROLLER_CURSORPOINT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEF80B0)
#define MX_CONTROLLER_CURSORPOINT_RESETPOSITIONINSCREEN_OFFSET UNITYSDK_OFFSET(0xEF8260)
#define MX_CONTROLLER_CURSORPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF8470)
#define MX_CONTROLLER_CURSORPOINT_ISACTUALLYZEROSIZE_OFFSET UNITYSDK_OFFSET(0xEF8510)
#define MX_CONTROLLER_CURSORPOINT_GET_POSITIONINSCREEN_OFFSET UNITYSDK_OFFSET(0xEF8730)
#define MX_CONTROLLER_CURSORPOINT_USEABLE_OFFSET UNITYSDK_OFFSET(0xEF87E0)
#define MX_CONTROLLER_CURSORPOINT_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xEF8B80)

namespace MX::Controller
{
	inline static constexpr unsigned int CursorPoint_TypeDefinitionIndex = 11142;

	class CursorPoint : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* Transform; // 0x10
		::UnityEngine::Vector3* _positionInScreen; // 0x18
		::System::Boolean _isSettingPositionInScreen; // 0x24
		UIPanel* ScrollPanel; // 0x28
		::System::Boolean _autoScroll; // 0x30
		::System::Boolean _isMoveableDpad; // 0x31
		::UnityEngine::Collider* _collider; // 0x38
		::Il2CppArray<::System::Object*>* _colliderCorners; // 0x40

		::System::Boolean get_IsMoveableDpad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONTROLLER_CURSORPOINT_GET_ISMOVEABLEDPAD_OFFSET))(nullptr);
		}

		::System::Boolean IsInPanel(UIPanel* arg, ::UnityEngine::Collider* arg2, ::System::Single arg3)
		{
			return ((::System::Boolean(*)(UIPanel*, ::UnityEngine::Collider*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONTROLLER_CURSORPOINT_ISINPANEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* get_TransformPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONTROLLER_CURSORPOINT_GET_TRANSFORMPATH_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONTROLLER_CURSORPOINT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void ResetPositionInScreen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONTROLLER_CURSORPOINT_RESETPOSITIONINSCREEN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONTROLLER_CURSORPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsActuallyZeroSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONTROLLER_CURSORPOINT_ISACTUALLYZEROSIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_PositionInScreen()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONTROLLER_CURSORPOINT_GET_POSITIONINSCREEN_OFFSET))(nullptr);
		}

		::System::Boolean Useable(UIPanel* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(UIPanel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONTROLLER_CURSORPOINT_USEABLE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Collider* get_Collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONTROLLER_CURSORPOINT_GET_COLLIDER_OFFSET))(nullptr);
		}

	};
}

