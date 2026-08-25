#pragma once
#include "unitysdk.h"

class UIDraggableCamera;
namespace UnityEngine { class Vector2; }

#define UIDRAGCAMERA_ONPRESS_OFFSET UNITYSDK_OFFSET(0x9FD1C0)
#define UIDRAGCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FD420)
#define UIDRAGCAMERA_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x9FD430)
#define UIDRAGCAMERA_AWAKE_OFFSET UNITYSDK_OFFSET(0x9FD6A0)
#define UIDRAGCAMERA_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9FD760)

	inline static constexpr unsigned int UIDragCamera_TypeDefinitionIndex = 29;

	class UIDragCamera : public Il2CppObject
	{
	public:
		UIDraggableCamera* draggableCamera; // 0x18

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGCAMERA_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGCAMERA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnScroll(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGCAMERA_ONSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAGCAMERA_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAGCAMERA_ONDRAG_OFFSET))(arg, nullptr);
		}

	};

