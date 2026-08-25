#pragma once
#include "unitysdk.h"

#define ONENDSTEPTUTORIALMESSEGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2041B00)

	inline static constexpr unsigned int OnEndStepTutorialMessege_TypeDefinitionIndex = 3258;

	class OnEndStepTutorialMessege : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONENDSTEPTUTORIALMESSEGE_.CTOR_OFFSET))(nullptr);
		}

	};

