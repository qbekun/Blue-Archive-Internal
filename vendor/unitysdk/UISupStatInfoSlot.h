#pragma once
#include "unitysdk.h"

class UILabel;
namespace FlatData { class StatType; }

#define UISUPSTATINFOSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x25608A0)
#define UISUPSTATINFOSLOT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25608B0)

	inline static constexpr unsigned int UISupStatInfoSlot_TypeDefinitionIndex = 6118;

	class UISupStatInfoSlot : public Il2CppObject
	{
	public:
		UILabel* NameLabel; // 0x18
		UILabel* ValueLabel; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUPSTATINFOSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::FlatData::StatType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::StatType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISUPSTATINFOSLOT_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

