#pragma once
#include "unitysdk.h"

#define RETSURVEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x211D990)

	inline static constexpr unsigned int RetSurvey_TypeDefinitionIndex = 3877;

	class RetSurvey : public Il2CppObject
	{
	public:
		::System::Int32 RESULT_CODE; // 0x10
		::System::String* RESULT_DESCRIPTION; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETSURVEY_.CTOR_OFFSET))(nullptr);
		}

	};

