#pragma once
#include "unitysdk.h"

#define LAZYCATTRDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9247620)

	inline static constexpr unsigned int LazyCAttrData_TypeDefinitionIndex = 24905;

	class LazyCAttrData : public Il2CppObject
	{
	public:
		::System::Reflection::Assembly* assembly; // 0x10
		::System::Int32 data; // 0x18
		::System::UInt32 data_length; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAZYCATTRDATA_.CTOR_OFFSET))(nullptr);
		}

	};

