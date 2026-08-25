#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
class CharacterVisual;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Matrix4x4; }

#define CAMERATARGET_INCLUDE_OFFSET UNITYSDK_OFFSET(0xE4C2E0)
#define CAMERATARGET_GET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xE4C510)
#define CAMERATARGET_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0xE4C530)
#define CAMERATARGET_HASCOMMANDID_OFFSET UNITYSDK_OFFSET(0xE4C460)
#define CAMERATARGET_SET_ISEXCLUDED_OFFSET UNITYSDK_OFFSET(0xE4C650)
#define CAMERATARGET_GET_ISEXCLUDED_OFFSET UNITYSDK_OFFSET(0xE4C660)
#define CAMERATARGET_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0xE4C670)
#define CAMERATARGET_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0xE4C680)
#define CAMERATARGET_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xE4BDF0)
#define CAMERATARGET_SET_ISAIMED_OFFSET UNITYSDK_OFFSET(0xE4C690)
#define CAMERATARGET_UPDATE_OFFSET UNITYSDK_OFFSET(0xE4C010)
#define CAMERATARGET_SET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xE4C6A0)
#define CAMERATARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0xE4C310)
#define CAMERATARGET_EXCLUDE_OFFSET UNITYSDK_OFFSET(0xE4C2C0)
#define CAMERATARGET_GET_ISAIMED_OFFSET UNITYSDK_OFFSET(0xE4C6B0)

	inline static constexpr unsigned int CameraTarget_TypeDefinitionIndex = 744;

	class CameraTarget : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* mainCamera; // 0x10
		::System::Single deadTime; // 0x0
		CharacterVisual* _Actor_k__BackingField; // 0x18
		::UnityEngine::Vector3* _WorldPosition_k__BackingField; // 0x20
		::System::Boolean _IsAimed_k__BackingField; // 0x2C
		::System::Boolean _IsExcluded_k__BackingField; // 0x2D
		::UnityEngine::Vector3* hpBarOffset; // 0x30
		::System::Single timeMargin; // 0x3C
		::System::Boolean isPositionNaN; // 0x40
		::System::Boolean isActorEngaged; // 0x41
		::System::Boolean isInViewport; // 0x42

		::System::Void Include(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_INCLUDE_OFFSET))(str, nullptr);
		}

		::UnityEngine::Vector3* get_WorldPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_GET_WORLDPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_isAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_GET_ISALIVE_OFFSET))(nullptr);
		}

		::System::Boolean HasCommandId(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_HASCOMMANDID_OFFSET))(str, nullptr);
		}

		::System::Void set_IsExcluded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_SET_ISEXCLUDED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsExcluded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_GET_ISEXCLUDED_OFFSET))(nullptr);
		}

		CharacterVisual* get_Actor()
		{
			return ((CharacterVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_GET_ACTOR_OFFSET))(nullptr);
		}

		::System::Void set_Actor(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_SET_ACTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_IsAimed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_SET_ISAIMED_OFFSET))(arg, nullptr);
		}

		::System::Boolean Update(::UnityEngine::Matrix4x4* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_WorldPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_SET_WORLDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Camera* arg, CharacterVisual* arg2)
		{
			((::System::Void(*)(::UnityEngine::Camera*, CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Exclude(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_EXCLUDE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsAimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGET_GET_ISAIMED_OFFSET))(nullptr);
		}

	};

