#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define INCLINEDGRIDSETTING_SORT_OFFSET UNITYSDK_OFFSET(0x25D9E10)

	inline static constexpr unsigned int InclinedGridSetting_TypeDefinitionIndex = 6370;

	class InclinedGridSetting : public Il2CppObject
	{
	public:
		::System::Single CellWidth; // 0x10
		::System::Single CellHeight; // 0x14
		::System::Int32 ColumnLimit; // 0x18
		::System::Single InclinedWidthPerLine; // 0x1C

		::System::Void Sort(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + INCLINEDGRIDSETTING_SORT_OFFSET))(arg, nullptr);
		}

	};

