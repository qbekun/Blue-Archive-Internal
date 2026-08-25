#pragma once
#include "unitysdk.h"

#define COUNT_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD95980)
#define COUNT_VALIDATERANGE_OFFSET UNITYSDK_OFFSET(0xD95990)
#define COUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD959A0)

	inline static constexpr unsigned int Count_TypeDefinitionIndex = 9744;

	class Count : public Il2CppObject
	{
	public:
		::System::Int32 maxCount; // 0x10

		::System::Int32 get_MaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNT_GET_MAXCOUNT_OFFSET))(nullptr);
		}

		::System::Void ValidateRange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNT_VALIDATERANGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNT_.CTOR_OFFSET))(nullptr);
		}

	};

