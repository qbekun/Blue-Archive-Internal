#pragma once
#include "unitysdk.h"

#define ONSTARTSTEPTUTORIALMESSEGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2041A90)

	inline static constexpr unsigned int OnStartStepTutorialMessege_TypeDefinitionIndex = 3259;

	class OnStartStepTutorialMessege : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONSTARTSTEPTUTORIALMESSEGE_.CTOR_OFFSET))(nullptr);
		}

	};

