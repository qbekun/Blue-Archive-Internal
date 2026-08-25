#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_POPULATEOPTIONCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9B7D8B0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesignerOptionService_TypeDefinitionIndex = 29552;

	class DesignerOptionService : public Il2CppObject
	{
	public:
		::System::Void PopulateOptionCollection(DesignerOptionCollection* arg)
		{
			((::System::Void(*)(DesignerOptionCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEROPTIONSERVICE_POPULATEOPTIONCOLLECTION_OFFSET))(arg, nullptr);
		}

	};
}

