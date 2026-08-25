#pragma once
#include "unitysdk.h"

class UIEchelonInfo;

#define ECHELONINFOSLOT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x24D7D60)
#define ECHELONINFOSLOT_INITUI_OFFSET UNITYSDK_OFFSET(0x24D7F60)
#define ECHELONINFOSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D7F70)

	inline static constexpr unsigned int EchelonInfoSlot_TypeDefinitionIndex = 5963;

	class EchelonInfoSlot : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* mainInfo; // 0x18
		UIEchelonInfo* uiEchelonInfo; // 0x20

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONINFOSLOT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void InitUI(UIEchelonInfo* arg)
		{
			((::System::Void(*)(UIEchelonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONINFOSLOT_INITUI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONINFOSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

