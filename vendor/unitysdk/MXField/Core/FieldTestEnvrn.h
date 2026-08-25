#pragma once
#include "../../unitysdk.h"

#define MXFIELD_CORE_FIELDTESTENVRN_AWAKE_OFFSET UNITYSDK_OFFSET(0xED9FC0)
#define MXFIELD_CORE_FIELDTESTENVRN_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDA100)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldTestEnvrn_TypeDefinitionIndex = 10964;

	class FieldTestEnvrn : public Il2CppObject
	{
	public:
		::System::Boolean DebugQuest; // 0x18

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDTESTENVRN_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDTESTENVRN_.CTOR_OFFSET))(nullptr);
		}

	};
}

