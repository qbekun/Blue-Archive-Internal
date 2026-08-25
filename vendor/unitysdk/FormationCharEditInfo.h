#pragma once
#include "unitysdk.h"

class SortingRule;

#define FORMATIONCHAREDITINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D8240)

	inline static constexpr unsigned int FormationCharEditInfo_TypeDefinitionIndex = 5965;

	class FormationCharEditInfo : public Il2CppObject
	{
	public:
		::System::Boolean IsCanNotUsePopup; // 0x10
		::Il2CppArray<::System::Object*>* Characters; // 0x18
		SortingRule* SortingRule; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHAREDITINFO_.CTOR_OFFSET))(nullptr);
		}

	};

