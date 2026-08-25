#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_ENABLEINPLAYMODEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEAD0)

namespace TriInspector
{
	inline static constexpr unsigned int EnableInPlayModeAttribute_TypeDefinitionIndex = 37825;

	class EnableInPlayModeAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_ENABLEINPLAYMODEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

