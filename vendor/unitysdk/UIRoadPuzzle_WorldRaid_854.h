#pragma once
#include "unitysdk.h"

#define UIROADPUZZLE_WORLDRAID_854_.CTOR_OFFSET UNITYSDK_OFFSET(0x27CBB60)
#define UIROADPUZZLE_WORLDRAID_854_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x27CBB70)
#define UIROADPUZZLE_WORLDRAID_854_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0x27CBC50)

	inline static constexpr unsigned int UIRoadPuzzle_WorldRaid_854_TypeDefinitionIndex = 7601;

	class UIRoadPuzzle_WorldRaid_854 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_WORLDRAID_854_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_WORLDRAID_854_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_WORLDRAID_854_CREATESTACKUI_OFFSET))(nullptr);
		}

	};

