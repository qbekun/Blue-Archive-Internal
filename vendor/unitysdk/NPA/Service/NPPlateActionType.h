#pragma once
#include "../../unitysdk.h"

namespace NPA::Service { class NPPlateActionType; }

namespace NPA::Service
{
	inline static constexpr unsigned int NPPlateActionType_TypeDefinitionIndex = 27289;

	class NPPlateActionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Service::NPPlateActionType* NPPlateActionTypeDataBackup; // 0x0
		::NPA::Service::NPPlateActionType* NPPlateActionTypeDataRestore; // 0x0
		::NPA::Service::NPPlateActionType* NPPlateActionTypeMeta; // 0x0

	};
}

