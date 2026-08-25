#pragma once
#include "unitysdk.h"

class UISprite;

#define BUFFICONSEMPTYSLOTDESIGN_.CTOR_OFFSET UNITYSDK_OFFSET(0x25D8C30)
#define BUFFICONSEMPTYSLOTDESIGN_INIT_OFFSET UNITYSDK_OFFSET(0x25D8C60)
#define BUFFICONSEMPTYSLOTDESIGN_CLEAR_OFFSET UNITYSDK_OFFSET(0x25D8D10)
#define BUFFICONSEMPTYSLOTDESIGN_SWITCH_OFFSET UNITYSDK_OFFSET(0x25D8DC0)

	inline static constexpr unsigned int BuffIconsEmptySlotDesign_TypeDefinitionIndex = 6369;

	class BuffIconsEmptySlotDesign : public Il2CppObject
	{
	public:
		Il2CppObject* emptySlots; // 0x58
		UISprite* moreBuffMarker; // 0x60
		::System::Single moreBuffAlpha; // 0x68
		::System::Single noMoreBuffAlpha; // 0x6C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSEMPTYSLOTDESIGN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSEMPTYSLOTDESIGN_INIT_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSEMPTYSLOTDESIGN_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Switch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSEMPTYSLOTDESIGN_SWITCH_OFFSET))(nullptr);
		}

	};

