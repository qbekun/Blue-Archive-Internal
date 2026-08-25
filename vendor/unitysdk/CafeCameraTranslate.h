#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }
class CafeInputHandler;
namespace UnityEngine { class Vector2; }

#define CAFECAMERATRANSLATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x19AB750)
#define CAFECAMERATRANSLATE_SET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x19AB7F0)
#define CAFECAMERATRANSLATE_GET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x19AB800)
#define CAFECAMERATRANSLATE_SETINITIALWORLDPOS_OFFSET UNITYSDK_OFFSET(0x19AB810)
#define CAFECAMERATRANSLATE_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x19AB860)
#define CAFECAMERATRANSLATE_START_OFFSET UNITYSDK_OFFSET(0x19ABBE0)
#define CAFECAMERATRANSLATE_SETBOUNDARIES_OFFSET UNITYSDK_OFFSET(0x19ABD00)
#define CAFECAMERATRANSLATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x19ABE30)

	inline static constexpr unsigned int CafeCameraTranslate_TypeDefinitionIndex = 1330;

	class CafeCameraTranslate : public Il2CppObject
	{
	public:
		::System::Single SpeedRate; // 0x18
		::UnityEngine::Camera* Camera; // 0x20
		::UnityEngine::Vector3* initialWorldPos; // 0x28
		CafeInputHandler* cafeInputHandler; // 0x38
		::UnityEngine::Vector2* prevScreenPos; // 0x40
		::UnityEngine::Vector3* LeftMost; // 0x48
		::UnityEngine::Vector3* Bottom; // 0x54
		::UnityEngine::Vector3* RightMost; // 0x60
		::UnityEngine::Vector3* Top; // 0x6C
		::System::Single _CellSize_k__BackingField; // 0x78
		::System::Boolean secondTouchUp; // 0x7C
		::System::Single DragThreshold; // 0x80
		::System::String* lastUIName; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECAMERATRANSLATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CellSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAFECAMERATRANSLATE_SET_CELLSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single get_CellSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECAMERATRANSLATE_GET_CELLSIZE_OFFSET))(nullptr);
		}

		::System::Void SetInitialWorldPos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECAMERATRANSLATE_SETINITIALWORLDPOS_OFFSET))(nullptr);
		}

		::System::Void Translate(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECAMERATRANSLATE_TRANSLATE_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECAMERATRANSLATE_START_OFFSET))(nullptr);
		}

		::System::Void SetBoundaries(Il2CppObject* arg, ::System::Single arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAFECAMERATRANSLATE_SETBOUNDARIES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECAMERATRANSLATE_UPDATE_OFFSET))(nullptr);
		}

	};

