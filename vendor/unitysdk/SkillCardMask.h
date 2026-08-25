#pragma once
#include "unitysdk.h"

#define SKILLCARDMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2124E70)
#define SKILLCARDMASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2124F00)
#define SKILLCARDMASK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2124F10)

	inline static constexpr unsigned int SkillCardMask_TypeDefinitionIndex = 3902;

	class SkillCardMask : public Il2CppObject
	{
	public:
		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDMASK_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDMASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDMASK_ONDISABLE_OFFSET))(nullptr);
		}

	};

