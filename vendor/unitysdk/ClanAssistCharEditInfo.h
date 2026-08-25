#pragma once
#include "unitysdk.h"

class SortingRule;

#define CLANASSISTCHAREDITINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x220BEB0)

	inline static constexpr unsigned int ClanAssistCharEditInfo_TypeDefinitionIndex = 4353;

	class ClanAssistCharEditInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Characters; // 0x10
		SortingRule* SortingRule; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTCHAREDITINFO_.CTOR_OFFSET))(nullptr);
		}

	};

