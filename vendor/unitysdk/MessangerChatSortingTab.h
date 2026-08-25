#pragma once
#include "unitysdk.h"

#define MESSANGERCHATSORTINGTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x219DFF0)

	inline static constexpr unsigned int MessangerChatSortingTab_TypeDefinitionIndex = 4143;

	class MessangerChatSortingTab : public DurationType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSANGERCHATSORTINGTAB_.CTOR_OFFSET))(nullptr);
		}

	};

