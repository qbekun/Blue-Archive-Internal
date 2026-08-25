#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Collider; }
class UIControllerDpadPoint;

#define DPADPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xC83F00)

	inline static constexpr unsigned int DpadPoint_TypeDefinitionIndex = 9068;

	class DpadPoint : public Il2CppObject
	{
	public:
		::UnityEngine::Collider* Collider; // 0x10
		UIControllerDpadPoint* Point; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPADPOINT_.CTOR_OFFSET))(nullptr);
		}

	};

