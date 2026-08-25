#pragma once
#include "unitysdk.h"

namespace UnityEngine { class TouchPhase; }
namespace UnityEngine { class Vector2; }

#define TOUCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F86C0)

	inline static constexpr unsigned int Touch_TypeDefinitionIndex = 217;

	class Touch : public Il2CppObject
	{
	public:
		::System::Int32 fingerId; // 0x10
		::UnityEngine::TouchPhase* phase; // 0x14
		::UnityEngine::Vector2* position; // 0x18
		::System::Int32 tapCount; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOUCH_.CTOR_OFFSET))(nullptr);
		}

	};

