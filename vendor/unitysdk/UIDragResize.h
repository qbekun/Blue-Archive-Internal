#pragma once
#include "unitysdk.h"

class UIWidget;
class Pivot;
namespace UnityEngine { class Plane; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define UIDRAGRESIZE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA033C0)
#define UIDRAGRESIZE_ONDRAGSTART_OFFSET UNITYSDK_OFFSET(0xA033E0)
#define UIDRAGRESIZE_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA03620)
#define UIDRAGRESIZE_ONDRAGEND_OFFSET UNITYSDK_OFFSET(0xA03960)

	inline static constexpr unsigned int UIDragResize_TypeDefinitionIndex = 37;

	class UIDragResize : public Il2CppObject
	{
	public:
		UIWidget* target; // 0x18
		Pivot* pivot; // 0x20
		::System::Int32 minWidth; // 0x24
		::System::Int32 minHeight; // 0x28
		::System::Int32 maxWidth; // 0x2C
		::System::Int32 maxHeight; // 0x30
		::System::Boolean updateAnchors; // 0x34
		::UnityEngine::Plane* mPlane; // 0x38
		::UnityEngine::Vector3* mRayPos; // 0x48
		::UnityEngine::Vector3* mLocalPos; // 0x54
		::System::Int32 mWidth; // 0x60
		::System::Int32 mHeight; // 0x64
		::System::Boolean mDragging; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGRESIZE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDragStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGRESIZE_ONDRAGSTART_OFFSET))(nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGRESIZE_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnDragEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGRESIZE_ONDRAGEND_OFFSET))(nullptr);
		}

	};

