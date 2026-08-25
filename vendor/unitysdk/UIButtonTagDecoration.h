#pragma once
#include "unitysdk.h"

#define UIBUTTONTAGDECORATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2702910)
#define UIBUTTONTAGDECORATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x2702920)
#define UIBUTTONTAGDECORATION_START_OFFSET UNITYSDK_OFFSET(0x2702930)

	inline static constexpr unsigned int UIButtonTagDecoration_TypeDefinitionIndex = 7084;

	class UIButtonTagDecoration : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONTAGDECORATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONTAGDECORATION_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONTAGDECORATION_START_OFFSET))(nullptr);
		}

	};

