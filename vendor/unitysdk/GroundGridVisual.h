#pragma once
#include "unitysdk.h"

class GroundGrid;

#define GROUNDGRIDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814A80)
#define GROUNDGRIDVISUAL_INIT_OFFSET UNITYSDK_OFFSET(0x1814A90)

	inline static constexpr unsigned int GroundGridVisual_TypeDefinitionIndex = 1245;

	class GroundGridVisual : public Il2CppObject
	{
	public:
		GroundGrid* Grid; // 0x18
		::System::String* GridVersion; // 0x20
		::System::Single Gap; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRIDVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(GroundGrid* arg)
		{
			((::System::Void(*)(GroundGrid*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRIDVISUAL_INIT_OFFSET))(arg, nullptr);
		}

	};

