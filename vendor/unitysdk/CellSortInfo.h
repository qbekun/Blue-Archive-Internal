#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define CELLSORTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F858F0)
#define CELLSORTINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9F8B0C0)

	inline static constexpr unsigned int CellSortInfo_TypeDefinitionIndex = 33797;

	class CellSortInfo : public Il2CppObject
	{
	public:
		::System::String* sourceAsset; // 0x10
		Cell* cell; // 0x18
		::System::Single distanceToCamera; // 0x20
		::UnityEngine::Vector3* position; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELLSORTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CELLSORTINFO_COMPARETO_OFFSET))(arg, nullptr);
		}

	};

