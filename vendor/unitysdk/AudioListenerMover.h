#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define AUDIOLISTENERMOVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20AB640)
#define AUDIOLISTENERMOVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20AB650)
#define AUDIOLISTENERMOVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20AB700)

	inline static constexpr unsigned int AudioListenerMover_TypeDefinitionIndex = 3550;

	class AudioListenerMover : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* target; // 0x18
		::UnityEngine::Vector3* offset; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMOVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMOVER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMOVER_ONDISABLE_OFFSET))(nullptr);
		}

	};

