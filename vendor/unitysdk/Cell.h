#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3Int; }

#define CELL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F8B0B0)

	inline static constexpr unsigned int Cell_TypeDefinitionIndex = 33795;

	class Cell : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x10
		::UnityEngine::Vector3Int* position; // 0x14
		Il2CppObject* bricks; // 0x20
		::Il2CppArray<::System::Object*>* probePositions; // 0x28
		::Il2CppArray<::System::Object*>* sh; // 0x30
		::Il2CppArray<::System::Object*>* validity; // 0x38
		::System::Int32 minSubdiv; // 0x40
		::System::Int32 flatIdxInCellIndices; // 0x44
		::System::Boolean loaded; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELL_.CTOR_OFFSET))(nullptr);
		}

	};

