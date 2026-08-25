#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ISUPPORTINITIALIZE_BEGININIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ISUPPORTINITIALIZE_ENDINIT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ISupportInitialize_TypeDefinitionIndex = 29333;

	class ISupportInitialize : public Il2CppObject
	{
	public:
		::System::Void BeginInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISUPPORTINITIALIZE_BEGININIT_OFFSET))(nullptr);
		}

		::System::Void EndInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISUPPORTINITIALIZE_ENDINIT_OFFSET))(nullptr);
		}

	};
}

