#pragma once
#include "unitysdk.h"

#define IHIGHLITABLE_OFFHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define IHIGHLITABLE_ONINSKILLRANGEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define IHIGHLITABLE_REFRESHHIGHLIGHTUISETTING_OFFSET UNITYSDK_OFFSET(0x000000)
#define IHIGHLITABLE_GET_SELECTSKILLTARGETHIGHLIGHTINFOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define IHIGHLITABLE_GET_INSKILLRANGEHIGHLIGHTINFOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define IHIGHLITABLE_GET_SKILLHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define IHIGHLITABLE_ONSKILLTARGETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IHighlitable_TypeDefinitionIndex = 2970;

	class IHighlitable : public Il2CppObject
	{
	public:
		::System::Void OffHighlight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIGHLITABLE_OFFHIGHLIGHT_OFFSET))(nullptr);
		}

		::System::Void OnInSkillRangeHighlight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIGHLITABLE_ONINSKILLRANGEHIGHLIGHT_OFFSET))(nullptr);
		}

		::System::Void RefreshHighlightUISetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIGHLITABLE_REFRESHHIGHLIGHTUISETTING_OFFSET))(nullptr);
		}

		Il2CppObject* get_SelectSkillTargetHighlightInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIGHLITABLE_GET_SELECTSKILLTARGETHIGHLIGHTINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* get_InSkillRangeHighlightInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIGHLITABLE_GET_INSKILLRANGEHIGHLIGHTINFOS_OFFSET))(nullptr);
		}

		::System::Boolean get_SkillHighlighted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIGHLITABLE_GET_SKILLHIGHLIGHTED_OFFSET))(nullptr);
		}

		::System::Void OnSkillTargetHighlight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIGHLITABLE_ONSKILLTARGETHIGHLIGHT_OFFSET))(nullptr);
		}

	};

