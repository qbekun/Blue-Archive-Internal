#pragma once
#include "unitysdk.h"

namespace MX::Controller { class CursorPointInfo; }
namespace UnityEngine { class Vector2; }
namespace MX::Controller { class CursorStyle; }
namespace MX::Controller { class CursorPoint; }
class MXUIKeyMapping;
namespace UnityEngine::InputSystem::Controls { class DpadControl; }
class UIPanel;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
class UIBase;
namespace MX::SaveData { class DeviceOption; }
namespace UnityEngine { class Texture2D; }
namespace MX::SaveData { class ControllerCursorSpeed; }
namespace MX::SaveData { class ToggleValue; }

#define CONTROLLERMOUSE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC7B080)
#define CONTROLLERMOUSE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC7B710)
#define CONTROLLERMOUSE_UPDATECURSORACTIVE_OFFSET UNITYSDK_OFFSET(0xC7DFE0)
#define CONTROLLERMOUSE_UPDATECONTROLLERMOUSEMOVE_OFFSET UNITYSDK_OFFSET(0xC7E130)
#define CONTROLLERMOUSE_UPDATEMOUSECLICK_OFFSET UNITYSDK_OFFSET(0xC7EC40)
#define CONTROLLERMOUSE_UPDATEDPAD_OFFSET UNITYSDK_OFFSET(0xC7E630)
#define CONTROLLERMOUSE_MOVEDPADCURSORCOROUTINE_OFFSET UNITYSDK_OFFSET(0xC7EFF0)
#define CONTROLLERMOUSE_GETSOFTCLIPPANEL_OFFSET UNITYSDK_OFFSET(0xC7F0A0)
#define CONTROLLERMOUSE_CONVERTSCREENTOMOUSEPOS_OFFSET UNITYSDK_OFFSET(0xC7F6A0)
#define CONTROLLERMOUSE_MOVECURSORUSEWORLDPOS_OFFSET UNITYSDK_OFFSET(0xC7BCA0)
#define CONTROLLERMOUSE_MOVECURSORUSEWORLDPOS_KEYBOARD_OFFSET UNITYSDK_OFFSET(0xC7F7A0)
#define CONTROLLERMOUSE_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xC7F8C0)
#define CONTROLLERMOUSE_MOVECURSORUSESCREENPOS_OFFSET UNITYSDK_OFFSET(0xC7BAC0)
#define CONTROLLERMOUSE_GETCURSORPOINTINFO_OFFSET UNITYSDK_OFFSET(0xC7FA20)
#define CONTROLLERMOUSE_ADDSTUDENTSELECTMAPPING_OFFSET UNITYSDK_OFFSET(0xC80300)
#define CONTROLLERMOUSE_SETACTIVESTUDENTSELECTICON_OFFSET UNITYSDK_OFFSET(0xC7EF60)
#define CONTROLLERMOUSE_SETCURSORPOINTINFO_OFFSET UNITYSDK_OFFSET(0xC7FAF0)
#define CONTROLLERMOUSE_SETPCCURSORSTYLE_OFFSET UNITYSDK_OFFSET(0xC807C0)
#define CONTROLLERMOUSE_UPDATECURSORTEXTURE_OFFSET UNITYSDK_OFFSET(0xC7EB70)
#define CONTROLLERMOUSE_CREATESCALEDTEXTURE_OFFSET UNITYSDK_OFFSET(0xC80BF0)
#define CONTROLLERMOUSE_SETCURSORTEXTURE_CONTROLLER_OFFSET UNITYSDK_OFFSET(0xC81040)
#define CONTROLLERMOUSE_SETCURSORTEXTURE_OFFSET UNITYSDK_OFFSET(0xC808F0)
#define CONTROLLERMOUSE_SETCURSORSPEED_OFFSET UNITYSDK_OFFSET(0xC81050)
#define CONTROLLERMOUSE_SETCURSORSPEED_OFFSET UNITYSDK_OFFSET(0xC81230)
#define CONTROLLERMOUSE_SETCURSORAUTOFOCUS_OFFSET UNITYSDK_OFFSET(0xC81390)
#define CONTROLLERMOUSE_SETCURSORAUTOFOCUS_OFFSET UNITYSDK_OFFSET(0xC814F0)
#define CONTROLLERMOUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC799A0)
#define CONTROLLERMOUSE__SETCURSORPOINTINFO_G__ADD|29_0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ControllerMouse_TypeDefinitionIndex = 9061;

	class ControllerMouse : public Il2CppObject
	{
	public:
		Il2CppObject* _containUI; // 0x10
		Il2CppObject* textureResourcePaths; // 0x18
		Il2CppObject* textureResources; // 0x20
		Il2CppObject* downTextureResources; // 0x28
		::MX::Controller::CursorPointInfo* _cursorPointInfo; // 0x30
		::UnityEngine::Vector2* _frac; // 0x38
		::MX::Controller::CursorStyle* _pcCursorStyle; // 0x40
		::MX::Controller::CursorPoint* _dpadTarget; // 0x48
		MXUIKeyMapping* _tempStudentKeyMapping; // 0x50
		::System::Collections::IEnumerator* _moveDpadCursorCoroutine; // 0x58
		::System::Boolean _moving; // 0x60
		::System::Boolean _waitingToSendUp; // 0x61
		::System::Int32 _downSentFrame; // 0x64

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnLateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_ONLATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateCursorActive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_UPDATECURSORACTIVE_OFFSET))(nullptr);
		}

		::System::Void UpdateControllerMouseMove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_UPDATECONTROLLERMOUSEMOVE_OFFSET))(nullptr);
		}

		::System::Void UpdateMouseClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_UPDATEMOUSECLICK_OFFSET))(nullptr);
		}

		::System::Void UpdateDpad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_UPDATEDPAD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* MoveDpadCursorCoroutine(::UnityEngine::InputSystem::Controls::DpadControl* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::InputSystem::Controls::DpadControl*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_MOVEDPADCURSORCOROUTINE_OFFSET))(arg, nullptr);
		}

		UIPanel* GetSoftClipPanel(bool&* arg)
		{
			return ((UIPanel*(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_GETSOFTCLIPPANEL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* ConvertScreenToMousePos(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_CONVERTSCREENTOMOUSEPOS_OFFSET))(arg, nullptr);
		}

		::System::Void MoveCursorUseWorldPos(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_MOVECURSORUSEWORLDPOS_OFFSET))(arg, nullptr);
		}

		::System::Void MoveCursorUseWorldPos_Keyboard(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_MOVECURSORUSEWORLDPOS_KEYBOARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsHittable(::MX::Controller::CursorPoint* arg)
		{
			return ((::System::Boolean(*)(::MX::Controller::CursorPoint*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_ISHITTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void MoveCursorUseScreenPos(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_MOVECURSORUSESCREENPOS_OFFSET))(arg, nullptr);
		}

		::MX::Controller::CursorPointInfo* GetCursorPointInfo()
		{
			return ((::MX::Controller::CursorPointInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_GETCURSORPOINTINFO_OFFSET))(nullptr);
		}

		::System::Void AddStudentSelectMapping(::System::String* str, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_ADDSTUDENTSELECTMAPPING_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetActiveStudentSelectIcon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_SETACTIVESTUDENTSELECTICON_OFFSET))(arg, nullptr);
		}

		::System::Void SetCursorPointInfo(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_SETCURSORPOINTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetPCCursorStyle(::MX::SaveData::DeviceOption* arg)
		{
			((::System::Void(*)(::MX::SaveData::DeviceOption*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_SETPCCURSORSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCursorTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_UPDATECURSORTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* CreateScaledTexture(::UnityEngine::Texture2D* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Texture2D*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_CREATESCALEDTEXTURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCursorTexture_Controller()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_SETCURSORTEXTURE_CONTROLLER_OFFSET))(nullptr);
		}

		::System::Void SetCursorTexture(::MX::Controller::CursorStyle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Controller::CursorStyle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_SETCURSORTEXTURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCursorSpeed(::MX::SaveData::ControllerCursorSpeed* arg)
		{
			((::System::Void(*)(::MX::SaveData::ControllerCursorSpeed*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_SETCURSORSPEED_OFFSET))(arg, nullptr);
		}

		::System::Void SetCursorSpeed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_SETCURSORSPEED_OFFSET))(nullptr);
		}

		::System::Void SetCursorAutoFocus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_SETCURSORAUTOFOCUS_OFFSET))(nullptr);
		}

		::System::Void SetCursorAutoFocus(::MX::SaveData::ToggleValue* arg)
		{
			((::System::Void(*)(::MX::SaveData::ToggleValue*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_SETCURSORAUTOFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetCursorPointInfo_g__Add|29_0(<>c__DisplayClass29_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass29_0&*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERMOUSE__SETCURSORPOINTINFO_G__ADD|29_0_OFFSET))(arg, nullptr);
		}

	};

