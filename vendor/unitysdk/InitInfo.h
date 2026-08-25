#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3Int; }

	inline static constexpr unsigned int InitInfo_TypeDefinitionIndex = 33803;

	class InitInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3Int* pendingMinCellPosition; // 0x10
		::UnityEngine::Vector3Int* pendingMaxCellPosition; // 0x1C

	};

