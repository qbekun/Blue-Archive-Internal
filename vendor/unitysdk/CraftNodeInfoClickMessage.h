#pragma once
#include "unitysdk.h"

class UICraftNodeIcon;

#define CRAFTNODEINFOCLICKMESSAGE_GET_NODESLOTINFO_OFFSET UNITYSDK_OFFSET(0x2394580)
#define CRAFTNODEINFOCLICKMESSAGE_SET_NODESLOTINFO_OFFSET UNITYSDK_OFFSET(0x2394590)
#define CRAFTNODEINFOCLICKMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2393AC0)

	inline static constexpr unsigned int CraftNodeInfoClickMessage_TypeDefinitionIndex = 5165;

	class CraftNodeInfoClickMessage : public ::TriInspector::TitleAttribute
	{
	public:
		UICraftNodeIcon* _NodeSlotInfo_k__BackingField; // 0x18

		UICraftNodeIcon* get_NodeSlotInfo()
		{
			return ((UICraftNodeIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTNODEINFOCLICKMESSAGE_GET_NODESLOTINFO_OFFSET))(nullptr);
		}

		::System::Void set_NodeSlotInfo(UICraftNodeIcon* arg)
		{
			((::System::Void(*)(UICraftNodeIcon*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTNODEINFOCLICKMESSAGE_SET_NODESLOTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(UICraftNodeIcon* arg)
		{
			((::System::Void(*)(UICraftNodeIcon*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTNODEINFOCLICKMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

