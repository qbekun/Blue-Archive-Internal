#pragma once
#include "unitysdk.h"

class UIWidget;
class PortraitSpineCharacter;

#define UCRESULTSPINESET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD0440)
#define UCRESULTSPINESET_SET_SPINECHARACTER_OFFSET UNITYSDK_OFFSET(0xDD0450)
#define UCRESULTSPINESET_GET_SPINECHARACTER_OFFSET UNITYSDK_OFFSET(0xDD0460)

	inline static constexpr unsigned int UCResultSpineSet_TypeDefinitionIndex = 10056;

	class UCResultSpineSet : public Il2CppObject
	{
	public:
		UIWidget* SpineParentWidget; // 0x10
		UIWidget* SpineTargetRenderQueueWidget; // 0x18
		PortraitSpineCharacter* _SpineCharacter_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCRESULTSPINESET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SpineCharacter(PortraitSpineCharacter* arg)
		{
			((::System::Void(*)(PortraitSpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UCRESULTSPINESET_SET_SPINECHARACTER_OFFSET))(arg, nullptr);
		}

		PortraitSpineCharacter* get_SpineCharacter()
		{
			return ((PortraitSpineCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UCRESULTSPINESET_GET_SPINECHARACTER_OFFSET))(nullptr);
		}

	};

