#pragma once
#include "unitysdk.h"

#define ENDINGBANNERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C09B80)

	inline static constexpr unsigned int EndingBannerAction_TypeDefinitionIndex = 26564;

	class EndingBannerAction : public Il2CppObject
	{
	public:
		Il2CppObject* clickAction; // 0x10
		Il2CppObject* failedAction; // 0x18
		::System::Action* dismissAction; // 0x20
		::System::Action* exitAction; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDINGBANNERACTION_.CTOR_OFFSET))(nullptr);
		}

	};

