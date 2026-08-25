#pragma once
#include "unitysdk.h"

#define UCITEMCONTAINERMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xCDBFD0)
#define UCITEMCONTAINERMODEL_UPDATE_OFFSET UNITYSDK_OFFSET(0xCDBFE0)
#define UCITEMCONTAINERMODEL_START_OFFSET UNITYSDK_OFFSET(0xCDBFF0)

	inline static constexpr unsigned int UCItemContainerModel_TypeDefinitionIndex = 9178;

	class UCItemContainerModel : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCITEMCONTAINERMODEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCITEMCONTAINERMODEL_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCITEMCONTAINERMODEL_START_OFFSET))(nullptr);
		}

	};

