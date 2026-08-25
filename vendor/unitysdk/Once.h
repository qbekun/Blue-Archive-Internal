#pragma once
#include "unitysdk.h"

#define ONCE_VALIDATERANGE_OFFSET UNITYSDK_OFFSET(0xD95960)
#define ONCE_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD95970)
#define ONCE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD958F0)

	inline static constexpr unsigned int Once_TypeDefinitionIndex = 9743;

	class Once : public Il2CppObject
	{
	public:
		::System::Void ValidateRange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCE_VALIDATERANGE_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCE_GET_MAXCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCE_.CTOR_OFFSET))(nullptr);
		}

	};

