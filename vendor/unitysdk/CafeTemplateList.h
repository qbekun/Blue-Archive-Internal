#pragma once
#include "unitysdk.h"

#define CAFETEMPLATELIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2267C00)
#define CAFETEMPLATELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x22681A0)

	inline static constexpr unsigned int CafeTemplateList_TypeDefinitionIndex = 4599;

	class CafeTemplateList : public AttrName
	{
	public:
		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATELIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATELIST_.CTOR_OFFSET))(nullptr);
		}

	};

