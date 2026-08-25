#pragma once
#include "unitysdk.h"

class ClueSlotState;

#define CLUESLOTVIEWDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x249AC00)

	inline static constexpr unsigned int ClueSlotViewData_TypeDefinitionIndex = 5762;

	class ClueSlotViewData : public Il2CppObject
	{
	public:
		ClueSlotState* State; // 0x10
		::System::Int32 SlotId; // 0x14
		::System::Int64 ClueId; // 0x18
		::System::Boolean IsClueSlotInUse; // 0x20
		::System::Int64 RequiredAmount; // 0x28
		::System::Int64 OwnedAmount; // 0x30
		::System::Int64 RegisteredAmount; // 0x38
		::System::String* SlotClueHintName; // 0x40
		::System::String* SlotClueHintText; // 0x48
		::System::String* ClueName; // 0x50
		::System::String* ClueTexturePathBeforeRegister; // 0x58
		::System::String* ClueTexturePathAfterRegister; // 0x60
		::System::String* ClueTexturePath; // 0x68
		::System::Boolean IsUsingHint; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLUESLOTVIEWDATA_.CTOR_OFFSET))(nullptr);
		}

	};

