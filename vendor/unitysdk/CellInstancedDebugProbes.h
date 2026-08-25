#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Hash128; }
namespace UnityEngine { class Vector3; }

#define CELLINSTANCEDDEBUGPROBES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F8ACD0)

	inline static constexpr unsigned int CellInstancedDebugProbes_TypeDefinitionIndex = 33804;

	class CellInstancedDebugProbes : public Il2CppObject
	{
	public:
		Il2CppObject* probeBuffers; // 0x10
		Il2CppObject* props; // 0x18
		::UnityEngine::Hash128* cellHash; // 0x20
		::UnityEngine::Vector3* cellPosition; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELLINSTANCEDDEBUGPROBES_.CTOR_OFFSET))(nullptr);
		}

	};

