#pragma once
#include "unitysdk.h"

#define UIPRODUCTDAILYRECORDREWARD_OPENNOTICE_ONENDOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x267DEE0)
#define UIPRODUCTDAILYRECORDREWARD_OPENNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x267DF60)

	inline static constexpr unsigned int UIProductDailyRecordReward_OpenNotice_TypeDefinitionIndex = 6733;

	class UIProductDailyRecordReward_OpenNotice : public Il2CppObject
	{
	public:
		::System::Void OnEndOpenAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPRODUCTDAILYRECORDREWARD_OPENNOTICE_ONENDOPENANIMATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPRODUCTDAILYRECORDREWARD_OPENNOTICE_.CTOR_OFFSET))(nullptr);
		}

	};

