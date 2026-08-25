#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_SUMMONGROUPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FC2E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SummonGroupData_TypeDefinitionIndex = 13729;

	class SummonGroupData : public Il2CppObject
	{
	public:
		::System::String* GroupName; // 0x10
		::System::Int64 Rate; // 0x18
		Il2CppObject* SummonEntities; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONGROUPDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

