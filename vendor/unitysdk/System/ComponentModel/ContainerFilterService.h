#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_CONTAINERFILTERSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B26590)
#define SYSTEM_COMPONENTMODEL_CONTAINERFILTERSERVICE_FILTERCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x9B265A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ContainerFilterService_TypeDefinitionIndex = 29364;

	class ContainerFilterService : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINERFILTERSERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::ComponentModel::ComponentCollection* FilterComponents(::System::ComponentModel::ComponentCollection* arg)
		{
			return (return (::System::ComponentModel::ComponentCollection*(*)(::System::ComponentModel::ComponentCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINERFILTERSERVICE_FILTERCOMPONENTS_OFFSET))(arg, nullptr);
		}

	};
}

