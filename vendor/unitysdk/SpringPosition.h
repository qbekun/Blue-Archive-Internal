#pragma once
#include "unitysdk.h"

class SpringPosition;
namespace UnityEngine { class Vector3; }
class OnFinished;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
class UIScrollView;

#define SPRINGPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x207F9A0)
#define SPRINGPOSITION_NOTIFYLISTENERS_OFFSET UNITYSDK_OFFSET(0x207FA00)
#define SPRINGPOSITION_START_OFFSET UNITYSDK_OFFSET(0x207FB00)
#define SPRINGPOSITION_BEGIN_OFFSET UNITYSDK_OFFSET(0x207FBB0)
#define SPRINGPOSITION_UPDATE_OFFSET UNITYSDK_OFFSET(0x207FCB0)

	inline static constexpr unsigned int SpringPosition_TypeDefinitionIndex = 161;

	class SpringPosition : public Il2CppObject
	{
	public:
		SpringPosition* current; // 0x0
		::UnityEngine::Vector3* target; // 0x18
		::System::Single strength; // 0x24
		::System::Boolean worldSpace; // 0x28
		::System::Boolean ignoreTimeScale; // 0x29
		::System::Boolean updateScrollView; // 0x2A
		OnFinished* onFinished; // 0x30
		::UnityEngine::GameObject* eventReceiver; // 0x38
		::System::String* callWhenFinished; // 0x40
		::UnityEngine::Transform* mTrans; // 0x48
		::System::Single mThreshold; // 0x50
		UIScrollView* mSv; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRINGPOSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void NotifyListeners()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRINGPOSITION_NOTIFYLISTENERS_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRINGPOSITION_START_OFFSET))(nullptr);
		}

		SpringPosition* Begin(::UnityEngine::GameObject* arg, ::UnityEngine::Vector3* arg2, ::System::Single arg3)
		{
			return ((SpringPosition*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPRINGPOSITION_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRINGPOSITION_UPDATE_OFFSET))(nullptr);
		}

	};

