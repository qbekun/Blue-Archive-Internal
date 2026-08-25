#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Transform; }

#define DREAMMAKERCAMERATRANSLATE_START_OFFSET UNITYSDK_OFFSET(0xB90A70)
#define DREAMMAKERCAMERATRANSLATE_SETINITIALWORLDPOS_OFFSET UNITYSDK_OFFSET(0xB90B30)
#define DREAMMAKERCAMERATRANSLATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB90B80)
#define DREAMMAKERCAMERATRANSLATE_GET_UINAME_OFFSET UNITYSDK_OFFSET(0xB911F0)
#define DREAMMAKERCAMERATRANSLATE_TRANSLATE_OFFSET UNITYSDK_OFFSET(0xB90E80)
#define DREAMMAKERCAMERATRANSLATE_SETBOUNDARIES_OFFSET UNITYSDK_OFFSET(0xB91220)
#define DREAMMAKERCAMERATRANSLATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB912E0)

	inline static constexpr unsigned int DreamMakerCameraTranslate_TypeDefinitionIndex = 561;

	class DreamMakerCameraTranslate : public Il2CppObject
	{
	public:
		::System::Single SpeedRate; // 0x18
		::UnityEngine::Camera* Camera; // 0x20
		::UnityEngine::Vector3* initialWorldPos; // 0x28
		::UnityEngine::Vector2* prevScreenPos; // 0x34
		::UnityEngine::Transform* borderLeftObject; // 0x40
		::UnityEngine::Transform* borderRightObject; // 0x48
		::UnityEngine::Transform* borderBottomObject; // 0x50
		::UnityEngine::Transform* borderTopObject; // 0x58
		::UnityEngine::Vector3* LeftMost; // 0x60
		::UnityEngine::Vector3* Bottom; // 0x6C
		::UnityEngine::Vector3* RightMost; // 0x78
		::UnityEngine::Vector3* Top; // 0x84
		::System::Boolean secondTouchUp; // 0x90

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERCAMERATRANSLATE_START_OFFSET))(nullptr);
		}

		::System::Void SetInitialWorldPos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERCAMERATRANSLATE_SETINITIALWORLDPOS_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERCAMERATRANSLATE_UPDATE_OFFSET))(nullptr);
		}

		::System::String* get_UIName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERCAMERATRANSLATE_GET_UINAME_OFFSET))(nullptr);
		}

		::System::Void Translate(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERCAMERATRANSLATE_TRANSLATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetBoundaries(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERCAMERATRANSLATE_SETBOUNDARIES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERCAMERATRANSLATE_.CTOR_OFFSET))(nullptr);
		}

	};

